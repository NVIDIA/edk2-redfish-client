/** @file
  Redfish JSON Blob library to keep Redfish data in variable in JSON format.

  Copyright (c) 2023-2026, NVIDIA CORPORATION & AFFILIATES. All rights reserved.

  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "RedfishJsonBlobInternal.h"
#include "RedfishJsonCompress.h"

/**
  This function release JSON blob data instance.

  @param[in]  JsonBlobData  JSON blob instance to release.

**/
VOID
RedfishFreeJsonBlobData (
  IN REDFISH_JSON_BLOB_DATA  *JsonBlobData
  )
{
  if (JsonBlobData == NULL) {
    return;
  }

  if (JsonBlobData->Signature != REDFISH_JSON_BLOB_SIGNATURE) {
    return;
  }

  if (JsonBlobData->VariableName != NULL) {
    FreePool (JsonBlobData->VariableName);
  }

  FreePool (JsonBlobData);
}

/**
  This function create new JSON blob data instance and
  return the handler to caller.

  @param[in]  BlobGuid          The GUID of this blob.
  @param[in]  BlobName          The name of this blob.
  @param[in]  ToStructureFunc   Callback function to convert data from JSON blob to
                                private structure.
  @param[in]  ToJsonFunc        Callback function to convert data to JSON blob.
  @param[in]  Context           Pointer to context from caller.

  @retval REDFISH_JSON_BLOB_DATA *  Pointer to newly created instance.
  @retval NULL                      Error occurs.
**/
REDFISH_JSON_BLOB_DATA *
RedfishNewJsonBlobData (
  IN EFI_GUID                        *BlobGuid,
  IN EFI_STRING                      BlobName,
  IN REDFISH_JSON_BLOB_TO_STRUCTURE  ToStructureFunc,
  IN REDFISH_JSON_BLOB_TO_JSON       ToJsonFunc,
  IN VOID                            *Context OPTIONAL
  )
{
  REDFISH_JSON_BLOB_DATA  *JsonBlobData;

  if (IS_EMPTY_STRING (BlobName)) {
    return NULL;
  }

  JsonBlobData = AllocateZeroPool (sizeof (REDFISH_JSON_BLOB_DATA));
  if (JsonBlobData == NULL) {
    DEBUG ((DEBUG_ERROR, "%a: out of resources\n", __func__));
    return NULL;
  }

  JsonBlobData->Signature    = REDFISH_JSON_BLOB_SIGNATURE;
  JsonBlobData->ToJsonFunc   = ToJsonFunc;
  JsonBlobData->ToStructFunc = ToStructureFunc;
  JsonBlobData->Context      = Context;
  JsonBlobData->IsEmpty      = TRUE;
  CopyGuid (&JsonBlobData->VariableGuid, BlobGuid);
  JsonBlobData->VariableName = AllocateCopyPool (StrSize (BlobName), BlobName);
  if (JsonBlobData->VariableName == NULL) {
    DEBUG ((DEBUG_ERROR, "%a: out of resources\n", __func__));
    goto ON_ERROR;
  }

  return JsonBlobData;

ON_ERROR:

  RedfishFreeJsonBlobData (JsonBlobData);

  return NULL;
}

/**
  This function decompress BlobData by using EFI decompress protocol.

  @param[in]    BlobData           Blob data to be decompressed.
  @param[in]    BlobDataSize       Blob data size.
  @param[out]   DecompressedData   Pointer to keep decompressed data.
  @param[out]   DecompressDataSize Size of decompressed data.

  @retval EFI_SUCCESS           Data is decompressed successfully.
  @retval Others                Error occurs.

**/
EFI_STATUS
RedfishJsonBlobDecompress (
  VOID    *BlobData,
  UINT32  BlobDataSize,
  VOID    **DecompressedData,
  UINT32  *DecompressDataSize
  )
{
  EFI_STATUS               Status;
  EFI_DECOMPRESS_PROTOCOL  *Decompress;
  UINT32                   OutSize;
  VOID                     *OutBuffer;
  UINT32                   ScratchSize;
  VOID                     *ScratchBuffer;

  OutSize       = 0;
  ScratchSize   = 0;
  OutBuffer     = NULL;
  ScratchBuffer = NULL;

  if ((BlobData == NULL) || (BlobDataSize == 0) || (DecompressedData == NULL)) {
    return EFI_INVALID_PARAMETER;
  }

  *DecompressedData   = NULL;
  *DecompressDataSize = 0;
  Status              = gBS->LocateProtocol (
                               &gEfiDecompressProtocolGuid,
                               NULL,
                               (VOID **)&Decompress
                               );
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: failed to locate decompress protocol: %r\n", __func__, Status));
    return Status;
  }

  Status = Decompress->GetInfo (
                         Decompress,
                         BlobData,
                         BlobDataSize,
                         &OutSize,
                         &ScratchSize
                         );
  if (EFI_ERROR (Status) || (OutSize == 0)) {
    DEBUG ((DEBUG_WARN, "%a: this is not efi compressed data: %r\n", __func__, Status));
    return Status;
  }

  OutBuffer     = AllocateZeroPool (OutSize);
  ScratchBuffer = AllocateZeroPool (ScratchSize);
  if ((OutBuffer == NULL) || (ScratchBuffer == NULL)) {
    Status = EFI_OUT_OF_RESOURCES;
    goto ON_RELEASE;
  }

  Status = Decompress->Decompress (
                         Decompress,
                         BlobData,
                         BlobDataSize,
                         OutBuffer,
                         OutSize,
                         ScratchBuffer,
                         ScratchSize
                         );
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_WARN, "%a: failed to compressed data: %r\n", __func__, Status));
    goto ON_RELEASE;
  }

  *DecompressDataSize = OutSize;
  *DecompressedData   = OutBuffer;

ON_RELEASE:

  if (ScratchBuffer != NULL) {
    FreePool (ScratchBuffer);
  }

  return Status;
}

/**
  Open JSON blob with given GUID and name. Use RedfishJsonBlobIsEmpty() to see if
  JSON blob exist in system or not. If JSON blob already exist, ToStructureFunc()
  is called in order to convert data from JSON format to private data structure.

  @param[in]    BlobGuid          JSON blob GUID.
  @param[in]    BlobName          JSON blob name.
  @param[in]    ToStructureFunc   Callback function to convert data from JSON blob to
                                  private structure.
  @param[in]    ToJsonFunc        Callback function to convert data to JSON blob.
  @param[in]    Context           Pointer to context from caller.

  @retval REDFISH_JSON_BLOB *     JSON blob is opened successfully.
  @retval NULL                    Can not open JSON blob due to errors.

**/
REDFISH_JSON_BLOB *
RedfishJsonBlobOpen (
  IN EFI_GUID                        *BlobGuid,
  IN EFI_STRING                      BlobName,
  IN REDFISH_JSON_BLOB_TO_STRUCTURE  ToStructureFunc,
  IN REDFISH_JSON_BLOB_TO_JSON       ToJsonFunc,
  IN VOID                            *Context OPTIONAL
  )
{
  EFI_STATUS              Status;
  REDFISH_JSON_BLOB_DATA  *JsonBlobData;
  CHAR8                   *VariableData;
  UINTN                   VariableSize;
  EDKII_JSON_VALUE        JsonValue;
  CHAR8                   *DecompressedData;
  UINTN                   DecompressedDataSize;

  DecompressedData     = NULL;
  DecompressedDataSize = 0;

  if ((BlobGuid == NULL) || IS_EMPTY_STRING (BlobName) || (ToStructureFunc == NULL) || (ToJsonFunc == NULL)) {
    DEBUG ((DEBUG_ERROR, "%a: invalid parameters\n", __func__));
    return NULL;
  }

  DEBUG ((REDFISH_JSON_BLOB_DEBUG, "%a: open %s\n", __func__, BlobName));

  if (IsZeroGuid (BlobGuid)) {
    DEBUG ((DEBUG_ERROR, "%a: zero GUID\n", __func__));
    return NULL;
  }

  //
  // Create internal data
  //
  JsonBlobData = RedfishNewJsonBlobData (BlobGuid, BlobName, ToStructureFunc, ToJsonFunc, Context);
  if (JsonBlobData == NULL) {
    DEBUG ((DEBUG_ERROR, "%a: out of resources\n", __func__));
    return NULL;
  }

  //
  // Open variable and see if data exists or not.
  //
  Status = GetVariable2 (
             JsonBlobData->VariableName,
             &JsonBlobData->VariableGuid,
             (VOID *)&VariableData,
             &VariableSize
             );
  if (!EFI_ERROR (Status) && (VariableSize != 0)) {
    //
    // Decompress data first
    //
    Status = RedfishJsonBlobDecompress (
               (VOID *)VariableData,
               (UINT32)VariableSize,
               (VOID **)&DecompressedData,
               (UINT32 *)&DecompressedDataSize
               );
    if (!EFI_ERROR (Status) && (DecompressedData != NULL)) {
      DEBUG ((REDFISH_JSON_BLOB_COMPRESS_DEBUG, "%a: variable %s data decompressed successfully, size: 0x%x\n", __func__, JsonBlobData->VariableName, DecompressedDataSize));
      JsonValue = JsonLoadString (DecompressedData, 0, NULL);
    } else {
      //
      // Variable data might be in JSON text
      //
      JsonValue = JsonLoadString (VariableData, 0, NULL);
    }

    if ((JsonValue == NULL) || !JsonValueIsObject (JsonValue)) {
      DEBUG ((DEBUG_ERROR, "%a: invalid JSON data: %s GUID: %g\n", __func__, JsonBlobData->VariableName, &JsonBlobData->VariableGuid));
    } else {
      //
      // Debug print
      //
      DEBUG_CODE (
        DumpJsonValue (REDFISH_JSON_BLOB_DEBUG, JsonValue);
        );

      //
      // Invoke caller's converter function.
      //
      Status = JsonBlobData->ToStructFunc (JsonValue, JsonBlobData->Context);
      if (EFI_ERROR (Status)) {
        if (Status == EFI_NOT_FOUND) {
          DEBUG ((REDFISH_JSON_BLOB_DEBUG, "%a: ToStructFunc no data returned: %r\n", __func__, Status));
        } else {
          DEBUG ((DEBUG_ERROR, "%a: ToStructFunc return: %r\n", __func__, Status));
        }
      } else {
        JsonBlobData->IsEmpty = FALSE;
      }

      JsonValueFree (JsonValue);
    }

    FreePool (VariableData);
  }

  if (DecompressedData != NULL) {
    FreePool (DecompressedData);
  }

  return (REDFISH_JSON_BLOB *)JsonBlobData;
}

/**
  Write JSON blob with given JSON blob handler to system. ToJsonFunc() is
  called in order to convert data from private data structure to JSON object.

  @param[in]    Blob            Pointer to JSON blob instance.

  @retval EFI_SUCCESS           Write JSON blob successfully.
  @retval Others                Error occurs.

**/
EFI_STATUS
RedfishJsonBlobWrite (
  IN REDFISH_JSON_BLOB  *Blob
  )
{
  EFI_STATUS              Status;
  REDFISH_JSON_BLOB_DATA  *JsonBlobData;
  EDKII_JSON_VALUE        JsonValue;
  CHAR8                   *VariableData;
  UINTN                   VariableSize;
  VOID                    *Data;
  UINT64                  CompressedSize;
  VOID                    *CompressedBuffer;

  if (Blob == NULL) {
    return EFI_INVALID_PARAMETER;
  }

  JsonBlobData     = NULL;
  JsonValue        = NULL;
  VariableData     = NULL;
  Data             = NULL;
  VariableSize     = 0;
  CompressedSize   = 0;
  CompressedBuffer = NULL;

  JsonBlobData = (REDFISH_JSON_BLOB_DATA *)Blob;
  if (JsonBlobData->Signature != REDFISH_JSON_BLOB_SIGNATURE) {
    return EFI_VOLUME_CORRUPTED;
  }

  DEBUG ((REDFISH_JSON_BLOB_DEBUG, "%a: write %s\n", __func__, JsonBlobData->VariableName));

  JsonValue = JsonValueInitObject ();
  if (JsonValue == NULL) {
    return EFI_OUT_OF_RESOURCES;
  }

  //
  // Invoke caller's converter function.
  //
  Status = JsonBlobData->ToJsonFunc (JsonValue, JsonBlobData->Context);
  if (EFI_ERROR (Status)) {
    if (Status == EFI_NOT_FOUND) {
      DEBUG ((REDFISH_JSON_BLOB_DEBUG, "%a: ToJsonFunc no data returned: %r\n", __func__, Status));
    } else {
      DEBUG ((DEBUG_ERROR, "%a: ToJsonFunc return: %r\n", __func__, Status));
    }

    goto ON_RELEASE;
  }

  if (!JsonValueIsObject (JsonValue)) {
    Status = EFI_VOLUME_CORRUPTED;
    goto ON_RELEASE;
  }

  //
  // Debug print
  //
  DEBUG_CODE (
    DumpJsonValue (REDFISH_JSON_BLOB_DEBUG, JsonValue);
    );

  VariableData = JsonDumpString (JsonValue, EDKII_JSON_COMPACT);
  if (VariableData == NULL) {
    Status = EFI_NOT_FOUND;
    goto ON_RELEASE;
  }

  VariableSize = AsciiStrSize (VariableData);
  if (VariableSize == 0) {
    Status = EFI_NOT_FOUND;
    goto ON_RELEASE;
  }

  //
  // If variable exists already, remove it first.
  //
  Status = GetVariable2 (
             JsonBlobData->VariableName,
             &JsonBlobData->VariableGuid,
             (VOID *)&Data,
             NULL
             );
  if (!EFI_ERROR (Status)) {
    FreePool (Data);
    gRT->SetVariable (
           JsonBlobData->VariableName,
           &JsonBlobData->VariableGuid,
           REDFISH_JSON_BLOB_VARIABLE_ATTR,
           0,
           NULL
           );
  }

  //
  // Compress the data
  //
  Status = Compress ((VOID *)VariableData, (UINT64)VariableSize, CompressedBuffer, &CompressedSize);
  if (Status == EFI_BUFFER_TOO_SMALL) {
    CompressedBuffer = AllocateZeroPool ((UINTN)CompressedSize);
    if (CompressedBuffer == NULL) {
      Status = EFI_OUT_OF_RESOURCES;
    } else {
      Status = Compress ((VOID *)VariableData, (UINT64)VariableSize, CompressedBuffer, &CompressedSize);
    }
  }

  if (EFI_ERROR (Status)) {
    //
    // Failed to compress data. Save data in JSON text.
    //
    Status = gRT->SetVariable (
                    JsonBlobData->VariableName,
                    &JsonBlobData->VariableGuid,
                    REDFISH_JSON_BLOB_VARIABLE_ATTR,
                    VariableSize,
                    (VOID *)VariableData
                    );
  } else {
    //
    // Data is compressed.
    //

    DEBUG ((REDFISH_JSON_BLOB_COMPRESS_DEBUG, "Variable %s size before compress= 0x%x after compress= 0x%x\n", JsonBlobData->VariableName, VariableSize, CompressedSize));
    Status = gRT->SetVariable (
                    JsonBlobData->VariableName,
                    &JsonBlobData->VariableGuid,
                    REDFISH_JSON_BLOB_VARIABLE_ATTR,
                    CompressedSize,
                    CompressedBuffer
                    );
  }

  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: set variable (%s %g)failure: %r\n", __func__, JsonBlobData->VariableName, &JsonBlobData->VariableGuid, Status));
    goto ON_RELEASE;
  }

  JsonBlobData->IsEmpty = FALSE;

ON_RELEASE:

  if (JsonValue != NULL) {
    JsonValueFree (JsonValue);
  }

  if (VariableData != NULL) {
    FreePool (VariableData);
  }

  if (CompressedBuffer != NULL) {
    FreePool (CompressedBuffer);
  }

  return Status;
}

/**
  Close JSON blob with given JSON blob handler and save Data to system if DoWrite
  is set to TRUE. After this function is returned, Blob is released and no longer
  be usable.

  @param[in]    Blob            Pointer to JSON blob instance.
  @param[in]    DoWrite         RedfishJsonBlobWrite() is called if it is set to TRUE.

  @retval EFI_SUCCESS           JSON blob is closed successfully.
  @retval Others                Error occurs.

**/
EFI_STATUS
RedfishJsonBlobClose (
  IN REDFISH_JSON_BLOB  *Blob,
  IN BOOLEAN            DoWrite
  )
{
  EFI_STATUS              Status;
  REDFISH_JSON_BLOB_DATA  *JsonBlobData;

  if (Blob == NULL) {
    return EFI_INVALID_PARAMETER;
  }

  Status       = EFI_SUCCESS;
  JsonBlobData = NULL;
  JsonBlobData = (REDFISH_JSON_BLOB_DATA *)Blob;
  if (JsonBlobData->Signature != REDFISH_JSON_BLOB_SIGNATURE) {
    return EFI_VOLUME_CORRUPTED;
  }

  DEBUG ((REDFISH_JSON_BLOB_DEBUG, "%a: close %s\n", __func__, JsonBlobData->VariableName));

  if (DoWrite) {
    Status = RedfishJsonBlobWrite (Blob);
  }

  RedfishFreeJsonBlobData (JsonBlobData);

  return Status;
}

/**
  Return TRUE if given Blob is empty. FALSE otherwise.

  @param[in]    Blob            Pointer to JSON blob instance.

  @retval TRUE     Blob is empty.
  @retval FALSE    Blob is not empty.

**/
BOOLEAN
RedfishJsonBlobIsEmpty (
  IN REDFISH_JSON_BLOB  *Blob
  )
{
  REDFISH_JSON_BLOB_DATA  *JsonBlobData;

  if (Blob == NULL) {
    return TRUE;
  }

  JsonBlobData = (REDFISH_JSON_BLOB_DATA *)Blob;
  if (JsonBlobData->Signature != REDFISH_JSON_BLOB_SIGNATURE) {
    return TRUE;
  }

  return JsonBlobData->IsEmpty;
}

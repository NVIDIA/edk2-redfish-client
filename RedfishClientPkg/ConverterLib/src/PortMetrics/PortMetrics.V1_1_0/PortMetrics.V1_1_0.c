//
// Auto-generated file by Redfish Schema C Structure Generator.
// https://github.com/DMTF/Redfish-Schema-C-Struct-Generator.
//
//  (C) Copyright 2019-2021 Hewlett Packard Enterprise Development LP<BR>
//
// Copyright Notice:
// Copyright 2019-2021 Distributed Management Task Force, Inc. All rights reserved.
// License: BSD 3-Clause License. For full text see link: https://github.com/DMTF/Redfish-JSON-C-Struct-Converter/blob/master/LICENSE.md
//

#include"Redfish_PortMetrics_v1_1_0_CS.h"
#include <stdlib.h>
#include <string.h>
#include <jansson.h>

RedfishCS_bool SupportedRedfishResource (RedfishCS_char *Odata_Type, RedfishCS_char *NameSpace, RedfishCS_char *Version, RedfishCS_char *DataType);
RedfishCS_status CreateCsUriByNode (RedfishCS_void *Cs, json_t *JsonOj, RedfishCS_char *NodeName, RedfishCS_char *ParentUri, RedfishCS_Type_Uri_Data **CsTypeUriData);
RedfishCS_status CreateCsJsonByNode (RedfishCS_void *Cs, json_t *JsonOj, RedfishCS_char *NodeName, RedfishCS_char *ParentUri, RedfishCS_Type_JSON_Data **CsTypeJsonData);
RedfishCS_status CreateCsUriOrJsonByNode (RedfishCS_void *Cs, json_t *JsonObj, RedfishCS_char *NodeName, RedfishCS_char *ParentUri, RedfishCS_Link *LinkHead);
RedfishCS_status CreateCsUriOrJsonByNodeArray (RedfishCS_void *Cs, json_t *JsonObj, RedfishCS_char *NodeName, RedfishCS_char *ParentUri, RedfishCS_Link *LinkHead);
RedfishCS_status CreateJsonPayloadAndCs (char *JsonRawText, char *ResourceType, char *ResourceVersion, char *TypeName, json_t **JsonObjReturned, void **Cs, int size);
RedfishCS_status GetRedfishPropertyStr (RedfishCS_void *Cs, json_t *JsonObj, char *Key, RedfishCS_char **DstBuffer);
RedfishCS_status GetRedfishPropertyBoolean (RedfishCS_void *Cs, json_t *JsonObj, char *Key, RedfishCS_bool **DstBuffer);
RedfishCS_status GetRedfishPropertyVague (RedfishCS_void *Cs, json_t *JsonObj, char *Key, RedfishCS_Vague **DstBuffer);
RedfishCS_status DestoryCsMemory (RedfishCS_void *rootCs);
RedfishCS_status GetRedfishPropertyInt64 (RedfishCS_void *Cs, json_t *JsonObj, char *Key, RedfishCS_int64 **Dst);
RedfishCS_status InsertJsonStringObj (json_t *JsonObj, char *Key, char *StringValue);
RedfishCS_status InsertJsonLinkObj (json_t *JsonObj, char *Key, RedfishCS_Link *Link);
RedfishCS_status InsertJsonInt64Obj (json_t *ParentJsonObj, char *Key, RedfishCS_int64 *Int64Value);
RedfishCS_status InsertJsonBoolObj (json_t *ParentJsonObj, char *Key, RedfishCS_bool *BoolValue);
RedfishCS_status InsertJsonStringArrayObj (json_t *JsonObj, char *Key, RedfishCS_char_Array *StringValueArray);
RedfishCS_status InsertJsonLinkArrayObj (json_t *JsonObj, char *Key, RedfishCS_Link *LinkArray);
RedfishCS_status InsertJsonInt64ArrayObj (json_t *ParentJsonObj, char *Key, RedfishCS_int64_Array *Int64ValueArray);
RedfishCS_status InsertJsonBoolArrayObj (json_t *ParentJsonObj, char *Key, RedfishCS_bool_Array *BoolValueArray);
RedfishCS_status InsertJsonVagueObj (json_t *ParentJsonObj, char *Key, RedfishCS_Vague *VagueValue);
RedfishCS_bool CheckEmptyPropJsonObject(json_t *JsonObj, RedfishCS_uint32 *NumOfProperty);
RedfishCS_status CreateEmptyPropCsJson(RedfishCS_void *Cs, json_t *JsonOj, RedfishCS_char *NodeName, RedfishCS_char *ParentUri, RedfishCS_Type_EmptyProp_CS_Data **CsTypeEmptyPropCS, RedfishCS_uint32 NunmOfProperties);
RedfishCS_status CsEmptyPropLinkToJson(json_t *CsJson, char *Key, RedfishCS_Link *Link);

//
//Generate C structure for Oem
//
static RedfishCS_status GenOemActionsCs(RedfishPortMetrics_V1_1_0_PortMetrics_CS *Cs, json_t *JsonObj, char *Key, RedfishPortMetrics_V1_1_0_OemActions_CS **Dst)
{
  RedfishCS_status Status;
  RedfishCS_Type_JSON_Data *CsTypeJson;
  RedfishCS_Type_EmptyProp_CS_Data *CsTypeEmptyPropCS;
  RedfishCS_uint32 NunmOfEmptyPropProperties;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishPortMetrics_V1_1_0_OemActions_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  InitializeLinkHead (&(*Dst)->Prop);

  //
  // Try to create C structure if the property is
  // declared as empty property in schema. The supported property type
  // is string, integer, real, number and boolean.
  //
  if (CheckEmptyPropJsonObject(TempJsonObj, &NunmOfEmptyPropProperties)) {
    Status = CreateEmptyPropCsJson(Cs, JsonObj, Key, Cs->Header.ThisUri, &CsTypeEmptyPropCS, NunmOfEmptyPropProperties);
    if (Status != RedfishCS_status_success) {
      goto Error;
    }
    InsertTailLink(&(*Dst)->Prop, &CsTypeEmptyPropCS->Header.LinkEntry);
  } else {
    Status = CreateCsJsonByNode (Cs, JsonObj, Key, Cs->Header.ThisUri, &CsTypeJson);
    if (Status != RedfishCS_status_success) {
      goto Error;
    }
    InsertTailLink(&(*Dst)->Prop, &CsTypeJson->Header.LinkEntry);
  }
Error:;
  return Status;
}
//
//Generate C structure for Actions
//
static RedfishCS_status GenActionsCs(RedfishPortMetrics_V1_1_0_PortMetrics_CS *Cs, json_t *JsonObj, char *Key, RedfishPortMetrics_V1_1_0_Actions_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishPortMetrics_V1_1_0_Actions_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // Oem
  Status = GenOemActionsCs (Cs, TempJsonObj, "Oem", &(*Dst)->Oem);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for GenZ
//
static RedfishCS_status GenGenZCs(RedfishPortMetrics_V1_1_0_PortMetrics_CS *Cs, json_t *JsonObj, char *Key, RedfishPortMetrics_V1_1_0_GenZ_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishPortMetrics_V1_1_0_GenZ_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // AccessKeyViolations
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "AccessKeyViolations", &(*Dst)->AccessKeyViolations);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // EndToEndCRCErrors
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "EndToEndCRCErrors", &(*Dst)->EndToEndCRCErrors);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // LLRRecovery
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "LLRRecovery", &(*Dst)->LLRRecovery);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // LinkNTE
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "LinkNTE", &(*Dst)->LinkNTE);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // MarkedECN
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "MarkedECN", &(*Dst)->MarkedECN);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // NonCRCTransientErrors
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "NonCRCTransientErrors", &(*Dst)->NonCRCTransientErrors);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // PacketCRCErrors
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "PacketCRCErrors", &(*Dst)->PacketCRCErrors);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // PacketDeadlineDiscards
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "PacketDeadlineDiscards", &(*Dst)->PacketDeadlineDiscards);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // RXStompedECRC
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "RXStompedECRC", &(*Dst)->RXStompedECRC);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ReceivedECN
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "ReceivedECN", &(*Dst)->ReceivedECN);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // TXStompedECRC
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "TXStompedECRC", &(*Dst)->TXStompedECRC);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for Networking
//
static RedfishCS_status GenNetworkingCs(RedfishPortMetrics_V1_1_0_PortMetrics_CS *Cs, json_t *JsonObj, char *Key, RedfishPortMetrics_V1_1_0_Networking_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishPortMetrics_V1_1_0_Networking_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // RDMAProtectionErrors
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "RDMAProtectionErrors", &(*Dst)->RDMAProtectionErrors);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // RDMAProtocolErrors
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "RDMAProtocolErrors", &(*Dst)->RDMAProtocolErrors);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // RDMARXBytes
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "RDMARXBytes", &(*Dst)->RDMARXBytes);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // RDMARXRequests
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "RDMARXRequests", &(*Dst)->RDMARXRequests);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // RDMATXBytes
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "RDMATXBytes", &(*Dst)->RDMATXBytes);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // RDMATXReadRequests
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "RDMATXReadRequests", &(*Dst)->RDMATXReadRequests);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // RDMATXRequests
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "RDMATXRequests", &(*Dst)->RDMATXRequests);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // RDMATXSendRequests
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "RDMATXSendRequests", &(*Dst)->RDMATXSendRequests);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // RDMATXWriteRequests
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "RDMATXWriteRequests", &(*Dst)->RDMATXWriteRequests);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // RXBroadcastFrames
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "RXBroadcastFrames", &(*Dst)->RXBroadcastFrames);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // RXDiscards
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "RXDiscards", &(*Dst)->RXDiscards);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // RXFCSErrors
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "RXFCSErrors", &(*Dst)->RXFCSErrors);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // RXFalseCarrierErrors
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "RXFalseCarrierErrors", &(*Dst)->RXFalseCarrierErrors);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // RXFrameAlignmentErrors
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "RXFrameAlignmentErrors", &(*Dst)->RXFrameAlignmentErrors);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // RXFrames
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "RXFrames", &(*Dst)->RXFrames);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // RXMulticastFrames
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "RXMulticastFrames", &(*Dst)->RXMulticastFrames);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // RXOversizeFrames
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "RXOversizeFrames", &(*Dst)->RXOversizeFrames);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // RXPFCFrames
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "RXPFCFrames", &(*Dst)->RXPFCFrames);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // RXPauseXOFFFrames
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "RXPauseXOFFFrames", &(*Dst)->RXPauseXOFFFrames);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // RXPauseXONFrames
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "RXPauseXONFrames", &(*Dst)->RXPauseXONFrames);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // RXUndersizeFrames
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "RXUndersizeFrames", &(*Dst)->RXUndersizeFrames);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // RXUnicastFrames
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "RXUnicastFrames", &(*Dst)->RXUnicastFrames);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // TXBroadcastFrames
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "TXBroadcastFrames", &(*Dst)->TXBroadcastFrames);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // TXDiscards
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "TXDiscards", &(*Dst)->TXDiscards);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // TXExcessiveCollisions
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "TXExcessiveCollisions", &(*Dst)->TXExcessiveCollisions);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // TXFrames
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "TXFrames", &(*Dst)->TXFrames);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // TXLateCollisions
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "TXLateCollisions", &(*Dst)->TXLateCollisions);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // TXMulticastFrames
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "TXMulticastFrames", &(*Dst)->TXMulticastFrames);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // TXMultipleCollisions
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "TXMultipleCollisions", &(*Dst)->TXMultipleCollisions);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // TXPFCFrames
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "TXPFCFrames", &(*Dst)->TXPFCFrames);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // TXPauseXOFFFrames
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "TXPauseXOFFFrames", &(*Dst)->TXPauseXOFFFrames);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // TXPauseXONFrames
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "TXPauseXONFrames", &(*Dst)->TXPauseXONFrames);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // TXSingleCollisions
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "TXSingleCollisions", &(*Dst)->TXSingleCollisions);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // TXUnicastFrames
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "TXUnicastFrames", &(*Dst)->TXUnicastFrames);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for Oem
//
static RedfishCS_status GenOemCs(RedfishPortMetrics_V1_1_0_PortMetrics_CS *Cs, json_t *JsonObj, char *Key, RedfishResource_Oem_CS **Dst)
{
  RedfishCS_status Status;
  RedfishCS_Type_JSON_Data *CsTypeJson;
  RedfishCS_Type_EmptyProp_CS_Data *CsTypeEmptyPropCS;
  RedfishCS_uint32 NunmOfEmptyPropProperties;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishResource_Oem_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  InitializeLinkHead (&(*Dst)->Prop);

  //
  // Try to create C structure if the property is
  // declared as empty property in schema. The supported property type
  // is string, integer, real, number and boolean.
  //
  if (CheckEmptyPropJsonObject(TempJsonObj, &NunmOfEmptyPropProperties)) {
    Status = CreateEmptyPropCsJson(Cs, JsonObj, Key, Cs->Header.ThisUri, &CsTypeEmptyPropCS, NunmOfEmptyPropProperties);
    if (Status != RedfishCS_status_success) {
      goto Error;
    }
    InsertTailLink(&(*Dst)->Prop, &CsTypeEmptyPropCS->Header.LinkEntry);
  } else {
    Status = CreateCsJsonByNode (Cs, JsonObj, Key, Cs->Header.ThisUri, &CsTypeJson);
    if (Status != RedfishCS_status_success) {
      goto Error;
    }
    InsertTailLink(&(*Dst)->Prop, &CsTypeJson->Header.LinkEntry);
  }
Error:;
  return Status;
}
static RedfishCS_status GenSAS_Array_ElementCs(RedfishPortMetrics_V1_1_0_PortMetrics_CS *Cs, json_t *JsonObj, RedfishCS_uint64 Index,  RedfishPortMetrics_V1_1_0_SAS_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_array_get (JsonObj, (RedfishCS_int)Index);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsZeroMemory(Cs, sizeof(RedfishPortMetrics_V1_1_0_SAS_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // InvalidDwordCount
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "InvalidDwordCount", &(*Dst)->InvalidDwordCount);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // LossOfDwordSynchronizationCount
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "LossOfDwordSynchronizationCount", &(*Dst)->LossOfDwordSynchronizationCount);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // RunningDisparityErrorCount
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "RunningDisparityErrorCount", &(*Dst)->RunningDisparityErrorCount);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  return RedfishCS_status_success;
Error:;
  return Status;
}
//
//Generate C structure for RedfishPortMetrics_V1_1_0_SAS_Array_CS
//
static RedfishCS_status GenSAS_ArrayCs(RedfishPortMetrics_V1_1_0_PortMetrics_CS *Cs, json_t *JsonObj, char *Key, RedfishPortMetrics_V1_1_0_SAS_Array_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;
  RedfishCS_uint64 ArraySize;
  RedfishCS_uint64 Index;
  RedfishPortMetrics_V1_1_0_SAS_Array_CS *ThisElement;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }

  if (json_is_array(TempJsonObj) != RedfishCS_boolean_true) {
    return RedfishCS_status_invalid_parameter;
  }

  ArraySize = json_array_size (TempJsonObj);
  Status = allocateArrayRecordCsMemory(Cs, sizeof (RedfishPortMetrics_V1_1_0_SAS_Array_CS), ArraySize, (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  if (*Dst == NULL) {
    // Empty array
    return RedfishCS_status_success;
  }
  ThisElement = *Dst;
  for (Index = 0; Index < ArraySize; Index ++) {
    Status = GenSAS_Array_ElementCs(Cs, TempJsonObj, Index, &ThisElement->ArrayValue);
    if (Status != RedfishCS_status_success){
      goto Error;
    }
    ThisElement = ThisElement->Next;
  }
Error:;
  return Status;
}
static RedfishCS_status GenTransceiver_Array_ElementCs(RedfishPortMetrics_V1_1_0_PortMetrics_CS *Cs, json_t *JsonObj, RedfishCS_uint64 Index,  RedfishPortMetrics_V1_1_0_Transceiver_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_array_get (JsonObj, (RedfishCS_int)Index);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsZeroMemory(Cs, sizeof(RedfishPortMetrics_V1_1_0_Transceiver_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // RXInputPowerMilliWatts
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "RXInputPowerMilliWatts", &(*Dst)->RXInputPowerMilliWatts);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // SupplyVoltage
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "SupplyVoltage", &(*Dst)->SupplyVoltage);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // TXBiasCurrentMilliAmps
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "TXBiasCurrentMilliAmps", &(*Dst)->TXBiasCurrentMilliAmps);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // TXOutputPowerMilliWatts
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "TXOutputPowerMilliWatts", &(*Dst)->TXOutputPowerMilliWatts);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  return RedfishCS_status_success;
Error:;
  return Status;
}
//
//Generate C structure for RedfishPortMetrics_V1_1_0_Transceiver_Array_CS
//
static RedfishCS_status GenTransceiver_ArrayCs(RedfishPortMetrics_V1_1_0_PortMetrics_CS *Cs, json_t *JsonObj, char *Key, RedfishPortMetrics_V1_1_0_Transceiver_Array_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;
  RedfishCS_uint64 ArraySize;
  RedfishCS_uint64 Index;
  RedfishPortMetrics_V1_1_0_Transceiver_Array_CS *ThisElement;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }

  if (json_is_array(TempJsonObj) != RedfishCS_boolean_true) {
    return RedfishCS_status_invalid_parameter;
  }

  ArraySize = json_array_size (TempJsonObj);
  Status = allocateArrayRecordCsMemory(Cs, sizeof (RedfishPortMetrics_V1_1_0_Transceiver_Array_CS), ArraySize, (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  if (*Dst == NULL) {
    // Empty array
    return RedfishCS_status_success;
  }
  ThisElement = *Dst;
  for (Index = 0; Index < ArraySize; Index ++) {
    Status = GenTransceiver_Array_ElementCs(Cs, TempJsonObj, Index, &ThisElement->ArrayValue);
    if (Status != RedfishCS_status_success){
      goto Error;
    }
    ThisElement = ThisElement->Next;
  }
Error:;
  return Status;
}
static RedfishCS_status CS_To_JSON_ActionsOem(json_t *CsJson, char *Key, RedfishPortMetrics_V1_1_0_OemActions_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // Check if this is RedfishCS_Type_CS_EmptyProp.
  CsEmptyPropLinkToJson(CsJson, Key, &CSPtr->Prop);
  // No JSON property for this structure.
  return RedfishCS_status_success;
}
static RedfishCS_status CS_To_JSON_Actions(json_t *CsJson, char *Key, RedfishPortMetrics_V1_1_0_Actions_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // Oem
  if (CS_To_JSON_ActionsOem(CsJson, "Oem", CSPtr->Oem) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_GenZ(json_t *CsJson, char *Key, RedfishPortMetrics_V1_1_0_GenZ_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // AccessKeyViolations 
  if (InsertJsonInt64Obj (CsJson, "AccessKeyViolations", CSPtr->AccessKeyViolations) != RedfishCS_status_success) {goto Error;}

  // EndToEndCRCErrors 
  if (InsertJsonInt64Obj (CsJson, "EndToEndCRCErrors", CSPtr->EndToEndCRCErrors) != RedfishCS_status_success) {goto Error;}

  // LLRRecovery 
  if (InsertJsonInt64Obj (CsJson, "LLRRecovery", CSPtr->LLRRecovery) != RedfishCS_status_success) {goto Error;}

  // LinkNTE 
  if (InsertJsonInt64Obj (CsJson, "LinkNTE", CSPtr->LinkNTE) != RedfishCS_status_success) {goto Error;}

  // MarkedECN 
  if (InsertJsonInt64Obj (CsJson, "MarkedECN", CSPtr->MarkedECN) != RedfishCS_status_success) {goto Error;}

  // NonCRCTransientErrors 
  if (InsertJsonInt64Obj (CsJson, "NonCRCTransientErrors", CSPtr->NonCRCTransientErrors) != RedfishCS_status_success) {goto Error;}

  // PacketCRCErrors 
  if (InsertJsonInt64Obj (CsJson, "PacketCRCErrors", CSPtr->PacketCRCErrors) != RedfishCS_status_success) {goto Error;}

  // PacketDeadlineDiscards 
  if (InsertJsonInt64Obj (CsJson, "PacketDeadlineDiscards", CSPtr->PacketDeadlineDiscards) != RedfishCS_status_success) {goto Error;}

  // RXStompedECRC 
  if (InsertJsonInt64Obj (CsJson, "RXStompedECRC", CSPtr->RXStompedECRC) != RedfishCS_status_success) {goto Error;}

  // ReceivedECN 
  if (InsertJsonInt64Obj (CsJson, "ReceivedECN", CSPtr->ReceivedECN) != RedfishCS_status_success) {goto Error;}

  // TXStompedECRC 
  if (InsertJsonInt64Obj (CsJson, "TXStompedECRC", CSPtr->TXStompedECRC) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_Networking(json_t *CsJson, char *Key, RedfishPortMetrics_V1_1_0_Networking_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // RDMAProtectionErrors 
  if (InsertJsonInt64Obj (CsJson, "RDMAProtectionErrors", CSPtr->RDMAProtectionErrors) != RedfishCS_status_success) {goto Error;}

  // RDMAProtocolErrors 
  if (InsertJsonInt64Obj (CsJson, "RDMAProtocolErrors", CSPtr->RDMAProtocolErrors) != RedfishCS_status_success) {goto Error;}

  // RDMARXBytes 
  if (InsertJsonInt64Obj (CsJson, "RDMARXBytes", CSPtr->RDMARXBytes) != RedfishCS_status_success) {goto Error;}

  // RDMARXRequests 
  if (InsertJsonInt64Obj (CsJson, "RDMARXRequests", CSPtr->RDMARXRequests) != RedfishCS_status_success) {goto Error;}

  // RDMATXBytes 
  if (InsertJsonInt64Obj (CsJson, "RDMATXBytes", CSPtr->RDMATXBytes) != RedfishCS_status_success) {goto Error;}

  // RDMATXReadRequests 
  if (InsertJsonInt64Obj (CsJson, "RDMATXReadRequests", CSPtr->RDMATXReadRequests) != RedfishCS_status_success) {goto Error;}

  // RDMATXRequests 
  if (InsertJsonInt64Obj (CsJson, "RDMATXRequests", CSPtr->RDMATXRequests) != RedfishCS_status_success) {goto Error;}

  // RDMATXSendRequests 
  if (InsertJsonInt64Obj (CsJson, "RDMATXSendRequests", CSPtr->RDMATXSendRequests) != RedfishCS_status_success) {goto Error;}

  // RDMATXWriteRequests 
  if (InsertJsonInt64Obj (CsJson, "RDMATXWriteRequests", CSPtr->RDMATXWriteRequests) != RedfishCS_status_success) {goto Error;}

  // RXBroadcastFrames 
  if (InsertJsonInt64Obj (CsJson, "RXBroadcastFrames", CSPtr->RXBroadcastFrames) != RedfishCS_status_success) {goto Error;}

  // RXDiscards 
  if (InsertJsonInt64Obj (CsJson, "RXDiscards", CSPtr->RXDiscards) != RedfishCS_status_success) {goto Error;}

  // RXFCSErrors 
  if (InsertJsonInt64Obj (CsJson, "RXFCSErrors", CSPtr->RXFCSErrors) != RedfishCS_status_success) {goto Error;}

  // RXFalseCarrierErrors 
  if (InsertJsonInt64Obj (CsJson, "RXFalseCarrierErrors", CSPtr->RXFalseCarrierErrors) != RedfishCS_status_success) {goto Error;}

  // RXFrameAlignmentErrors 
  if (InsertJsonInt64Obj (CsJson, "RXFrameAlignmentErrors", CSPtr->RXFrameAlignmentErrors) != RedfishCS_status_success) {goto Error;}

  // RXFrames 
  if (InsertJsonInt64Obj (CsJson, "RXFrames", CSPtr->RXFrames) != RedfishCS_status_success) {goto Error;}

  // RXMulticastFrames 
  if (InsertJsonInt64Obj (CsJson, "RXMulticastFrames", CSPtr->RXMulticastFrames) != RedfishCS_status_success) {goto Error;}

  // RXOversizeFrames 
  if (InsertJsonInt64Obj (CsJson, "RXOversizeFrames", CSPtr->RXOversizeFrames) != RedfishCS_status_success) {goto Error;}

  // RXPFCFrames 
  if (InsertJsonInt64Obj (CsJson, "RXPFCFrames", CSPtr->RXPFCFrames) != RedfishCS_status_success) {goto Error;}

  // RXPauseXOFFFrames 
  if (InsertJsonInt64Obj (CsJson, "RXPauseXOFFFrames", CSPtr->RXPauseXOFFFrames) != RedfishCS_status_success) {goto Error;}

  // RXPauseXONFrames 
  if (InsertJsonInt64Obj (CsJson, "RXPauseXONFrames", CSPtr->RXPauseXONFrames) != RedfishCS_status_success) {goto Error;}

  // RXUndersizeFrames 
  if (InsertJsonInt64Obj (CsJson, "RXUndersizeFrames", CSPtr->RXUndersizeFrames) != RedfishCS_status_success) {goto Error;}

  // RXUnicastFrames 
  if (InsertJsonInt64Obj (CsJson, "RXUnicastFrames", CSPtr->RXUnicastFrames) != RedfishCS_status_success) {goto Error;}

  // TXBroadcastFrames 
  if (InsertJsonInt64Obj (CsJson, "TXBroadcastFrames", CSPtr->TXBroadcastFrames) != RedfishCS_status_success) {goto Error;}

  // TXDiscards 
  if (InsertJsonInt64Obj (CsJson, "TXDiscards", CSPtr->TXDiscards) != RedfishCS_status_success) {goto Error;}

  // TXExcessiveCollisions 
  if (InsertJsonInt64Obj (CsJson, "TXExcessiveCollisions", CSPtr->TXExcessiveCollisions) != RedfishCS_status_success) {goto Error;}

  // TXFrames 
  if (InsertJsonInt64Obj (CsJson, "TXFrames", CSPtr->TXFrames) != RedfishCS_status_success) {goto Error;}

  // TXLateCollisions 
  if (InsertJsonInt64Obj (CsJson, "TXLateCollisions", CSPtr->TXLateCollisions) != RedfishCS_status_success) {goto Error;}

  // TXMulticastFrames 
  if (InsertJsonInt64Obj (CsJson, "TXMulticastFrames", CSPtr->TXMulticastFrames) != RedfishCS_status_success) {goto Error;}

  // TXMultipleCollisions 
  if (InsertJsonInt64Obj (CsJson, "TXMultipleCollisions", CSPtr->TXMultipleCollisions) != RedfishCS_status_success) {goto Error;}

  // TXPFCFrames 
  if (InsertJsonInt64Obj (CsJson, "TXPFCFrames", CSPtr->TXPFCFrames) != RedfishCS_status_success) {goto Error;}

  // TXPauseXOFFFrames 
  if (InsertJsonInt64Obj (CsJson, "TXPauseXOFFFrames", CSPtr->TXPauseXOFFFrames) != RedfishCS_status_success) {goto Error;}

  // TXPauseXONFrames 
  if (InsertJsonInt64Obj (CsJson, "TXPauseXONFrames", CSPtr->TXPauseXONFrames) != RedfishCS_status_success) {goto Error;}

  // TXSingleCollisions 
  if (InsertJsonInt64Obj (CsJson, "TXSingleCollisions", CSPtr->TXSingleCollisions) != RedfishCS_status_success) {goto Error;}

  // TXUnicastFrames 
  if (InsertJsonInt64Obj (CsJson, "TXUnicastFrames", CSPtr->TXUnicastFrames) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_Oem(json_t *CsJson, char *Key, RedfishResource_Oem_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // Check if this is RedfishCS_Type_CS_EmptyProp.
  CsEmptyPropLinkToJson(CsJson, Key, &CSPtr->Prop);
  // No JSON property for this structure.
  return RedfishCS_status_success;
}
static RedfishCS_status CS_To_JSON_SAS(json_t *CsJson, char *Key, RedfishPortMetrics_V1_1_0_SAS_Array_CS *CSPtr)
{
  json_t *ArrayJson;
  json_t *ArrayMember;
  RedfishPortMetrics_V1_1_0_SAS_Array_CS *NextArray;
  RedfishPortMetrics_V1_1_0_SAS_CS *NextArrayItem;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  ArrayJson = json_array();
  if (ArrayJson == NULL) {
    return RedfishCS_status_unsupported;
  }
  NextArray = CSPtr;
  do {
    ArrayMember = json_object();
    if (ArrayMember == NULL) {
      return RedfishCS_status_unsupported;
    }

    NextArrayItem = NextArray->ArrayValue;
    // InvalidDwordCount 
    if (InsertJsonInt64Obj (ArrayMember, "InvalidDwordCount", NextArrayItem->InvalidDwordCount) != RedfishCS_status_success) {goto Error;}

    // LossOfDwordSynchronizationCount 
    if (InsertJsonInt64Obj (ArrayMember, "LossOfDwordSynchronizationCount", NextArrayItem->LossOfDwordSynchronizationCount) != RedfishCS_status_success) {goto Error;}

    // RunningDisparityErrorCount 
    if (InsertJsonInt64Obj (ArrayMember, "RunningDisparityErrorCount", NextArrayItem->RunningDisparityErrorCount) != RedfishCS_status_success) {goto Error;}

    if (json_array_append_new (ArrayJson, ArrayMember) != 0) {goto Error;}
    NextArray = NextArray->Next;
  } while (NextArray != NULL);
  json_object_set_new (CsJson, Key, ArrayJson);

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_Transceivers(json_t *CsJson, char *Key, RedfishPortMetrics_V1_1_0_Transceiver_Array_CS *CSPtr)
{
  json_t *ArrayJson;
  json_t *ArrayMember;
  RedfishPortMetrics_V1_1_0_Transceiver_Array_CS *NextArray;
  RedfishPortMetrics_V1_1_0_Transceiver_CS *NextArrayItem;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  ArrayJson = json_array();
  if (ArrayJson == NULL) {
    return RedfishCS_status_unsupported;
  }
  NextArray = CSPtr;
  do {
    ArrayMember = json_object();
    if (ArrayMember == NULL) {
      return RedfishCS_status_unsupported;
    }

    NextArrayItem = NextArray->ArrayValue;
    // RXInputPowerMilliWatts 
    if (InsertJsonInt64Obj (ArrayMember, "RXInputPowerMilliWatts", NextArrayItem->RXInputPowerMilliWatts) != RedfishCS_status_success) {goto Error;}

    // SupplyVoltage 
    if (InsertJsonInt64Obj (ArrayMember, "SupplyVoltage", NextArrayItem->SupplyVoltage) != RedfishCS_status_success) {goto Error;}

    // TXBiasCurrentMilliAmps 
    if (InsertJsonInt64Obj (ArrayMember, "TXBiasCurrentMilliAmps", NextArrayItem->TXBiasCurrentMilliAmps) != RedfishCS_status_success) {goto Error;}

    // TXOutputPowerMilliWatts 
    if (InsertJsonInt64Obj (ArrayMember, "TXOutputPowerMilliWatts", NextArrayItem->TXOutputPowerMilliWatts) != RedfishCS_status_success) {goto Error;}

    if (json_array_append_new (ArrayJson, ArrayMember) != 0) {goto Error;}
    NextArray = NextArray->Next;
  } while (NextArray != NULL);
  json_object_set_new (CsJson, Key, ArrayJson);

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}

//
// C structure to JSON for PortMetrics.V1_1_0.PortMetrics
//
RedfishCS_status CS_To_PortMetrics_V1_1_0_JSON(RedfishPortMetrics_V1_1_0_PortMetrics_CS *CSPtr, RedfishCS_char **JsonText)
{
  json_t  *CsJson;

  if (CSPtr == NULL || JsonText == NULL || CSPtr->Header.ResourceType != RedfishCS_Type_CS) {
    return RedfishCS_status_invalid_parameter;
  }
  CsJson = json_object();
  if (CsJson == NULL) {
    return RedfishCS_status_unsupported;
  }
  // Actions
  if (CS_To_JSON_Actions(CsJson, "Actions", CSPtr->Actions) != RedfishCS_status_success) {goto Error;}

  // Description 
  if (InsertJsonStringObj (CsJson, "Description", CSPtr->Description) != RedfishCS_status_success) {goto Error;}

  // GenZ
  if (CS_To_JSON_GenZ(CsJson, "GenZ", CSPtr->GenZ) != RedfishCS_status_success) {goto Error;}

  // Id 
  if (InsertJsonStringObj (CsJson, "Id", CSPtr->Id) != RedfishCS_status_success) {goto Error;}

  // Name 
  if (InsertJsonStringObj (CsJson, "Name", CSPtr->Name) != RedfishCS_status_success) {goto Error;}

  // Networking
  if (CS_To_JSON_Networking(CsJson, "Networking", CSPtr->Networking) != RedfishCS_status_success) {goto Error;}

  // Oem
  if (CS_To_JSON_Oem(CsJson, "Oem", CSPtr->Oem) != RedfishCS_status_success) {goto Error;}

  // RXBytes 
  if (InsertJsonInt64Obj (CsJson, "RXBytes", CSPtr->RXBytes) != RedfishCS_status_success) {goto Error;}

  // RXErrors 
  if (InsertJsonInt64Obj (CsJson, "RXErrors", CSPtr->RXErrors) != RedfishCS_status_success) {goto Error;}

  // SAS
  if (CS_To_JSON_SAS(CsJson, "SAS", CSPtr->SAS) != RedfishCS_status_success) {goto Error;}

  // TXBytes 
  if (InsertJsonInt64Obj (CsJson, "TXBytes", CSPtr->TXBytes) != RedfishCS_status_success) {goto Error;}

  // TXErrors 
  if (InsertJsonInt64Obj (CsJson, "TXErrors", CSPtr->TXErrors) != RedfishCS_status_success) {goto Error;}

  // Transceivers
  if (CS_To_JSON_Transceivers(CsJson, "Transceivers", CSPtr->Transceivers) != RedfishCS_status_success) {goto Error;}

  // @odata.context 
  if (InsertJsonStringObj (CsJson, "@odata.context", CSPtr->odata_context) != RedfishCS_status_success) {goto Error;}

  // @odata.etag 
  if (InsertJsonStringObj (CsJson, "@odata.etag", CSPtr->odata_etag) != RedfishCS_status_success) {goto Error;}

  // @odata.id 
  if (InsertJsonStringObj (CsJson, "@odata.id", CSPtr->odata_id) != RedfishCS_status_success) {goto Error;}

  // @odata.type 
  if (InsertJsonStringObj (CsJson, "@odata.type", CSPtr->odata_type) != RedfishCS_status_success) {goto Error;}

  *JsonText = (RedfishCS_char *)json_dumps(CsJson, JSON_INDENT(2 * 1) | JSON_ENSURE_ASCII);
  json_decref(CsJson);
  return RedfishCS_status_success;
Error:;
  json_decref(CsJson);
  return RedfishCS_status_unsupported;
}

//
// Destory C Structure for PortMetrics.V1_1_0.PortMetrics
//
RedfishCS_status DestroyPortMetrics_V1_1_0_CS(RedfishPortMetrics_V1_1_0_PortMetrics_CS *CSPtr)
{
  RedfishCS_status Status;

  Status = DestoryCsMemory ((RedfishCS_void *)CSPtr);
  return Status;
}

//
// Destory JSON text for PortMetrics.V1_1_0.PortMetrics
//
RedfishCS_status DestroyPortMetrics_V1_1_0_Json(RedfishCS_char *JsonText)
{
  free ((RedfishCS_void *)JsonText);
  return RedfishCS_status_success;
}

//
//Generate C structure for PortMetrics.V1_1_0.PortMetrics
//
RedfishCS_status
Json_PortMetrics_V1_1_0_To_CS(RedfishCS_char *JsonRawText, RedfishPortMetrics_V1_1_0_PortMetrics_CS **ReturnedCs)
{
  RedfishCS_status  Status;
  json_t *JsonObj;
  RedfishPortMetrics_V1_1_0_PortMetrics_CS *Cs;

  Status = CreateJsonPayloadAndCs (JsonRawText, "PortMetrics", "v1_1_0", "PortMetrics", &JsonObj, (RedfishCS_void **)&Cs, sizeof (RedfishPortMetrics_V1_1_0_PortMetrics_CS));
  if (Status != RedfishCS_status_success) {
    goto Error;
  }

  // @odata.context
  Status = GetRedfishPropertyStr (Cs, JsonObj, "@odata.context", &Cs->odata_context);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // @odata.etag
  Status = GetRedfishPropertyStr (Cs, JsonObj, "@odata.etag", &Cs->odata_etag);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // @odata.id
  Status = GetRedfishPropertyStr (Cs, JsonObj, "@odata.id", &Cs->odata_id);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){goto Error;}}

  // @odata.type
  Status = GetRedfishPropertyStr (Cs, JsonObj, "@odata.type", &Cs->odata_type);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){goto Error;}}

  // Actions
  Status = GenActionsCs (Cs, JsonObj, "Actions", &Cs->Actions);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Description
  Status = GetRedfishPropertyStr (Cs, JsonObj, "Description", &Cs->Description);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // GenZ
  Status = GenGenZCs (Cs, JsonObj, "GenZ", &Cs->GenZ);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Id
  Status = GetRedfishPropertyStr (Cs, JsonObj, "Id", &Cs->Id);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){goto Error;}}

  // Name
  Status = GetRedfishPropertyStr (Cs, JsonObj, "Name", &Cs->Name);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){goto Error;}}

  // Networking
  Status = GenNetworkingCs (Cs, JsonObj, "Networking", &Cs->Networking);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Oem
  Status = GenOemCs (Cs, JsonObj, "Oem", &Cs->Oem);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // RXBytes
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "RXBytes", &Cs->RXBytes);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // RXErrors
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "RXErrors", &Cs->RXErrors);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // SAS
  Status = GenSAS_ArrayCs (Cs, JsonObj, "SAS", &Cs->SAS);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // TXBytes
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "TXBytes", &Cs->TXBytes);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // TXErrors
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "TXErrors", &Cs->TXErrors);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Transceivers
  Status = GenTransceiver_ArrayCs (Cs, JsonObj, "Transceivers", &Cs->Transceivers);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  json_decref(JsonObj);
  *ReturnedCs = Cs;
  return RedfishCS_status_success;
Error:;
  json_decref(JsonObj);
  DestroyPortMetrics_V1_1_0_CS (Cs);
  return Status;
}

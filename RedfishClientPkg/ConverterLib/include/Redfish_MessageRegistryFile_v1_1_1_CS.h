//
// Auto-generated file by Redfish Schema C Structure Generator.
// https://github.com/DMTF/Redfish-Schema-C-Struct-Generator.
//
//  (C) Copyright 2019-2022 Hewlett Packard Enterprise Development LP<BR>
//  Copyright (c) 2023-2024, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
//  Copyright (C) 2024 Advanced Micro Devices, Inc. All rights reserved.<BR>
//
// Copyright Notice:
// Copyright 2019-2024 Distributed Management Task Force, Inc. All rights reserved.
// License: BSD 3-Clause License. For full text see link: https://github.com/DMTF/Redfish-JSON-C-Struct-Converter/blob/master/LICENSE.md
//

#ifndef RedfishMessageregistryfile_V1_1_1_CSTRUCT_H_
#define RedfishMessageregistryfile_V1_1_1_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishMessageRegistryFile_V1_1_1_Location_Array_CS RedfishMessageRegistryFile_V1_1_1_Location_Array_CS;
typedef struct _RedfishMessageRegistryFile_V1_1_1_Actions_CS RedfishMessageRegistryFile_V1_1_1_Actions_CS;
typedef struct _RedfishMessageRegistryFile_V1_1_1_Location_CS RedfishMessageRegistryFile_V1_1_1_Location_CS;
typedef struct _RedfishMessageRegistryFile_V1_1_1_MessageRegistryFile_CS RedfishMessageRegistryFile_V1_1_1_MessageRegistryFile_CS;
typedef struct _RedfishMessageRegistryFile_V1_1_1_OemActions_CS RedfishMessageRegistryFile_V1_1_1_OemActions_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

//
// The available actions for this resource.
//
typedef struct _RedfishMessageRegistryFile_V1_1_1_Actions_CS {
    RedfishMessageRegistryFile_V1_1_1_OemActions_CS    *Oem;    // This property contains the
                                                               // available OEM specific actions
                                                               // for this resource.
} RedfishMessageRegistryFile_V1_1_1_Actions_CS;

//
// Location information for a schema file.
//
typedef struct _RedfishMessageRegistryFile_V1_1_1_Location_CS {
    RedfishCS_char    *ArchiveFile;      // If the schema is hosted on the
                                         // service in an archive file,
                                         // this is the name of the file
                                         // within the archive.
    RedfishCS_char    *ArchiveUri;       // If the schema is hosted on the
                                         // service in an archive file,
                                         // this is the link to the
                                         // archive file.
    RedfishCS_char    *Language;         // The language code for the file
                                         // the schema is in.
    RedfishCS_char    *PublicationUri;    // Link to publicly available
                                         // (canonical) URI for schema.
    RedfishCS_char    *Uri;              // Link to locally available URI
                                         // for schema.
} RedfishMessageRegistryFile_V1_1_1_Location_CS;

//
// The available OEM specific actions for this resource.
//
typedef struct _RedfishMessageRegistryFile_V1_1_1_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishMessageRegistryFile_V1_1_1_OemActions_CS;

//
// The OEM extension.
//
#ifndef RedfishResource_Oem_CS_
#define RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS {
    RedfishCS_Link    Prop;
} RedfishResource_Oem_CS;
#endif

//
// This is the schema definition for the Schema File locator resource.
//
typedef struct _RedfishMessageRegistryFile_V1_1_1_MessageRegistryFile_CS {
    RedfishCS_Header                                       Header;
    RedfishCS_char                                         *odata_context;
    RedfishCS_char                                         *odata_etag;  
    RedfishCS_char                                         *odata_id;    
    RedfishCS_char                                         *odata_type;  
    RedfishMessageRegistryFile_V1_1_1_Actions_CS           *Actions;         // The available actions for this
                                                                             // resource.
    RedfishCS_char                                         *Description; 
    RedfishCS_char                                         *Id;          
    RedfishCS_char_Array                                   *Languages;       // Language codes for the schemas
                                                                             // available.
    RedfishMessageRegistryFile_V1_1_1_Location_Array_CS    *Location;        // Location information for this
                                                                             // registry file.
    RedfishCS_char                                         *Name;        
    RedfishResource_Oem_CS                                 *Oem;             // This is the
                                                                             // manufacturer/provider specific
                                                                             // extension moniker used to
                                                                             // divide the Oem object into
                                                                             // sections.
    RedfishCS_char                                         *Registry;        // The Registry Name, Major, and
                                                                             // Minor version.  This Registry
                                                                             // can reference any type of
                                                                             // Registry, such as a Message
                                                                             // Registry, Privilege Registry,
                                                                             // or Attribute Registry.
} RedfishMessageRegistryFile_V1_1_1_MessageRegistryFile_CS;

typedef struct _RedfishMessageRegistryFile_V1_1_1_Location_Array_CS  {
    RedfishMessageRegistryFile_V1_1_1_Location_Array_CS    *Next;
    RedfishMessageRegistryFile_V1_1_1_Location_CS    *ArrayValue;
} RedfishMessageRegistryFile_V1_1_1_Location_Array_CS;

RedfishCS_status
Json_MessageRegistryFile_V1_1_1_To_CS (char *JsonRawText, RedfishMessageRegistryFile_V1_1_1_MessageRegistryFile_CS **ReturnedCS);

RedfishCS_status
CS_To_MessageRegistryFile_V1_1_1_JSON (RedfishMessageRegistryFile_V1_1_1_MessageRegistryFile_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyMessageRegistryFile_V1_1_1_CS (RedfishMessageRegistryFile_V1_1_1_MessageRegistryFile_CS *CSPtr);

RedfishCS_status
DestroyMessageRegistryFile_V1_1_1_Json (RedfishCS_char *JsonText);

#endif

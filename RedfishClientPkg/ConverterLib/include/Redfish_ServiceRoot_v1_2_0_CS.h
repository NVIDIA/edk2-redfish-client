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

#ifndef RedfishServiceroot_V1_2_0_CSTRUCT_H_
#define RedfishServiceroot_V1_2_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

typedef struct _RedfishServiceRoot_V1_2_0_ServiceRoot_CS RedfishServiceRoot_V1_2_0_ServiceRoot_CS;
typedef struct _RedfishServiceRoot_V1_2_0_ServiceRoot_Links_CS RedfishServiceRoot_V1_2_0_ServiceRoot_Links_CS;
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
// Contains references to other resources that are related to this resource.
//
typedef struct _RedfishServiceRoot_V1_2_0_ServiceRoot_Links_CS {
    RedfishResource_Oem_CS    *Oem;       // Oem extension object.
    RedfishCS_Link            Sessions;    // Link to a collection of
                                          // Sessions.
} RedfishServiceRoot_V1_2_0_ServiceRoot_Links_CS;

//
// This object represents the root Redfish service.
//
typedef struct _RedfishServiceRoot_V1_2_0_ServiceRoot_CS {
    RedfishCS_Header                                  Header;
    RedfishCS_char                                    *odata_context;   
    RedfishCS_char                                    *odata_id;        
    RedfishCS_char                                    *odata_type;      
    RedfishCS_Link                                    AccountService;       // This is a link to the Account
                                                                            // Service.
    RedfishCS_Link                                    Chassis;              // This is a link to a collection
                                                                            // of Chassis.
    RedfishCS_Link                                    CompositionService;    // This is a link to the
                                                                            // CompositionService.
    RedfishCS_char                                    *Description;     
    RedfishCS_Link                                    EventService;         // This is a link to the
                                                                            // EventService.
    RedfishCS_Link                                    Fabrics;              // A link to a collection of all
                                                                            // fabric entities.
    RedfishCS_char                                    *Id;              
    RedfishCS_Link                                    JsonSchemas;          // This is a link to a collection
                                                                            // of Json-Schema files.
    RedfishServiceRoot_V1_2_0_ServiceRoot_Links_CS    *Links;               // Contains references to other
                                                                            // resources that are related to
                                                                            // this resource.
    RedfishCS_Link                                    Managers;             // This is a link to a collection
                                                                            // of Managers.
    RedfishCS_char                                    *Name;            
    RedfishResource_Oem_CS                            *Oem;                 // This is the
                                                                            // manufacturer/provider specific
                                                                            // extension moniker used to
                                                                            // divide the Oem object into
                                                                            // sections.
    RedfishCS_char                                    *RedfishVersion;      // The version of the Redfish
                                                                            // service.
    RedfishCS_Link                                    Registries;           // This is a link to a collection
                                                                            // of Registries.
    RedfishCS_Link                                    SessionService;       // This is a link to the Sessions
                                                                            // Service.
    RedfishCS_Link                                    StorageServices;      // A link to a collection of all
                                                                            // storage service entities.
    RedfishCS_Link                                    StorageSystems;       // This is a link to a collection
                                                                            // of storage systems.
    RedfishCS_Link                                    Systems;              // This is a link to a collection
                                                                            // of Systems.
    RedfishCS_Link                                    Tasks;                // This is a link to the Task
                                                                            // Service.
    RedfishCS_char                                    *UUID;                // Unique identifier for a
                                                                            // service instance. When SSDP is
                                                                            // used, this value should be an
                                                                            // exact match of the UUID value
                                                                            // returned in a 200OK from an
                                                                            // SSDP M-SEARCH request during
                                                                            // discovery.
    RedfishCS_Link                                    UpdateService;        // This is a link to the
                                                                            // UpdateService.
} RedfishServiceRoot_V1_2_0_ServiceRoot_CS;

RedfishCS_status
Json_ServiceRoot_V1_2_0_To_CS (char *JsonRawText, RedfishServiceRoot_V1_2_0_ServiceRoot_CS **ReturnedCS);

RedfishCS_status
CS_To_ServiceRoot_V1_2_0_JSON (RedfishServiceRoot_V1_2_0_ServiceRoot_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyServiceRoot_V1_2_0_CS (RedfishServiceRoot_V1_2_0_ServiceRoot_CS *CSPtr);

RedfishCS_status
DestroyServiceRoot_V1_2_0_Json (RedfishCS_char *JsonText);

#endif

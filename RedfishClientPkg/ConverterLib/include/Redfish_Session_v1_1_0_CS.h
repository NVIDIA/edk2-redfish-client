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

#ifndef RedfishSession_V1_1_0_CSTRUCT_H_
#define RedfishSession_V1_1_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

typedef struct _RedfishSession_V1_1_0_Session_CS RedfishSession_V1_1_0_Session_CS;
typedef struct _RedfishSession_V1_1_0_Session_Actions_CS RedfishSession_V1_1_0_Session_Actions_CS;
typedef struct _RedfishSession_V1_1_0_Session_Actions_Oem_CS RedfishSession_V1_1_0_Session_Actions_Oem_CS;
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
// The available actions for this resource.
//
typedef struct _RedfishSession_V1_1_0_Session_Actions_CS {
    RedfishSession_V1_1_0_Session_Actions_Oem_CS    *Oem;    // The available OEM specific
                                                            // actions for this resource.
} RedfishSession_V1_1_0_Session_Actions_CS;

//
// The available OEM specific actions for this resource.
//
typedef struct _RedfishSession_V1_1_0_Session_Actions_Oem_CS {
    RedfishCS_Link    Prop;
} RedfishSession_V1_1_0_Session_Actions_Oem_CS;

//
// The Session resource describes a single connection (session) between a client
// and a Redfish service instance.
//
typedef struct _RedfishSession_V1_1_0_Session_CS {
    RedfishCS_Header                            Header;
    RedfishCS_char                              *odata_context;
    RedfishCS_char                              *odata_id;    
    RedfishCS_char                              *odata_type;  
    RedfishSession_V1_1_0_Session_Actions_CS    *Actions;         // The available actions for this
                                                                  // resource.
    RedfishCS_char                              *Description; 
    RedfishCS_char                              *Id;          
    RedfishCS_char                              *Name;        
    RedfishResource_Oem_CS                      *Oem;             // This is the
                                                                  // manufacturer/provider specific
                                                                  // extension moniker used to
                                                                  // divide the Oem object into
                                                                  // sections.
    RedfishCS_char                              *Password;        // This property is used in a
                                                                  // POST to specify a password
                                                                  // when creating a new session.
                                                                  // This property is null on a
                                                                  // GET.
    RedfishCS_char                              *UserName;        // The UserName for the account
                                                                  // for this session.
} RedfishSession_V1_1_0_Session_CS;

RedfishCS_status
Json_Session_V1_1_0_To_CS (char *JsonRawText, RedfishSession_V1_1_0_Session_CS **ReturnedCS);

RedfishCS_status
CS_To_Session_V1_1_0_JSON (RedfishSession_V1_1_0_Session_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroySession_V1_1_0_CS (RedfishSession_V1_1_0_Session_CS *CSPtr);

RedfishCS_status
DestroySession_V1_1_0_Json (RedfishCS_char *JsonText);

#endif

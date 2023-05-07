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

#ifndef RedfishRole_V1_2_6_CSTRUCT_H_
#define RedfishRole_V1_2_6_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

typedef struct _RedfishRole_V1_2_6_Actions_CS RedfishRole_V1_2_6_Actions_CS;
typedef struct _RedfishRole_V1_2_6_OemActions_CS RedfishRole_V1_2_6_OemActions_CS;
typedef struct _RedfishRole_V1_2_6_Role_CS RedfishRole_V1_2_6_Role_CS;
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
typedef struct _RedfishRole_V1_2_6_Actions_CS {
    RedfishRole_V1_2_6_OemActions_CS    *Oem;    // The available OEM-specific
                                                // actions for this resource.
} RedfishRole_V1_2_6_Actions_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishRole_V1_2_6_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishRole_V1_2_6_OemActions_CS;

//
// The Role schema contains a Redfish role to use in conjunction with a manager
// account.
//
typedef struct _RedfishRole_V1_2_6_Role_CS {
    RedfishCS_Header                 Header;
    RedfishCS_char                   *odata_context;    
    RedfishCS_char                   *odata_etag;       
    RedfishCS_char                   *odata_id;         
    RedfishCS_char                   *odata_type;       
    RedfishRole_V1_2_6_Actions_CS    *Actions;              // The available actions for this
                                                            // resource.
    RedfishCS_char_Array             *AssignedPrivileges;    // The Redfish privileges for
                                                            // this role.
    RedfishCS_char                   *Description;      
    RedfishCS_char                   *Id;               
    RedfishCS_bool                   *IsPredefined;         // An indication of whether the
                                                            // role is predefined by Redfish
                                                            // or an OEM rather than a
                                                            // client-defined role.
    RedfishCS_char                   *Name;             
    RedfishResource_Oem_CS           *Oem;                  // The OEM extension property.
    RedfishCS_char_Array             *OemPrivileges;        // The OEM privileges for this
                                                            // role.
    RedfishCS_char                   *RoleId;               // The name of the role.
} RedfishRole_V1_2_6_Role_CS;

RedfishCS_status
Json_Role_V1_2_6_To_CS (char *JsonRawText, RedfishRole_V1_2_6_Role_CS **ReturnedCS);

RedfishCS_status
CS_To_Role_V1_2_6_JSON (RedfishRole_V1_2_6_Role_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyRole_V1_2_6_CS (RedfishRole_V1_2_6_Role_CS *CSPtr);

RedfishCS_status
DestroyRole_V1_2_6_Json (RedfishCS_char *JsonText);

#endif

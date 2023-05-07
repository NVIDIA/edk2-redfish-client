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

#ifndef RedfishRegisteredclientcollection_Noversioned_CSTRUCT_H_
#define RedfishRegisteredclientcollection_Noversioned_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishRegisteredClientCollection_RegisteredClientCollection_CS RedfishRegisteredClientCollection_RegisteredClientCollection_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

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
// The collection of RegisteredClient resource instances.
//
typedef struct _RedfishRegisteredClientCollection_RegisteredClientCollection_CS {
    RedfishCS_Header          Header;
    RedfishCS_char            *odata_context;       
    RedfishCS_char            *odata_etag;          
    RedfishCS_char            *odata_id;            
    RedfishCS_char            *odata_type;          
    RedfishCS_char            *Description;         
    RedfishCS_Link            Members;                  // The members of this
                                                        // collection.
    RedfishCS_int64           *Membersodata_count;  
    RedfishCS_char            *Membersodata_nextLink;
    RedfishCS_char            *Name;                
    RedfishResource_Oem_CS    *Oem;                     // The OEM extension property.
} RedfishRegisteredClientCollection_RegisteredClientCollection_CS;

RedfishCS_status
Json_RegisteredClientCollection_To_CS (char *JsonRawText, RedfishRegisteredClientCollection_RegisteredClientCollection_CS **ReturnedCS);

RedfishCS_status
CS_To_RegisteredClientCollection_JSON (RedfishRegisteredClientCollection_RegisteredClientCollection_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyRegisteredClientCollection_CS (RedfishRegisteredClientCollection_RegisteredClientCollection_CS *CSPtr);

RedfishCS_status
DestroyRegisteredClientCollection_Json (RedfishCS_char *JsonText);

#endif

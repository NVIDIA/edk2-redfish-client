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

#ifndef RedfishZone_V1_1_4_CSTRUCT_H_
#define RedfishZone_V1_1_4_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_CS_
#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishResource_Condition_CS RedfishResource_Condition_CS;
#endif

#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

#ifndef RedfishResource_Status_CS_
typedef struct _RedfishResource_Status_CS RedfishResource_Status_CS;
#endif

typedef struct _RedfishZone_V1_1_4_Actions_CS RedfishZone_V1_1_4_Actions_CS;
typedef struct _RedfishZone_V1_1_4_Links_CS RedfishZone_V1_1_4_Links_CS;
typedef struct _RedfishZone_V1_1_4_OemActions_CS RedfishZone_V1_1_4_OemActions_CS;
typedef struct _RedfishZone_V1_1_4_Zone_CS RedfishZone_V1_1_4_Zone_CS;
#ifndef Redfishodatav4_idRef_CS_
typedef struct _Redfishodatav4_idRef_CS Redfishodatav4_idRef_CS;
#endif

//
// A condition that requires attention.
//
#ifndef RedfishResource_Condition_CS_
#define RedfishResource_Condition_CS_
typedef struct _RedfishResource_Condition_CS {
    RedfishCS_Link             LogEntry;             // The link to the log entry
                                                     // created for this condition.
    RedfishCS_char             *Message;             // The human-readable message for
                                                     // this condition.
    RedfishCS_char_Array       *MessageArgs;         // An array of message arguments
                                                     // that are substituted for the
                                                     // arguments in the message when
                                                     // looked up in the message
                                                     // registry.
    RedfishCS_char             *MessageId;           // The identifier for the
                                                     // message.
    Redfishodatav4_idRef_CS    *OriginOfCondition;    // A link to the resource or
                                                     // object that originated the
                                                     // condition.
    RedfishCS_char             *Resolution;          // Suggestions on how to resolve
                                                     // the condition.
    RedfishCS_char             *Severity;            // The severity of the condition.
    RedfishCS_char             *Timestamp;           // The time the condition
                                                     // occurred.
} RedfishResource_Condition_CS;
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
// The status and health of a resource and its children.
//
#ifndef RedfishResource_Status_CS_
#define RedfishResource_Status_CS_
typedef struct _RedfishResource_Status_CS {
    RedfishResource_Condition_Array_CS    *Conditions;     // Conditions in this resource
                                                           // that require attention.
    RedfishCS_char                        *Health;         // The health state of this
                                                           // resource in the absence of its
                                                           // dependent resources.
    RedfishCS_char                        *HealthRollup;    // The overall health state from
                                                           // the view of this resource.
    RedfishResource_Oem_CS                *Oem;            // The OEM extension property.
    RedfishCS_char                        *State;          // The known state of the
                                                           // resource, such as, enabled.
} RedfishResource_Status_CS;
#endif

//
// The available actions for this Resource.
//
typedef struct _RedfishZone_V1_1_4_Actions_CS {
    RedfishZone_V1_1_4_OemActions_CS    *Oem;    // The available OEM-specific
                                                // actions for this Resource.
} RedfishZone_V1_1_4_Actions_CS;

//
// The links to other Resources that are related to this Resource.
//
typedef struct _RedfishZone_V1_1_4_Links_CS {
    RedfishCS_Link            Endpoints;                      // The links to the endpoints
                                                              // that this zone contains.
    RedfishCS_int64           *Endpointsodata_count;      
    RedfishCS_Link            InvolvedSwitches;               // The links to the collection of
                                                              // switches in this zone.
    RedfishCS_int64           *InvolvedSwitchesodata_count;
    RedfishResource_Oem_CS    *Oem;                           // The OEM extension property.
    RedfishCS_Link            ResourceBlocks;                 // The links to the Resource
                                                              // Blocks with which this zone is
                                                              // associated.
    RedfishCS_int64           *ResourceBlocksodata_count; 
} RedfishZone_V1_1_4_Links_CS;

//
// The available OEM-specific actions for this Resource.
//
typedef struct _RedfishZone_V1_1_4_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishZone_V1_1_4_OemActions_CS;

//
// A reference to a resource.
//
#ifndef Redfishodatav4_idRef_CS_
#define Redfishodatav4_idRef_CS_
typedef struct _Redfishodatav4_idRef_CS {
    RedfishCS_char    *odata_id;
} Redfishodatav4_idRef_CS;
#endif

//
// The Zone schema describes a simple fabric zone for a Redfish implementation.
//
typedef struct _RedfishZone_V1_1_4_Zone_CS {
    RedfishCS_Header                 Header;
    RedfishCS_char                   *odata_context;
    RedfishCS_char                   *odata_etag;  
    RedfishCS_char                   *odata_id;    
    RedfishCS_char                   *odata_type;  
    RedfishZone_V1_1_4_Actions_CS    *Actions;         // The available actions for this
                                                       // Resource.
    RedfishCS_char                   *Description; 
    RedfishCS_char                   *Id;          
    RedfishZone_V1_1_4_Links_CS      *Links;           // The links to Resources related
                                                       // to but not subordinate to this
                                                       // Resource.
    RedfishCS_char                   *Name;        
    RedfishResource_Oem_CS           *Oem;             // The OEM extension property.
    RedfishResource_Status_CS        *Status;          // The status and health of the
                                                       // Resource and its subordinate
                                                       // or dependent Resources.
} RedfishZone_V1_1_4_Zone_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_Zone_V1_1_4_To_CS (char *JsonRawText, RedfishZone_V1_1_4_Zone_CS **ReturnedCS);

RedfishCS_status
CS_To_Zone_V1_1_4_JSON (RedfishZone_V1_1_4_Zone_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyZone_V1_1_4_CS (RedfishZone_V1_1_4_Zone_CS *CSPtr);

RedfishCS_status
DestroyZone_V1_1_4_Json (RedfishCS_char *JsonText);

#endif

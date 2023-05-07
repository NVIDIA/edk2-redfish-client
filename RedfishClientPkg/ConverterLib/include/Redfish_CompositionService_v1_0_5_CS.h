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

#ifndef RedfishCompositionservice_V1_0_5_CSTRUCT_H_
#define RedfishCompositionservice_V1_0_5_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishCompositionService_V1_0_5_Actions_CS RedfishCompositionService_V1_0_5_Actions_CS;
typedef struct _RedfishCompositionService_V1_0_5_CompositionService_CS RedfishCompositionService_V1_0_5_CompositionService_CS;
typedef struct _RedfishCompositionService_V1_0_5_OemActions_CS RedfishCompositionService_V1_0_5_OemActions_CS;
#ifndef RedfishResource_Condition_CS_
typedef struct _RedfishResource_Condition_CS RedfishResource_Condition_CS;
#endif

#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

#ifndef RedfishResource_Status_CS_
typedef struct _RedfishResource_Status_CS RedfishResource_Status_CS;
#endif

#ifndef Redfishodatav4_idRef_CS_
typedef struct _Redfishodatav4_idRef_CS Redfishodatav4_idRef_CS;
#endif

//
// The available actions for this resource.
//
typedef struct _RedfishCompositionService_V1_0_5_Actions_CS {
    RedfishCompositionService_V1_0_5_OemActions_CS    *Oem;    // The available OEM-specific
                                                              // actions for this resource.
} RedfishCompositionService_V1_0_5_Actions_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishCompositionService_V1_0_5_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishCompositionService_V1_0_5_OemActions_CS;

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
// A reference to a resource.
//
#ifndef Redfishodatav4_idRef_CS_
#define Redfishodatav4_idRef_CS_
typedef struct _Redfishodatav4_idRef_CS {
    RedfishCS_char    *odata_id;
} Redfishodatav4_idRef_CS;
#endif

//
// The CompositionService schema describes a composition service and its
// properties and links to the resources available for composition.
//
typedef struct _RedfishCompositionService_V1_0_5_CompositionService_CS {
    RedfishCS_Header                               Header;
    RedfishCS_char                                 *odata_context;
    RedfishCS_char                                 *odata_etag;   
    RedfishCS_char                                 *odata_id;     
    RedfishCS_char                                 *odata_type;   
    RedfishCompositionService_V1_0_5_Actions_CS    *Actions;          // The available actions for this
                                                                      // resource.
    RedfishCS_char                                 *Description;  
    RedfishCS_char                                 *Id;           
    RedfishCS_char                                 *Name;         
    RedfishResource_Oem_CS                         *Oem;              // The OEM extension property.
    RedfishCS_Link                                 ResourceBlocks;    // The resource blocks available
                                                                      // on the service.
    RedfishCS_Link                                 ResourceZones;     // The resource zones available
                                                                      // on the service.
    RedfishCS_bool                                 *ServiceEnabled;    // An indication of whether this
                                                                      // service is enabled.
    RedfishResource_Status_CS                      *Status;           // The status and health of the
                                                                      // resource and its subordinate
                                                                      // or dependent resources.
} RedfishCompositionService_V1_0_5_CompositionService_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_CompositionService_V1_0_5_To_CS (char *JsonRawText, RedfishCompositionService_V1_0_5_CompositionService_CS **ReturnedCS);

RedfishCS_status
CS_To_CompositionService_V1_0_5_JSON (RedfishCompositionService_V1_0_5_CompositionService_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyCompositionService_V1_0_5_CS (RedfishCompositionService_V1_0_5_CompositionService_CS *CSPtr);

RedfishCS_status
DestroyCompositionService_V1_0_5_Json (RedfishCS_char *JsonText);

#endif

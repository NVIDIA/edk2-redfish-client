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

#ifndef RedfishSessionservice_V1_1_6_CSTRUCT_H_
#define RedfishSessionservice_V1_1_6_CSTRUCT_H_

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

typedef struct _RedfishSessionService_V1_1_6_Actions_CS RedfishSessionService_V1_1_6_Actions_CS;
typedef struct _RedfishSessionService_V1_1_6_OemActions_CS RedfishSessionService_V1_1_6_OemActions_CS;
typedef struct _RedfishSessionService_V1_1_6_SessionService_CS RedfishSessionService_V1_1_6_SessionService_CS;
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
typedef struct _RedfishSessionService_V1_1_6_Actions_CS {
    RedfishSessionService_V1_1_6_OemActions_CS    *Oem;    // The available OEM-specific
                                                          // actions for this Resource.
} RedfishSessionService_V1_1_6_Actions_CS;

//
// The available OEM-specific actions for this Resource.
//
typedef struct _RedfishSessionService_V1_1_6_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishSessionService_V1_1_6_OemActions_CS;

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
// The SessionService schema describes the Session Service and its properties,
// with links to the actual list of sessions.
//
typedef struct _RedfishSessionService_V1_1_6_SessionService_CS {
    RedfishCS_Header                           Header;
    RedfishCS_char                             *odata_context;
    RedfishCS_char                             *odata_etag;   
    RedfishCS_char                             *odata_id;     
    RedfishCS_char                             *odata_type;   
    RedfishSessionService_V1_1_6_Actions_CS    *Actions;          // The available actions for this
                                                                  // Resource.
    RedfishCS_char                             *Description;  
    RedfishCS_char                             *Id;           
    RedfishCS_char                             *Name;         
    RedfishResource_Oem_CS                     *Oem;              // The OEM extension property.
    RedfishCS_bool                             *ServiceEnabled;    // An indication of whether this
                                                                  // service is enabled.  If
                                                                  // `true`, this service is
                                                                  // enabled.  If `false`, it is
                                                                  // disabled, and new sessions
                                                                  // cannot be created, old
                                                                  // sessions cannot be deleted,
                                                                  // and established sessions may
                                                                  // continue operating.
    RedfishCS_int64                            *SessionTimeout;    // The number of seconds of
                                                                  // inactivity that a session may
                                                                  // have before the Session
                                                                  // Service closes the session due
                                                                  // to inactivity.
    RedfishCS_Link                             Sessions;          // The link to a collection of
                                                                  // sessions.
    RedfishResource_Status_CS                  *Status;           // The status and health of the
                                                                  // Resource and its subordinate
                                                                  // or dependent Resources.
} RedfishSessionService_V1_1_6_SessionService_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_SessionService_V1_1_6_To_CS (char *JsonRawText, RedfishSessionService_V1_1_6_SessionService_CS **ReturnedCS);

RedfishCS_status
CS_To_SessionService_V1_1_6_JSON (RedfishSessionService_V1_1_6_SessionService_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroySessionService_V1_1_6_CS (RedfishSessionService_V1_1_6_SessionService_CS *CSPtr);

RedfishCS_status
DestroySessionService_V1_1_6_Json (RedfishCS_char *JsonText);

#endif

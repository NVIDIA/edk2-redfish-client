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

#ifndef RedfishEvent_V1_0_8_CSTRUCT_H_
#define RedfishEvent_V1_0_8_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishEvent_V1_0_8_EventRecord_Array_CS RedfishEvent_V1_0_8_EventRecord_Array_CS;
typedef struct _RedfishEvent_V1_0_8_Event_CS RedfishEvent_V1_0_8_Event_CS;
typedef struct _RedfishEvent_V1_0_8_EventRecord_CS RedfishEvent_V1_0_8_EventRecord_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

#ifndef Redfishodata_V4_0_3_idRef_CS_
typedef struct _Redfishodata_V4_0_3_idRef_CS Redfishodata_V4_0_3_idRef_CS;
#endif

typedef struct _RedfishEvent_V1_0_8_EventRecord_CS {
    RedfishCS_char                  *odata_id;        
    RedfishCS_char                  *Context;             // A context can be supplied at
                                                          // subscription time.  This
                                                          // property is the context value
                                                          // supplied by the subscriber.
    RedfishCS_char                  *EventId;             // This is a unique instance
                                                          // identifier of an event.
    RedfishCS_char                  *EventTimestamp;      // This is time the event
                                                          // occurred.
    RedfishCS_char                  *EventType;           // This indicates the type of
                                                          // event sent, according to the
                                                          // definitions in the
                                                          // EventService.
    RedfishCS_char                  *MemberId;            // This is the identifier for the
                                                          // member within the collection.
    RedfishCS_char                  *Message;             // This is the human readable
                                                          // message, if provided.
    RedfishCS_char_Array            *MessageArgs;         // This array of message
                                                          // arguments are substituted for
                                                          // the arguments in the message
                                                          // when looked up in the message
                                                          // registry.
    RedfishCS_char                  *MessageId;           // This is the key for this
                                                          // message which can be used to
                                                          // look up the message in a
                                                          // message registry.
    RedfishResource_Oem_CS          *Oem;                 // This is the
                                                          // manufacturer/provider specific
                                                          // extension moniker used to
                                                          // divide the Oem object into
                                                          // sections.
    Redfishodata_V4_0_3_idRef_CS    *OriginOfCondition;    // This indicates the resource
                                                          // that originated the condition
                                                          // that caused the event to be
                                                          // generated.
    RedfishCS_char                  *Severity;            // This is the severity of the
                                                          // event.
} RedfishEvent_V1_0_8_EventRecord_CS;

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
// A reference to a resource.
//
#ifndef Redfishodata_V4_0_3_idRef_CS_
#define Redfishodata_V4_0_3_idRef_CS_
typedef struct _Redfishodata_V4_0_3_idRef_CS {
    RedfishCS_char    *odata_id;
} Redfishodata_V4_0_3_idRef_CS;
#endif

//
// The Event schema describes the JSON payload received by an Event Destination
// (which has subscribed to event notification) when events occurs.  This resource
// contains data about event(s), including descriptions, severity and MessageId
// reference to a Message Registry that can be accessed for further information.
//
typedef struct _RedfishEvent_V1_0_8_Event_CS {
    RedfishCS_Header                            Header;
    RedfishCS_char                              *odata_context;   
    RedfishCS_char                              *odata_etag;      
    RedfishCS_char                              *odata_id;        
    RedfishCS_char                              *odata_type;      
    RedfishCS_char                              *Description;     
    RedfishEvent_V1_0_8_EventRecord_Array_CS    *Events;              // Each event in this array has a
                                                                      // set of properties that
                                                                      // describe the event.  Since
                                                                      // this is an array, more than
                                                                      // one event can be sent
                                                                      // simultaneously.
    RedfishCS_int64                             *Eventsodata_count;
    RedfishCS_char                              *Id;              
    RedfishCS_char                              *Name;            
    RedfishResource_Oem_CS                      *Oem;                 // This is the
                                                                      // manufacturer/provider specific
                                                                      // extension moniker used to
                                                                      // divide the Oem object into
                                                                      // sections.
} RedfishEvent_V1_0_8_Event_CS;

typedef struct _RedfishEvent_V1_0_8_EventRecord_Array_CS  {
    RedfishEvent_V1_0_8_EventRecord_Array_CS    *Next;
    RedfishEvent_V1_0_8_EventRecord_CS    *ArrayValue;
} RedfishEvent_V1_0_8_EventRecord_Array_CS;

RedfishCS_status
Json_Event_V1_0_8_To_CS (char *JsonRawText, RedfishEvent_V1_0_8_Event_CS **ReturnedCS);

RedfishCS_status
CS_To_Event_V1_0_8_JSON (RedfishEvent_V1_0_8_Event_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyEvent_V1_0_8_CS (RedfishEvent_V1_0_8_Event_CS *CSPtr);

RedfishCS_status
DestroyEvent_V1_0_8_Json (RedfishCS_char *JsonText);

#endif

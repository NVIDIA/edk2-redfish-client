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

#ifndef RedfishAccelerationfunction_V1_0_3_CSTRUCT_H_
#define RedfishAccelerationfunction_V1_0_3_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishAccelerationFunction_V1_0_3_AccelerationFunction_CS RedfishAccelerationFunction_V1_0_3_AccelerationFunction_CS;
typedef struct _RedfishAccelerationFunction_V1_0_3_Actions_CS RedfishAccelerationFunction_V1_0_3_Actions_CS;
typedef struct _RedfishAccelerationFunction_V1_0_3_Links_CS RedfishAccelerationFunction_V1_0_3_Links_CS;
typedef struct _RedfishAccelerationFunction_V1_0_3_OemActions_CS RedfishAccelerationFunction_V1_0_3_OemActions_CS;
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
// The available actions for this Resource.
//
typedef struct _RedfishAccelerationFunction_V1_0_3_Actions_CS {
    RedfishAccelerationFunction_V1_0_3_OemActions_CS    *Oem;    // The available OEM-specific
                                                                // actions for this Resource.
} RedfishAccelerationFunction_V1_0_3_Actions_CS;

//
// The links to other Resources that are related to this Resource.
//
typedef struct _RedfishAccelerationFunction_V1_0_3_Links_CS {
    RedfishCS_Link            Endpoints;                   // An array of links to the
                                                           // endpoints that connect to this
                                                           // acceleration function.
    RedfishCS_int64           *Endpointsodata_count;   
    RedfishResource_Oem_CS    *Oem;                        // The OEM extension property.
    RedfishCS_Link            PCIeFunctions;               // An array of links to the
                                                           // PCIeFunctions associated with
                                                           // this acceleration function.
    RedfishCS_int64           *PCIeFunctionsodata_count;
} RedfishAccelerationFunction_V1_0_3_Links_CS;

//
// The available OEM-specific actions for this Resource.
//
typedef struct _RedfishAccelerationFunction_V1_0_3_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishAccelerationFunction_V1_0_3_OemActions_CS;

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
// The AccelerationFunction schema describes an acceleration function that a
// processor implements.  This can include functions such as audio processing,
// compression, encryption, packet inspection, packet switching, scheduling, or
// video processing.
//
typedef struct _RedfishAccelerationFunction_V1_0_3_AccelerationFunction_CS {
    RedfishCS_Header                                 Header;
    RedfishCS_char                                   *odata_context;          
    RedfishCS_char                                   *odata_etag;             
    RedfishCS_char                                   *odata_id;               
    RedfishCS_char                                   *odata_type;             
    RedfishCS_char                                   *AccelerationFunctionType;    // The acceleration function
                                                                                  // type.
    RedfishAccelerationFunction_V1_0_3_Actions_CS    *Actions;                    // The available actions for this
                                                                                  // Resource.
    RedfishCS_char                                   *Description;            
    RedfishCS_char_Array                             *FpgaReconfigurationSlots;    // An array of the
                                                                                  // reconfiguration slot
                                                                                  // identifiers of the FPGA that
                                                                                  // this acceleration function
                                                                                  // occupies.
    RedfishCS_char                                   *Id;                     
    RedfishAccelerationFunction_V1_0_3_Links_CS      *Links;                      // The links to other Resources
                                                                                  // that are related to this
                                                                                  // Resource.
    RedfishCS_char                                   *Manufacturer;               // The acceleration function code
                                                                                  // manufacturer.
    RedfishCS_char                                   *Name;                   
    RedfishResource_Oem_CS                           *Oem;                        // The OEM extension property.
    RedfishCS_int64                                  *PowerWatts;                 // The acceleration function
                                                                                  // power consumption, in watts.
    RedfishResource_Status_CS                        *Status;                     // The status and health of the
                                                                                  // Resource and its subordinate
                                                                                  // or dependent Resources.
    RedfishCS_char                                   *UUID;                       // The UUID for this acceleration
                                                                                  // function.
    RedfishCS_char                                   *Version;                    // The acceleration function
                                                                                  // version.
} RedfishAccelerationFunction_V1_0_3_AccelerationFunction_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_AccelerationFunction_V1_0_3_To_CS (char *JsonRawText, RedfishAccelerationFunction_V1_0_3_AccelerationFunction_CS **ReturnedCS);

RedfishCS_status
CS_To_AccelerationFunction_V1_0_3_JSON (RedfishAccelerationFunction_V1_0_3_AccelerationFunction_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyAccelerationFunction_V1_0_3_CS (RedfishAccelerationFunction_V1_0_3_AccelerationFunction_CS *CSPtr);

RedfishCS_status
DestroyAccelerationFunction_V1_0_3_Json (RedfishCS_char *JsonText);

#endif

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

#ifndef RedfishSwitch_V1_0_6_CSTRUCT_H_
#define RedfishSwitch_V1_0_6_CSTRUCT_H_

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

typedef struct _RedfishSwitch_V1_0_6_Actions_CS RedfishSwitch_V1_0_6_Actions_CS;
typedef struct _RedfishSwitch_V1_0_6_Links_CS RedfishSwitch_V1_0_6_Links_CS;
typedef struct _RedfishSwitch_V1_0_6_OemActions_CS RedfishSwitch_V1_0_6_OemActions_CS;
typedef struct _RedfishSwitch_V1_0_6_Reset_CS RedfishSwitch_V1_0_6_Reset_CS;
typedef struct _RedfishSwitch_V1_0_6_Switch_CS RedfishSwitch_V1_0_6_Switch_CS;
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
typedef struct _RedfishSwitch_V1_0_6_Actions_CS {
    RedfishSwitch_V1_0_6_Reset_CS         *Switch_Reset;
    RedfishSwitch_V1_0_6_OemActions_CS    *Oem;            // The available OEM-specific
                                                           // actions for this Resource.
} RedfishSwitch_V1_0_6_Actions_CS;

//
// The links to other Resources that are related to this Resource.
//
typedef struct _RedfishSwitch_V1_0_6_Links_CS {
    RedfishCS_Link            Chassis;                 // The link to the chassis that
                                                       // contains this switch.
    RedfishCS_Link            ManagedBy;               // An array of links to the
                                                       // managers that manage this
                                                       // switch.
    RedfishCS_int64           *ManagedByodata_count;
    RedfishResource_Oem_CS    *Oem;                    // The OEM extension property.
} RedfishSwitch_V1_0_6_Links_CS;

//
// The available OEM-specific actions for this Resource.
//
typedef struct _RedfishSwitch_V1_0_6_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishSwitch_V1_0_6_OemActions_CS;

//
// This action resets this switch.
//
typedef struct _RedfishSwitch_V1_0_6_Reset_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishSwitch_V1_0_6_Reset_CS;

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
// The Switch schema contains properties that describe a fabric switch.
//
typedef struct _RedfishSwitch_V1_0_6_Switch_CS {
    RedfishCS_Header                   Header;
    RedfishCS_char                     *odata_context;       
    RedfishCS_char                     *odata_etag;          
    RedfishCS_char                     *odata_id;            
    RedfishCS_char                     *odata_type;          
    RedfishSwitch_V1_0_6_Actions_CS    *Actions;                 // The available actions for this
                                                                 // Resource.
    RedfishCS_char                     *AssetTag;                // The user-assigned asset tag
                                                                 // for this switch.
    RedfishCS_char                     *Description;         
    RedfishCS_int64                    *DomainID;                // The domain ID for this switch.
    RedfishCS_char                     *Id;                  
    RedfishCS_char                     *IndicatorLED;            // The state of the indicator
                                                                 // LED, which identifies the
                                                                 // switch.
    RedfishCS_bool                     *IsManaged;               // An indication of whether the
                                                                 // switch is in a managed or
                                                                 // unmanaged state.
    RedfishSwitch_V1_0_6_Links_CS      *Links;                   // The links to other Resources
                                                                 // that are related to this
                                                                 // Resource.
    RedfishCS_Link                     LogServices;              // The link to the collection of
                                                                 // Log Services associated with
                                                                 // this switch.
    RedfishCS_char                     *Manufacturer;            // The manufacturer of this
                                                                 // switch.
    RedfishCS_char                     *Model;                   // The product model number of
                                                                 // this switch.
    RedfishCS_char                     *Name;                
    RedfishResource_Oem_CS             *Oem;                     // The OEM extension property.
    RedfishCS_char                     *PartNumber;              // The part number for this
                                                                 // switch.
    RedfishCS_Link                     Ports;                    // The link to the collection
                                                                 // ports for this switch.
    RedfishCS_char                     *PowerState;              // The current power state of the
                                                                 // switch.
    RedfishCS_Link                     Redundancy;               // Redundancy information for the
                                                                 // switches.
    RedfishCS_int64                    *Redundancyodata_count;
    RedfishCS_char                     *SKU;                     // The SKU for this switch.
    RedfishCS_char                     *SerialNumber;            // The serial number for this
                                                                 // switch.
    RedfishResource_Status_CS          *Status;                  // The status and health of the
                                                                 // Resource and its subordinate
                                                                 // or dependent Resources.
    RedfishCS_char                     *SwitchType;              // The type of switch.
    RedfishCS_int64                    *TotalSwitchWidth;        // The total number of lanes,
                                                                 // phys, or other physical
                                                                 // transport links that this
                                                                 // switch contains.
} RedfishSwitch_V1_0_6_Switch_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_Switch_V1_0_6_To_CS (char *JsonRawText, RedfishSwitch_V1_0_6_Switch_CS **ReturnedCS);

RedfishCS_status
CS_To_Switch_V1_0_6_JSON (RedfishSwitch_V1_0_6_Switch_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroySwitch_V1_0_6_CS (RedfishSwitch_V1_0_6_Switch_CS *CSPtr);

RedfishCS_status
DestroySwitch_V1_0_6_Json (RedfishCS_char *JsonText);

#endif

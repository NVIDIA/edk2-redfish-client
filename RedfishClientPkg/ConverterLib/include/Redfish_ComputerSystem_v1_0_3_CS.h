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

#ifndef RedfishComputersystem_V1_0_3_CSTRUCT_H_
#define RedfishComputersystem_V1_0_3_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef Redfishodata_V4_0_0_idRef_Array_CS_
typedef struct _Redfishodata_V4_0_0_idRef_Array_CS Redfishodata_V4_0_0_idRef_Array_CS;
#endif
#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishComputerSystem_V1_0_3_Boot_CS RedfishComputerSystem_V1_0_3_Boot_CS;
typedef struct _RedfishComputerSystem_V1_0_3_ComputerSystem_CS RedfishComputerSystem_V1_0_3_ComputerSystem_CS;
typedef struct _RedfishComputerSystem_V1_0_3_ComputerSystem_Actions_CS RedfishComputerSystem_V1_0_3_ComputerSystem_Actions_CS;
typedef struct _RedfishComputerSystem_V1_0_3_ComputerSystem_Actions_Oem_CS RedfishComputerSystem_V1_0_3_ComputerSystem_Actions_Oem_CS;
typedef struct _RedfishComputerSystem_V1_0_3_ComputerSystem_Links_CS RedfishComputerSystem_V1_0_3_ComputerSystem_Links_CS;
typedef struct _RedfishComputerSystem_V1_0_3_MemorySummary_CS RedfishComputerSystem_V1_0_3_MemorySummary_CS;
typedef struct _RedfishComputerSystem_V1_0_3_ProcessorSummary_CS RedfishComputerSystem_V1_0_3_ProcessorSummary_CS;
typedef struct _RedfishComputerSystem_V1_0_3_Reset_CS RedfishComputerSystem_V1_0_3_Reset_CS;
#ifndef RedfishResource_Condition_CS_
typedef struct _RedfishResource_Condition_CS RedfishResource_Condition_CS;
#endif

#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

#ifndef RedfishResource_Status_CS_
typedef struct _RedfishResource_Status_CS RedfishResource_Status_CS;
#endif

#ifndef Redfishodata_V4_0_0_idRef_CS_
typedef struct _Redfishodata_V4_0_0_idRef_CS Redfishodata_V4_0_0_idRef_CS;
#endif

#ifndef Redfishodatav4_idRef_CS_
typedef struct _Redfishodatav4_idRef_CS Redfishodatav4_idRef_CS;
#endif

//
// This object contains the boot information for the current resource.
//
typedef struct _RedfishComputerSystem_V1_0_3_Boot_CS {
    RedfishCS_char    *BootSourceOverrideEnabled;      // Describes the state of the
                                                       // Boot Source Override feature
    RedfishCS_char    *BootSourceOverrideTarget;       // The current boot source to be
                                                       // used at next boot instead of
                                                       // the normal boot device, if
                                                       // BootSourceOverrideEnabled is
                                                       // true.
    RedfishCS_char    *UefiTargetBootSourceOverride;    // This property is the UEFI
                                                       // Device Path of the device to
                                                       // boot from when
                                                       // BootSourceOverrideSupported is
                                                       // UefiTarget.
} RedfishComputerSystem_V1_0_3_Boot_CS;

//
// The available actions for this resource.
//
typedef struct _RedfishComputerSystem_V1_0_3_ComputerSystem_Actions_CS {
    RedfishComputerSystem_V1_0_3_Reset_CS                         *ComputerSystem_Reset;
    RedfishComputerSystem_V1_0_3_ComputerSystem_Actions_Oem_CS    *Oem;                
} RedfishComputerSystem_V1_0_3_ComputerSystem_Actions_CS;

typedef struct _RedfishComputerSystem_V1_0_3_ComputerSystem_Actions_Oem_CS {
    RedfishCS_Link    Prop;
} RedfishComputerSystem_V1_0_3_ComputerSystem_Actions_Oem_CS;

//
// Contains references to other resources that are related to this resource.
//
typedef struct _RedfishComputerSystem_V1_0_3_ComputerSystem_Links_CS {
    RedfishCS_Link                        Chassis;                          // An array of references to the
                                                                            // chassis in which this system
                                                                            // is contained
    RedfishCS_int64                       *Chassisodata_count;          
    RedfishCS_char                        *Chassisodata_navigationLink; 
    Redfishodata_V4_0_0_idRef_Array_CS    *CooledBy;                        // An array of ID[s] of resources
                                                                            // that cool this computer
                                                                            // system. Normally the ID will
                                                                            // be a chassis or a specific set
                                                                            // of fans.
    RedfishCS_int64                       *CooledByodata_count;         
    RedfishCS_char                        *CooledByodata_navigationLink;
    RedfishCS_Link                        ManagedBy;                        // An array of references to the
                                                                            // Managers responsible for this
                                                                            // system
    RedfishCS_int64                       *ManagedByodata_count;        
    RedfishCS_char                        *ManagedByodata_navigationLink;
    RedfishResource_Oem_CS                *Oem;                             // Oem extension object.
    Redfishodata_V4_0_0_idRef_Array_CS    *PoweredBy;                       // An array of ID[s] of resources
                                                                            // that power this computer
                                                                            // system. Normally the ID will
                                                                            // be a chassis or a specific set
                                                                            // of powerSupplies
    RedfishCS_int64                       *PoweredByodata_count;        
    RedfishCS_char                        *PoweredByodata_navigationLink;
} RedfishComputerSystem_V1_0_3_ComputerSystem_Links_CS;

//
// This object describes the memory of the system in general detail.
//
typedef struct _RedfishComputerSystem_V1_0_3_MemorySummary_CS {
    RedfishResource_Status_CS    *Status;             
    RedfishCS_int64              *TotalSystemMemoryGiB;    // The total installed, operating
                                                          // system-accessible memory
                                                          // (RAM), measured in GiB.
} RedfishComputerSystem_V1_0_3_MemorySummary_CS;

//
// This object describes the central processors of the system in general detail.
//
typedef struct _RedfishComputerSystem_V1_0_3_ProcessorSummary_CS {
    RedfishCS_int64              *Count;    // The number of processors in
                                            // the system.
    RedfishCS_char               *Model;    // The processor model for the
                                            // primary or majority of
                                            // processors in this system.
    RedfishResource_Status_CS    *Status;
} RedfishComputerSystem_V1_0_3_ProcessorSummary_CS;

//
// This action is used to reset the system.
//
typedef struct _RedfishComputerSystem_V1_0_3_Reset_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishComputerSystem_V1_0_3_Reset_CS;

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
#ifndef Redfishodata_V4_0_0_idRef_CS_
#define Redfishodata_V4_0_0_idRef_CS_
typedef struct _Redfishodata_V4_0_0_idRef_CS {
    RedfishCS_char    *odata_id;
} Redfishodata_V4_0_0_idRef_CS;
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
// This schema defines a computer system and its respective properties.  A
// computer system represents a machine (physical or virtual) and the local
// resources such as memory, cpu and other devices that can be accessed from that
// machine.
//
typedef struct _RedfishComputerSystem_V1_0_3_ComputerSystem_CS {
    RedfishCS_Header                                          Header;
    RedfishCS_char                                            *odata_context;   
    RedfishCS_char                                            *odata_id;        
    RedfishCS_char                                            *odata_type;      
    RedfishComputerSystem_V1_0_3_ComputerSystem_Actions_CS    *Actions;             // The available actions for this
                                                                                    // resource.
    RedfishCS_char                                            *AssetTag;            // The user definable tag that
                                                                                    // can be used to track this
                                                                                    // computer system for inventory
                                                                                    // or other client purposes
    RedfishCS_char                                            *BiosVersion;         // The version of the system BIOS
                                                                                    // or primary system firmware.
    RedfishComputerSystem_V1_0_3_Boot_CS                      *Boot;                // Information about the boot
                                                                                    // settings for this system
    RedfishCS_char                                            *Description;     
    RedfishCS_Link                                            EthernetInterfaces;    // A reference to the collection
                                                                                    // of Ethernet interfaces
                                                                                    // associated with this system
    RedfishCS_char                                            *HostName;            // The DNS Host Name, without any
                                                                                    // domain information
    RedfishCS_char                                            *Id;              
    RedfishCS_char                                            *IndicatorLED;        // The state of the indicator
                                                                                    // LED, used to identify the
                                                                                    // system
    RedfishComputerSystem_V1_0_3_ComputerSystem_Links_CS      *Links;               // Contains references to other
                                                                                    // resources that are related to
                                                                                    // this resource.
    RedfishCS_Link                                            LogServices;          // A reference to the collection
                                                                                    // of Log Services associated
                                                                                    // with this system
    RedfishCS_char                                            *Manufacturer;        // The manufacturer or OEM of
                                                                                    // this system.
    RedfishComputerSystem_V1_0_3_MemorySummary_CS             *MemorySummary;       // This object describes the
                                                                                    // central memory of the system
                                                                                    // in general detail.
    RedfishCS_char                                            *Model;               // The model number for this
                                                                                    // system
    RedfishCS_char                                            *Name;            
    RedfishResource_Oem_CS                                    *Oem;                 // This is the
                                                                                    // manufacturer/provider specific
                                                                                    // extension moniker used to
                                                                                    // divide the Oem object into
                                                                                    // sections.
    RedfishCS_char                                            *PartNumber;          // The part number for this
                                                                                    // system
    RedfishCS_char                                            *PowerState;          // This is the current power
                                                                                    // state of the system
    RedfishComputerSystem_V1_0_3_ProcessorSummary_CS          *ProcessorSummary;    // This object describes the
                                                                                    // central processors of the
                                                                                    // system in general detail.
    RedfishCS_Link                                            Processors;           // A reference to the collection
                                                                                    // of Processors associated with
                                                                                    // this system
    RedfishCS_char                                            *SKU;                 // The manufacturer SKU for this
                                                                                    // system
    RedfishCS_char                                            *SerialNumber;        // The serial number for this
                                                                                    // system
    RedfishCS_Link                                            SimpleStorage;        // A reference to the collection
                                                                                    // of storage devices associated
                                                                                    // with this system
    RedfishResource_Status_CS                                 *Status;          
    RedfishCS_char                                            *SystemType;          // The type of computer system
                                                                                    // represented by this resource.
    RedfishCS_char                                            *UUID;                // The universal unique
                                                                                    // identifier (UUID) for this
                                                                                    // system
} RedfishComputerSystem_V1_0_3_ComputerSystem_CS;

#ifndef Redfishodata_V4_0_0_idRef_Array_CS_
#define Redfishodata_V4_0_0_idRef_Array_CS_
typedef struct _Redfishodata_V4_0_0_idRef_Array_CS  {
    Redfishodata_V4_0_0_idRef_Array_CS    *Next;
    Redfishodata_V4_0_0_idRef_CS    *ArrayValue;
} Redfishodata_V4_0_0_idRef_Array_CS;
#endif

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_ComputerSystem_V1_0_3_To_CS (char *JsonRawText, RedfishComputerSystem_V1_0_3_ComputerSystem_CS **ReturnedCS);

RedfishCS_status
CS_To_ComputerSystem_V1_0_3_JSON (RedfishComputerSystem_V1_0_3_ComputerSystem_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyComputerSystem_V1_0_3_CS (RedfishComputerSystem_V1_0_3_ComputerSystem_CS *CSPtr);

RedfishCS_status
DestroyComputerSystem_V1_0_3_Json (RedfishCS_char *JsonText);

#endif

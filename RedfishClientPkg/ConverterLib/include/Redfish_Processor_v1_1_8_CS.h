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

#ifndef RedfishProcessor_V1_1_8_CSTRUCT_H_
#define RedfishProcessor_V1_1_8_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishProcessor_V1_1_8_Actions_CS RedfishProcessor_V1_1_8_Actions_CS;
typedef struct _RedfishProcessor_V1_1_8_Links_CS RedfishProcessor_V1_1_8_Links_CS;
typedef struct _RedfishProcessor_V1_1_8_OemActions_CS RedfishProcessor_V1_1_8_OemActions_CS;
typedef struct _RedfishProcessor_V1_1_8_Processor_CS RedfishProcessor_V1_1_8_Processor_CS;
typedef struct _RedfishProcessor_V1_1_8_ProcessorId_CS RedfishProcessor_V1_1_8_ProcessorId_CS;
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
typedef struct _RedfishProcessor_V1_1_8_Actions_CS {
    RedfishProcessor_V1_1_8_OemActions_CS    *Oem;    // The available OEM-specific
                                                     // actions for this resource.
} RedfishProcessor_V1_1_8_Actions_CS;

//
// The links to other resources that are related to this resource.
//
typedef struct _RedfishProcessor_V1_1_8_Links_CS {
    RedfishCS_Link            Chassis;    // The link to the chassis that
                                         // contains this processor.
    RedfishResource_Oem_CS    *Oem;      // The OEM extension property.
} RedfishProcessor_V1_1_8_Links_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishProcessor_V1_1_8_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishProcessor_V1_1_8_OemActions_CS;

//
// The identification information for a processor.
//
typedef struct _RedfishProcessor_V1_1_8_ProcessorId_CS {
    RedfishCS_char    *EffectiveFamily;           // The effective family for this
                                                  // processor.
    RedfishCS_char    *EffectiveModel;            // The effective model for this
                                                  // processor.
    RedfishCS_char    *IdentificationRegisters;    // The raw manufacturer-provided
                                                  // processor identification
                                                  // registers for this processor.
    RedfishCS_char    *MicrocodeInfo;             // The microcode information for
                                                  // this processor.
    RedfishCS_char    *Step;                      // The step value for this
                                                  // processor.
    RedfishCS_char    *VendorId;                  // The vendor identification for
                                                  // this processor.
} RedfishProcessor_V1_1_8_ProcessorId_CS;

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
// The Processor schema describes the information about a single processor that a
// system contains.  A processor includes both performance characteristics, clock
// speed, architecture, core count, and so on, and compatibility, such as the CPU
// ID instruction results.
//
typedef struct _RedfishProcessor_V1_1_8_Processor_CS {
    RedfishCS_Header                          Header;
    RedfishCS_char                            *odata_context;       
    RedfishCS_char                            *odata_etag;          
    RedfishCS_char                            *odata_id;            
    RedfishCS_char                            *odata_type;          
    RedfishProcessor_V1_1_8_Actions_CS        *Actions;                 // The available actions for this
                                                                        // resource.
    RedfishCS_char                            *Description;         
    RedfishCS_char                            *Id;                  
    RedfishCS_char                            *InstructionSet;          // The instruction set of the
                                                                        // processor.
    RedfishProcessor_V1_1_8_Links_CS          *Links;                   // The links to other resources
                                                                        // that are related to this
                                                                        // resource.
    RedfishCS_char                            *Manufacturer;            // The processor manufacturer.
    RedfishCS_int64                           *MaxSpeedMHz;             // The maximum clock speed of the
                                                                        // processor.
    RedfishCS_char                            *Model;                   // The product model number of
                                                                        // this device.
    RedfishCS_char                            *Name;                
    RedfishResource_Oem_CS                    *Oem;                     // The OEM extension property.
    RedfishCS_char                            *ProcessorArchitecture;    // The architecture of the
                                                                        // processor.
    RedfishProcessor_V1_1_8_ProcessorId_CS    *ProcessorId;             // The identification information
                                                                        // for this processor.
    RedfishCS_char                            *ProcessorType;           // The type of processor.
    RedfishCS_char                            *Socket;                  // The socket or location of the
                                                                        // processor.
    RedfishResource_Status_CS                 *Status;                  // The status and health of the
                                                                        // resource and its subordinate
                                                                        // or dependent resources.
    RedfishCS_int64                           *TotalCores;              // The total number of cores that
                                                                        // this processor contains.
    RedfishCS_int64                           *TotalThreads;            // The total number of execution
                                                                        // threads that this processor
                                                                        // supports.
} RedfishProcessor_V1_1_8_Processor_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_Processor_V1_1_8_To_CS (char *JsonRawText, RedfishProcessor_V1_1_8_Processor_CS **ReturnedCS);

RedfishCS_status
CS_To_Processor_V1_1_8_JSON (RedfishProcessor_V1_1_8_Processor_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyProcessor_V1_1_8_CS (RedfishProcessor_V1_1_8_Processor_CS *CSPtr);

RedfishCS_status
DestroyProcessor_V1_1_8_Json (RedfishCS_char *JsonText);

#endif

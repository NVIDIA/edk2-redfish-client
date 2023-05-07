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

#ifndef RedfishProcessor_V1_11_1_CSTRUCT_H_
#define RedfishProcessor_V1_11_1_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishProcessor_V1_11_1_ProcessorInterface_Array_CS RedfishProcessor_V1_11_1_ProcessorInterface_Array_CS;
typedef struct _RedfishProcessor_V1_11_1_FpgaReconfigurationSlot_Array_CS RedfishProcessor_V1_11_1_FpgaReconfigurationSlot_Array_CS;
typedef struct _RedfishProcessor_V1_11_1_ProcessorMemory_Array_CS RedfishProcessor_V1_11_1_ProcessorMemory_Array_CS;
#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishProcessor_V1_11_1_Actions_CS RedfishProcessor_V1_11_1_Actions_CS;
typedef struct _RedfishProcessor_V1_11_1_EthernetInterface_CS RedfishProcessor_V1_11_1_EthernetInterface_CS;
typedef struct _RedfishProcessor_V1_11_1_FPGA_CS RedfishProcessor_V1_11_1_FPGA_CS;
typedef struct _RedfishProcessor_V1_11_1_FpgaReconfigurationSlot_CS RedfishProcessor_V1_11_1_FpgaReconfigurationSlot_CS;
typedef struct _RedfishProcessor_V1_11_1_Links_CS RedfishProcessor_V1_11_1_Links_CS;
typedef struct _RedfishProcessor_V1_11_1_MemorySummary_CS RedfishProcessor_V1_11_1_MemorySummary_CS;
typedef struct _RedfishProcessor_V1_11_1_OemActions_CS RedfishProcessor_V1_11_1_OemActions_CS;
typedef struct _RedfishProcessor_V1_11_1_Processor_CS RedfishProcessor_V1_11_1_Processor_CS;
typedef struct _RedfishProcessor_V1_11_1_ProcessorId_CS RedfishProcessor_V1_11_1_ProcessorId_CS;
typedef struct _RedfishProcessor_V1_11_1_ProcessorInterface_CS RedfishProcessor_V1_11_1_ProcessorInterface_CS;
typedef struct _RedfishProcessor_V1_11_1_ProcessorMemory_CS RedfishProcessor_V1_11_1_ProcessorMemory_CS;
typedef struct _RedfishProcessor_V1_11_1_Reset_CS RedfishProcessor_V1_11_1_Reset_CS;
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
typedef struct _RedfishProcessor_V1_11_1_Actions_CS {
    RedfishProcessor_V1_11_1_Reset_CS         *Processor_Reset;
    RedfishProcessor_V1_11_1_OemActions_CS    *Oem;               // The available OEM-specific
                                                                  // actions for this resource.
} RedfishProcessor_V1_11_1_Actions_CS;

//
// This type defines an Ethernet interface.
//
typedef struct _RedfishProcessor_V1_11_1_EthernetInterface_CS {
    RedfishCS_int64           *MaxLanes;       // The number of lanes supported
                                               // by this interface.
    RedfishCS_int64           *MaxSpeedMbps;    // The maximum speed supported by
                                               // this interface.
    RedfishResource_Oem_CS    *Oem;            // The OEM extension property.
} RedfishProcessor_V1_11_1_EthernetInterface_CS;

//
// The properties of the FPGA device.
//
typedef struct _RedfishProcessor_V1_11_1_FPGA_CS {
    RedfishProcessor_V1_11_1_ProcessorInterface_Array_CS         *ExternalInterfaces;     // An array of the FPGA external
                                                                                          // interfaces.
    RedfishCS_char                                               *FirmwareId;             // The FPGA firmware identifier.
    RedfishCS_char                                               *FirmwareManufacturer;    // The FPGA firmware
                                                                                          // manufacturer.
    RedfishCS_char                                               *FirmwareVersion;        // The FPGA firmware version.
    RedfishCS_char                                               *FpgaType;               // The FPGA type.
    RedfishProcessor_V1_11_1_ProcessorInterface_CS               *HostInterface;          // The FPGA interface to the
                                                                                          // host.
    RedfishCS_char                                               *Model;                  // The FPGA model.
    RedfishResource_Oem_CS                                       *Oem;                    // The OEM extension property.
    RedfishCS_int64                                              *PCIeVirtualFunctions;    // The number of the PCIe Virtual
                                                                                          // Functions.
    RedfishCS_bool                                               *ProgrammableFromHost;    // An indication of whether the
                                                                                          // FPGA firmware can be
                                                                                          // reprogrammed from the host by
                                                                                          // using system software.
    RedfishProcessor_V1_11_1_FpgaReconfigurationSlot_Array_CS    *ReconfigurationSlots;    // An array of the FPGA
                                                                                          // reconfiguration slots.  An
                                                                                          // FPGA uses a reconfiguration
                                                                                          // slot to contain an
                                                                                          // acceleration function that can
                                                                                          // change as the FPGA is
                                                                                          // provisioned.
} RedfishProcessor_V1_11_1_FPGA_CS;

//
// This type describes the FPGA reconfiguration slot.  An FPGA uses a
// reconfiguration slot to contain an acceleration function that can change as the
// FPGA is provisioned.
//
typedef struct _RedfishProcessor_V1_11_1_FpgaReconfigurationSlot_CS {
    RedfishCS_Link    AccelerationFunction;    // The link to the acceleration
                                               // function that the code
                                               // programmed into a
                                               // reconfiguration slot provides.
    RedfishCS_bool    *ProgrammableFromHost;    // An indication of whether the
                                               // reconfiguration slot can be
                                               // reprogrammed from the host by
                                               // using system software.
    RedfishCS_char    *SlotId;                 // The FPGA reconfiguration slot
                                               // identifier.
    RedfishCS_char    *UUID;                   // The UUID for this
                                               // reconfiguration slot.
} RedfishProcessor_V1_11_1_FpgaReconfigurationSlot_CS;

//
// The links to other resources that are related to this resource.
//
typedef struct _RedfishProcessor_V1_11_1_Links_CS {
    RedfishCS_Link            Chassis;                           // The link to the chassis that
                                                                 // contains this processor.
    RedfishCS_Link            ConnectedProcessors;               // An array of links to the
                                                                 // processors directly connected
                                                                 // to this processor.
    RedfishCS_int64           *ConnectedProcessorsodata_count;
    RedfishCS_Link            Endpoints;                         // An array of links to the
                                                                 // endpoints that connect to this
                                                                 // processor.
    RedfishCS_int64           *Endpointsodata_count;         
    RedfishCS_Link            Memory;                            // An array of links to the
                                                                 // memory associated with this
                                                                 // processor.
    RedfishCS_int64           *Memoryodata_count;            
    RedfishResource_Oem_CS    *Oem;                              // The OEM extension property.
    RedfishCS_Link            PCIeDevice;                        // The link to the PCIe device
                                                                 // associated with this
                                                                 // processor.
    RedfishCS_Link            PCIeFunctions;                     // An array of links to the
                                                                 // PCIeFunctions associated with
                                                                 // this processor.
    RedfishCS_int64           *PCIeFunctionsodata_count;     
} RedfishProcessor_V1_11_1_Links_CS;

//
// The summary of all memory associated with a processor.
//
typedef struct _RedfishProcessor_V1_11_1_MemorySummary_CS {
    RedfishCS_Link     Metrics;               // The link to the memory metrics
                                              // associated with all memory of
                                              // this processor.
    RedfishCS_int64    *TotalCacheSizeMiB;    // Total size of cache memory of
                                              // this processor.
    RedfishCS_int64    *TotalMemorySizeMiB;    // Total size of volatile memory
                                              // of this processor.
} RedfishProcessor_V1_11_1_MemorySummary_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishProcessor_V1_11_1_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishProcessor_V1_11_1_OemActions_CS;

//
// The identification information for a processor.
//
typedef struct _RedfishProcessor_V1_11_1_ProcessorId_CS {
    RedfishCS_char    *EffectiveFamily;                 // The effective family for this
                                                        // processor.
    RedfishCS_char    *EffectiveModel;                  // The effective model for this
                                                        // processor.
    RedfishCS_char    *IdentificationRegisters;         // The raw manufacturer-provided
                                                        // processor identification
                                                        // registers for this processor.
    RedfishCS_char    *MicrocodeInfo;                   // The microcode information for
                                                        // this processor.
    RedfishCS_char    *ProtectedIdentificationNumber;    // The Protected Processor
                                                        // Identification Number (PPIN)
                                                        // for this processor.
    RedfishCS_char    *Step;                            // The step value for this
                                                        // processor.
    RedfishCS_char    *VendorId;                        // The vendor identification for
                                                        // this processor.
} RedfishProcessor_V1_11_1_ProcessorId_CS;

//
// This type describes an interface between the system, or external connection,
// and the processor.
//
typedef struct _RedfishProcessor_V1_11_1_ProcessorInterface_CS {
    RedfishProcessor_V1_11_1_EthernetInterface_CS    *Ethernet;        // The Ethernet-related
                                                                       // information for this
                                                                       // interface.
    RedfishCS_char                                   *InterfaceType;    // The interface type.
    RedfishCS_Link                                   PCIe;             // The PCIe-related information
                                                                       // for this interface.
} RedfishProcessor_V1_11_1_ProcessorInterface_CS;

//
// This type describes the memory directly attached or integrated within a
// processor.
//
typedef struct _RedfishProcessor_V1_11_1_ProcessorMemory_CS {
    RedfishCS_int64    *CapacityMiB;        // The memory capacity in MiB.
    RedfishCS_bool     *IntegratedMemory;    // An indication of whether this
                                            // memory is integrated within
                                            // the processor.
    RedfishCS_char     *MemoryType;         // The type of memory used by
                                            // this processor.
    RedfishCS_int64    *SpeedMHz;           // The operating speed of the
                                            // memory in MHz.
} RedfishProcessor_V1_11_1_ProcessorMemory_CS;

//
// This action resets the processor.
//
typedef struct _RedfishProcessor_V1_11_1_Reset_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishProcessor_V1_11_1_Reset_CS;

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
typedef struct _RedfishProcessor_V1_11_1_Processor_CS {
    RedfishCS_Header                                     Header;
    RedfishCS_char                                       *odata_context;         
    RedfishCS_char                                       *odata_etag;            
    RedfishCS_char                                       *odata_id;              
    RedfishCS_char                                       *odata_type;            
    RedfishCS_Link                                       AccelerationFunctions;      // The link to the collection of
                                                                                     // acceleration functions
                                                                                     // associated with this
                                                                                     // processor.
    RedfishProcessor_V1_11_1_Actions_CS                  *Actions;                   // The available actions for this
                                                                                     // resource.
    RedfishCS_Link                                       AppliedOperatingConfig;     // The link to the operating
                                                                                     // configuration that is applied
                                                                                     // to this processor.
    RedfishCS_Link                                       Assembly;                   // The link to an assembly
                                                                                     // associated with this
                                                                                     // processor.
    RedfishCS_int64                                      *BaseSpeedMHz;              // The base (nominal) clock speed
                                                                                     // of the processor in MHz.
    RedfishCS_char                                       *BaseSpeedPriorityState;    // The state of the base
                                                                                     // frequency settings of the
                                                                                     // operation configuration
                                                                                     // applied to this processor.
    RedfishCS_Link                                       Certificates;               // The link to a collection of
                                                                                     // certificates for device
                                                                                     // identity and attestation.
    RedfishCS_char                                       *Description;           
    RedfishCS_Link                                       EnvironmentMetrics;         // The link to the environment
                                                                                     // metrics for this processor.
    RedfishProcessor_V1_11_1_FPGA_CS                     *FPGA;                      // The properties for processors
                                                                                     // of the FPGA type.
    RedfishCS_char                                       *FirmwareVersion;           // The firmware version of the
                                                                                     // processor.
    RedfishCS_int64_Array                                *HighSpeedCoreIDs;          // The list of core identifiers
                                                                                     // corresponding to the cores
                                                                                     // that have been configured with
                                                                                     // the higher clock speed from
                                                                                     // the operating configuration
                                                                                     // applied to this processor.
    RedfishCS_char                                       *Id;                    
    RedfishCS_char                                       *InstructionSet;            // The instruction set of the
                                                                                     // processor.
    RedfishProcessor_V1_11_1_Links_CS                    *Links;                     // The links to other resources
                                                                                     // that are related to this
                                                                                     // resource.
    RedfishCS_Link                                       Location;                   // The location of the processor.
    RedfishCS_bool                                       *LocationIndicatorActive;    // An indicator allowing an
                                                                                     // operator to physically locate
                                                                                     // this resource.
    RedfishCS_char                                       *Manufacturer;              // The processor manufacturer.
    RedfishCS_int64                                      *MaxSpeedMHz;               // The maximum clock speed of the
                                                                                     // processor.
    RedfishCS_int64                                      *MaxTDPWatts;               // The maximum Thermal Design
                                                                                     // Power (TDP) in watts.
    RedfishCS_Link                                       Measurements;               // An array of DSP0274-defined
                                                                                     // measurement blocks.
    RedfishProcessor_V1_11_1_MemorySummary_CS            *MemorySummary;             // The summary of all memory
                                                                                     // associated with this
                                                                                     // processor.
    RedfishCS_Link                                       Metrics;                    // The link to the metrics
                                                                                     // associated with this
                                                                                     // processor.
    RedfishCS_int64                                      *MinSpeedMHz;               // The minimum clock speed of the
                                                                                     // processor in MHz.
    RedfishCS_char                                       *Model;                     // The product model number of
                                                                                     // this device.
    RedfishCS_char                                       *Name;                  
    RedfishResource_Oem_CS                               *Oem;                       // The OEM extension property.
    RedfishCS_Link                                       OperatingConfigs;           // The link to the collection
                                                                                     // operating configurations that
                                                                                     // can be applied to this
                                                                                     // processor.
    RedfishCS_int64                                      *OperatingSpeedMHz;         // Operating speed of the
                                                                                     // processor in MHz.
    RedfishCS_char                                       *PartNumber;                // The part number of the
                                                                                     // processor.
    RedfishCS_char                                       *ProcessorArchitecture;     // The architecture of the
                                                                                     // processor.
    RedfishProcessor_V1_11_1_ProcessorId_CS              *ProcessorId;               // The identification information
                                                                                     // for this processor.
    RedfishProcessor_V1_11_1_ProcessorMemory_Array_CS    *ProcessorMemory;           // The memory directly attached
                                                                                     // or integrated within this
                                                                                     // processor.
    RedfishCS_char                                       *ProcessorType;             // The type of processor.
    RedfishCS_char                                       *SerialNumber;              // The serial number of the
                                                                                     // processor.
    RedfishCS_char                                       *Socket;                    // The socket or location of the
                                                                                     // processor.
    RedfishCS_char                                       *SparePartNumber;           // The spare part number of the
                                                                                     // processor.
    RedfishCS_int64                                      *SpeedLimitMHz;             // The clock limit of the
                                                                                     // processor in MHz.
    RedfishCS_bool                                       *SpeedLocked;               // Indicates whether the clock
                                                                                     // speed of the processor is
                                                                                     // fixed at the value specified
                                                                                     // in the SpeedLimitMHz property.
    RedfishResource_Status_CS                            *Status;                    // The status and health of the
                                                                                     // resource and its subordinate
                                                                                     // or dependent resources.
    RedfishCS_Link                                       SubProcessors;              // The link to the collection of
                                                                                     // sub-processors associated with
                                                                                     // this system, such as cores or
                                                                                     // threads, that are part of a
                                                                                     // processor.
    RedfishProcessor_V1_11_1_ProcessorInterface_CS       *SystemInterface;           // The interface between the
                                                                                     // system and the processor.
    RedfishCS_int64                                      *TDPWatts;                  // The nominal Thermal Design
                                                                                     // Power (TDP) in watts.
    RedfishCS_int64                                      *TotalCores;                // The total number of cores that
                                                                                     // this processor contains.
    RedfishCS_int64                                      *TotalEnabledCores;         // The total number of enabled
                                                                                     // cores that this processor
                                                                                     // contains.
    RedfishCS_int64                                      *TotalThreads;              // The total number of execution
                                                                                     // threads that this processor
                                                                                     // supports.
    RedfishCS_char                                       *TurboState;                // The state of the turbo for
                                                                                     // this processor.
    RedfishCS_char                                       *UUID;                      // The UUID for this processor.
    RedfishCS_char                                       *Version;                   // The hardware version of the
                                                                                     // processor.
} RedfishProcessor_V1_11_1_Processor_CS;

typedef struct _RedfishProcessor_V1_11_1_ProcessorInterface_Array_CS  {
    RedfishProcessor_V1_11_1_ProcessorInterface_Array_CS    *Next;
    RedfishProcessor_V1_11_1_ProcessorInterface_CS    *ArrayValue;
} RedfishProcessor_V1_11_1_ProcessorInterface_Array_CS;

typedef struct _RedfishProcessor_V1_11_1_FpgaReconfigurationSlot_Array_CS  {
    RedfishProcessor_V1_11_1_FpgaReconfigurationSlot_Array_CS    *Next;
    RedfishProcessor_V1_11_1_FpgaReconfigurationSlot_CS    *ArrayValue;
} RedfishProcessor_V1_11_1_FpgaReconfigurationSlot_Array_CS;

typedef struct _RedfishProcessor_V1_11_1_ProcessorMemory_Array_CS  {
    RedfishProcessor_V1_11_1_ProcessorMemory_Array_CS    *Next;
    RedfishProcessor_V1_11_1_ProcessorMemory_CS    *ArrayValue;
} RedfishProcessor_V1_11_1_ProcessorMemory_Array_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_Processor_V1_11_1_To_CS (char *JsonRawText, RedfishProcessor_V1_11_1_Processor_CS **ReturnedCS);

RedfishCS_status
CS_To_Processor_V1_11_1_JSON (RedfishProcessor_V1_11_1_Processor_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyProcessor_V1_11_1_CS (RedfishProcessor_V1_11_1_Processor_CS *CSPtr);

RedfishCS_status
DestroyProcessor_V1_11_1_Json (RedfishCS_char *JsonText);

#endif

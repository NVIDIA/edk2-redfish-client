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

#ifndef RedfishPciedevice_V1_6_0_CSTRUCT_H_
#define RedfishPciedevice_V1_6_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishPCIeDevice_V1_6_0_Actions_CS RedfishPCIeDevice_V1_6_0_Actions_CS;
typedef struct _RedfishPCIeDevice_V1_6_0_Links_CS RedfishPCIeDevice_V1_6_0_Links_CS;
typedef struct _RedfishPCIeDevice_V1_6_0_OemActions_CS RedfishPCIeDevice_V1_6_0_OemActions_CS;
typedef struct _RedfishPCIeDevice_V1_6_0_PCIeDevice_CS RedfishPCIeDevice_V1_6_0_PCIeDevice_CS;
typedef struct _RedfishPCIeDevice_V1_6_0_PCIeInterface_CS RedfishPCIeDevice_V1_6_0_PCIeInterface_CS;
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
typedef struct _RedfishPCIeDevice_V1_6_0_Actions_CS {
    RedfishPCIeDevice_V1_6_0_OemActions_CS    *Oem;    // The available OEM-specific
                                                      // actions for this Resource.
} RedfishPCIeDevice_V1_6_0_Actions_CS;

//
// The links to other Resources that are related to this Resource.
//
typedef struct _RedfishPCIeDevice_V1_6_0_Links_CS {
    RedfishCS_Link            Chassis;                     // An array of links to the
                                                           // chassis in which the PCIe
                                                           // device is contained.
    RedfishCS_int64           *Chassisodata_count;     
    RedfishResource_Oem_CS    *Oem;                        // The OEM extension property.
    RedfishCS_Link            PCIeFunctions;               // An array of links to
                                                           // PCIeFunctions exposed by this
                                                           // device.
    RedfishCS_int64           *PCIeFunctionsodata_count;
} RedfishPCIeDevice_V1_6_0_Links_CS;

//
// The available OEM-specific actions for this Resource.
//
typedef struct _RedfishPCIeDevice_V1_6_0_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishPCIeDevice_V1_6_0_OemActions_CS;

//
// This type defines a PCI interface.
//
typedef struct _RedfishPCIeDevice_V1_6_0_PCIeInterface_CS {
    RedfishCS_int64           *LanesInUse;    // The number of PCIe lanes in
                                              // use by this device.
    RedfishCS_int64           *MaxLanes;      // The number of PCIe lanes
                                              // supported by this device.
    RedfishCS_char            *MaxPCIeType;    // The highest version of the
                                              // PCIe specification supported
                                              // by this device.
    RedfishResource_Oem_CS    *Oem;           // The OEM extension property.
    RedfishCS_char            *PCIeType;      // The version of the PCIe
                                              // specification in use by this
                                              // device.
} RedfishPCIeDevice_V1_6_0_PCIeInterface_CS;

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
// The PCIeDevice schema describes the properties of a PCIe device that is
// attached to a system.
//
typedef struct _RedfishPCIeDevice_V1_6_0_PCIeDevice_CS {
    RedfishCS_Header                             Header;
    RedfishCS_char                               *odata_context; 
    RedfishCS_char                               *odata_etag;    
    RedfishCS_char                               *odata_id;      
    RedfishCS_char                               *odata_type;    
    RedfishPCIeDevice_V1_6_0_Actions_CS          *Actions;           // The available actions for this
                                                                     // Resource.
    RedfishCS_Link                               Assembly;           // The link to the assembly
                                                                     // Resource associated with this
                                                                     // PCIe device.
    RedfishCS_char                               *AssetTag;          // The user-assigned asset tag
                                                                     // for this PCIe device.
    RedfishCS_char                               *Description;   
    RedfishCS_char                               *DeviceType;        // The device type for this PCIe
                                                                     // device.
    RedfishCS_char                               *FirmwareVersion;    // The version of firmware for
                                                                     // this PCIe device.
    RedfishCS_char                               *Id;            
    RedfishPCIeDevice_V1_6_0_Links_CS            *Links;             // The links to other Resources
                                                                     // that are related to this
                                                                     // Resource.
    RedfishCS_char                               *Manufacturer;      // The manufacturer of this PCIe
                                                                     // device.
    RedfishCS_char                               *Model;             // The model number for the PCIe
                                                                     // device.
    RedfishCS_char                               *Name;          
    RedfishResource_Oem_CS                       *Oem;               // The OEM extension property.
    RedfishCS_Link                               PCIeFunctions;      // The link to the collection of
                                                                     // PCIe functions associated with
                                                                     // this PCIe device.
    RedfishPCIeDevice_V1_6_0_PCIeInterface_CS    *PCIeInterface;     // The PCIe interface details for
                                                                     // this PCIe device.
    RedfishCS_char                               *PartNumber;        // The part number for this PCIe
                                                                     // device.
    RedfishCS_char                               *SKU;               // The SKU for this PCIe device.
    RedfishCS_char                               *SerialNumber;      // The serial number for this
                                                                     // PCIe device.
    RedfishCS_char                               *SparePartNumber;    // The spare part number of the
                                                                     // PCIe device.
    RedfishResource_Status_CS                    *Status;            // The status and health of the
                                                                     // Resource and its subordinate
                                                                     // or dependent Resources.
    RedfishCS_char                               *UUID;              // The UUID for this PCIe device.
} RedfishPCIeDevice_V1_6_0_PCIeDevice_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_PCIeDevice_V1_6_0_To_CS (char *JsonRawText, RedfishPCIeDevice_V1_6_0_PCIeDevice_CS **ReturnedCS);

RedfishCS_status
CS_To_PCIeDevice_V1_6_0_JSON (RedfishPCIeDevice_V1_6_0_PCIeDevice_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyPCIeDevice_V1_6_0_CS (RedfishPCIeDevice_V1_6_0_PCIeDevice_CS *CSPtr);

RedfishCS_status
DestroyPCIeDevice_V1_6_0_Json (RedfishCS_char *JsonText);

#endif

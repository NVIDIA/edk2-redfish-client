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

#ifndef RedfishGraphicscontroller_V1_0_0_CSTRUCT_H_
#define RedfishGraphicscontroller_V1_0_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishGraphicsController_V1_0_0_Actions_CS RedfishGraphicsController_V1_0_0_Actions_CS;
typedef struct _RedfishGraphicsController_V1_0_0_GraphicsController_CS RedfishGraphicsController_V1_0_0_GraphicsController_CS;
typedef struct _RedfishGraphicsController_V1_0_0_Links_CS RedfishGraphicsController_V1_0_0_Links_CS;
typedef struct _RedfishGraphicsController_V1_0_0_OemActions_CS RedfishGraphicsController_V1_0_0_OemActions_CS;
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
typedef struct _RedfishGraphicsController_V1_0_0_Actions_CS {
    RedfishGraphicsController_V1_0_0_OemActions_CS    *Oem;    // The available OEM-specific
                                                              // actions for this resource.
} RedfishGraphicsController_V1_0_0_Actions_CS;

//
// The links to other resources that are related to this resource.
//
typedef struct _RedfishGraphicsController_V1_0_0_Links_CS {
    RedfishResource_Oem_CS    *Oem;                     // The OEM extension property.
    RedfishCS_Link            PCIeDevice;               // A link to the PCIe device that
                                                        // represents this graphics
                                                        // controller.
    RedfishCS_Link            Processors;               // An array of links to the
                                                        // processors that are a part of
                                                        // this graphics controller.
    RedfishCS_int64           *Processorsodata_count;
} RedfishGraphicsController_V1_0_0_Links_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishGraphicsController_V1_0_0_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishGraphicsController_V1_0_0_OemActions_CS;

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
// The GraphicsController schema defines a graphics controller that can be used to
// drive one or more display devices.
//
typedef struct _RedfishGraphicsController_V1_0_0_GraphicsController_CS {
    RedfishCS_Header                               Header;
    RedfishCS_char                                 *odata_context; 
    RedfishCS_char                                 *odata_etag;    
    RedfishCS_char                                 *odata_id;      
    RedfishCS_char                                 *odata_type;    
    RedfishGraphicsController_V1_0_0_Actions_CS    *Actions;           // The available actions for this
                                                                       // resource.
    RedfishCS_char                                 *AssetTag;          // The user-assigned asset tag
                                                                       // for this graphics controller.
    RedfishCS_char                                 *BiosVersion;       // The version of the graphics
                                                                       // controller BIOS or primary
                                                                       // graphics controller firmware.
    RedfishCS_char                                 *Description;   
    RedfishCS_char                                 *DriverVersion;     // The version of the graphics
                                                                       // controller driver loaded in
                                                                       // the operating system.
    RedfishCS_char                                 *Id;            
    RedfishGraphicsController_V1_0_0_Links_CS      *Links;             // The links to other resources
                                                                       // that are related to this
                                                                       // resource.
    RedfishCS_Link                                 Location;           // The location of the graphics
                                                                       // controller.
    RedfishCS_char                                 *Manufacturer;      // The manufacturer of this
                                                                       // graphics controller.
    RedfishCS_char                                 *Model;             // The product model number of
                                                                       // this graphics controller.
    RedfishCS_char                                 *Name;          
    RedfishResource_Oem_CS                         *Oem;               // The OEM extension property.
    RedfishCS_char                                 *PartNumber;        // The part number for this
                                                                       // graphics controller.
    RedfishCS_Link                                 Ports;              // The ports of the graphics
                                                                       // controller.
    RedfishCS_char                                 *SKU;               // The SKU for this graphics
                                                                       // controller.
    RedfishCS_char                                 *SerialNumber;      // The serial number for this
                                                                       // graphics controller.
    RedfishCS_char                                 *SparePartNumber;    // The spare part number of the
                                                                       // graphics controller.
    RedfishResource_Status_CS                      *Status;            // The status and health of the
                                                                       // resource and its subordinate
                                                                       // or dependent resources.
} RedfishGraphicsController_V1_0_0_GraphicsController_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_GraphicsController_V1_0_0_To_CS (char *JsonRawText, RedfishGraphicsController_V1_0_0_GraphicsController_CS **ReturnedCS);

RedfishCS_status
CS_To_GraphicsController_V1_0_0_JSON (RedfishGraphicsController_V1_0_0_GraphicsController_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyGraphicsController_V1_0_0_CS (RedfishGraphicsController_V1_0_0_GraphicsController_CS *CSPtr);

RedfishCS_status
DestroyGraphicsController_V1_0_0_Json (RedfishCS_char *JsonText);

#endif

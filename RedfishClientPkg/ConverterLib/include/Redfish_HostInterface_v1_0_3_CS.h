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

#ifndef RedfishHostinterface_V1_0_3_CSTRUCT_H_
#define RedfishHostinterface_V1_0_3_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishHostInterface_V1_0_3_HostInterface_CS RedfishHostInterface_V1_0_3_HostInterface_CS;
typedef struct _RedfishHostInterface_V1_0_3_Links_CS RedfishHostInterface_V1_0_3_Links_CS;
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
// References to other resources that are related to this resource.
//
typedef struct _RedfishHostInterface_V1_0_3_Links_CS {
    RedfishCS_Link            ComputerSystems;               // An array of references to the
                                                             // Computer Systems connected to
                                                             // this Host Interface.
    RedfishCS_int64           *ComputerSystemsodata_count;
    RedfishCS_Link            FirmwareAuthRole;              // A reference to the Role that
                                                             // has firmware authentication
                                                             // privileges on this Host
                                                             // Interface.
    RedfishCS_Link            KernelAuthRole;                // A reference to the Role object
                                                             // defining Privileges for this
                                                             // Host Interface when using
                                                             // kernel authentication.
    RedfishResource_Oem_CS    *Oem;                          // Oem extension object.
} RedfishHostInterface_V1_0_3_Links_CS;

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
// This schema defines a single Host Interface resource.
//
typedef struct _RedfishHostInterface_V1_0_3_HostInterface_CS {
    RedfishCS_Header                        Header;
    RedfishCS_char                          *odata_context;         
    RedfishCS_char                          *odata_etag;            
    RedfishCS_char                          *odata_id;              
    RedfishCS_char                          *odata_type;            
    RedfishCS_char_Array                    *AuthenticationModes;       // Indicates the authentication
                                                                        // modes available on this
                                                                        // interface.
    RedfishCS_char                          *Description;           
    RedfishCS_bool                          *ExternallyAccessible;      // Indicates whether this
                                                                        // interface is accessible by
                                                                        // external entities.
    RedfishCS_bool                          *FirmwareAuthEnabled;       // Indicates whether this
                                                                        // firmware authentication is
                                                                        // enabled for this interface.
    RedfishCS_char                          *FirmwareAuthRoleId;        // The Role used for firmware
                                                                        // authentication on this
                                                                        // interface.
    RedfishCS_Link                          HostEthernetInterfaces;     // The Redfish link to the
                                                                        // collection of network
                                                                        // interface controllers or cards
                                                                        // (NICs) that a Computer System
                                                                        // uses to communicate with this
                                                                        // Host Interface.
    RedfishCS_char                          *HostInterfaceType;         // Indicates the Host Interface
                                                                        // type for this interface.
    RedfishCS_char                          *Id;                    
    RedfishCS_bool                          *InterfaceEnabled;          // Indicates whether this
                                                                        // interface is enabled.
    RedfishCS_bool                          *KernelAuthEnabled;         // Indicates whether this kernel
                                                                        // authentication is enabled for
                                                                        // this interface.
    RedfishCS_char                          *KernelAuthRoleId;          // The Role used for kernel
                                                                        // authentication on this
                                                                        // interface.
    RedfishHostInterface_V1_0_3_Links_CS    *Links;                     // Contains references to other
                                                                        // resources that are related to
                                                                        // this resource.
    RedfishCS_Link                          ManagerEthernetInterface;    // The Redfish link to a single
                                                                        // network interface controllers
                                                                        // or cards (NIC) that this
                                                                        // Manager uses for network
                                                                        // communication with this Host
                                                                        // Interface.
    RedfishCS_char                          *Name;                  
    RedfishCS_Link                          NetworkProtocol;            // The Redfish link to the
                                                                        // network services and their
                                                                        // settings that the Manager
                                                                        // controls.  It is here that
                                                                        // clients will find network
                                                                        // configuration options as well
                                                                        // as network services.
    RedfishResource_Oem_CS                  *Oem;                       // This is the
                                                                        // manufacturer/provider specific
                                                                        // extension moniker used to
                                                                        // divide the Oem object into
                                                                        // sections.
    RedfishResource_Status_CS               *Status;                    // This property describes the
                                                                        // status and health of the
                                                                        // resource and its children.
} RedfishHostInterface_V1_0_3_HostInterface_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_HostInterface_V1_0_3_To_CS (char *JsonRawText, RedfishHostInterface_V1_0_3_HostInterface_CS **ReturnedCS);

RedfishCS_status
CS_To_HostInterface_V1_0_3_JSON (RedfishHostInterface_V1_0_3_HostInterface_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyHostInterface_V1_0_3_CS (RedfishHostInterface_V1_0_3_HostInterface_CS *CSPtr);

RedfishCS_status
DestroyHostInterface_V1_0_3_Json (RedfishCS_char *JsonText);

#endif

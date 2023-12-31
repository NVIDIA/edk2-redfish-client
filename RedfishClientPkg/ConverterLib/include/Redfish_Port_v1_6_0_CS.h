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

#ifndef RedfishPort_V1_6_0_CSTRUCT_H_
#define RedfishPort_V1_6_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishPort_V1_6_0_ConfiguredNetworkLink_Array_CS RedfishPort_V1_6_0_ConfiguredNetworkLink_Array_CS;
typedef struct _RedfishPort_V1_6_0_FunctionMaxBandwidth_Array_CS RedfishPort_V1_6_0_FunctionMaxBandwidth_Array_CS;
typedef struct _RedfishPort_V1_6_0_FunctionMinBandwidth_Array_CS RedfishPort_V1_6_0_FunctionMinBandwidth_Array_CS;
typedef struct _RedfishPort_V1_6_0_LinkConfiguration_Array_CS RedfishPort_V1_6_0_LinkConfiguration_Array_CS;
#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishPort_V1_6_0_Actions_CS RedfishPort_V1_6_0_Actions_CS;
typedef struct _RedfishPort_V1_6_0_ConfiguredNetworkLink_CS RedfishPort_V1_6_0_ConfiguredNetworkLink_CS;
typedef struct _RedfishPort_V1_6_0_EthernetProperties_CS RedfishPort_V1_6_0_EthernetProperties_CS;
typedef struct _RedfishPort_V1_6_0_FibreChannelProperties_CS RedfishPort_V1_6_0_FibreChannelProperties_CS;
typedef struct _RedfishPort_V1_6_0_FunctionMaxBandwidth_CS RedfishPort_V1_6_0_FunctionMaxBandwidth_CS;
typedef struct _RedfishPort_V1_6_0_FunctionMinBandwidth_CS RedfishPort_V1_6_0_FunctionMinBandwidth_CS;
typedef struct _RedfishPort_V1_6_0_GenZ_CS RedfishPort_V1_6_0_GenZ_CS;
typedef struct _RedfishPort_V1_6_0_InfiniBandProperties_CS RedfishPort_V1_6_0_InfiniBandProperties_CS;
typedef struct _RedfishPort_V1_6_0_LLDPReceive_CS RedfishPort_V1_6_0_LLDPReceive_CS;
typedef struct _RedfishPort_V1_6_0_LLDPTransmit_CS RedfishPort_V1_6_0_LLDPTransmit_CS;
typedef struct _RedfishPort_V1_6_0_LinkConfiguration_CS RedfishPort_V1_6_0_LinkConfiguration_CS;
typedef struct _RedfishPort_V1_6_0_Links_CS RedfishPort_V1_6_0_Links_CS;
typedef struct _RedfishPort_V1_6_0_OemActions_CS RedfishPort_V1_6_0_OemActions_CS;
typedef struct _RedfishPort_V1_6_0_Port_CS RedfishPort_V1_6_0_Port_CS;
typedef struct _RedfishPort_V1_6_0_Reset_CS RedfishPort_V1_6_0_Reset_CS;
typedef struct _RedfishPort_V1_6_0_SFP_CS RedfishPort_V1_6_0_SFP_CS;
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
typedef struct _RedfishPort_V1_6_0_Actions_CS {
    RedfishPort_V1_6_0_Reset_CS         *Port_Reset;
    RedfishPort_V1_6_0_OemActions_CS    *Oem;          // The available OEM-specific
                                                       // actions for this resource.
} RedfishPort_V1_6_0_Actions_CS;

//
// A set of link settings that a port is configured to use for autonegotiation.
//
typedef struct _RedfishPort_V1_6_0_ConfiguredNetworkLink_CS {
    RedfishCS_int64    *ConfiguredLinkSpeedGbps;    // The link speed per lane this
                                                   // port is configured to use for
                                                   // autonegotiation.
    RedfishCS_int64    *ConfiguredWidth;           // The link width this port is
                                                   // configured to use for
                                                   // autonegotiation in conjunction
                                                   // with the link speed.
} RedfishPort_V1_6_0_ConfiguredNetworkLink_CS;

//
// Ethernet-specific properties for a port.
//
typedef struct _RedfishPort_V1_6_0_EthernetProperties_CS {
    RedfishCS_char_Array                  *AssociatedMACAddresses;          // An array of configured MAC
                                                                            // addresses that are associated
                                                                            // with this network port,
                                                                            // including the programmed
                                                                            // address of the lowest numbered
                                                                            // network device function, the
                                                                            // configured but not active
                                                                            // address, if applicable, the
                                                                            // address for hardware port
                                                                            // teaming, or other network
                                                                            // addresses.
    RedfishCS_bool                        *EEEEnabled;                      // Indicates whether IEEE 802.3az
                                                                            // Energy-Efficient Ethernet
                                                                            // (EEE) is enabled on this port.
    RedfishCS_char                        *FlowControlConfiguration;        // The locally configured 802.3x
                                                                            // flow control setting for this
                                                                            // port.
    RedfishCS_char                        *FlowControlStatus;               // The 802.3x flow control
                                                                            // behavior negotiated with the
                                                                            // link partner for this port.
    RedfishCS_bool                        *LLDPEnabled;                     // Enable/disable LLDP for this
                                                                            // port.
    RedfishPort_V1_6_0_LLDPReceive_CS     *LLDPReceive;                     // LLDP data being received on
                                                                            // this link.
    RedfishPort_V1_6_0_LLDPTransmit_CS    *LLDPTransmit;                    // LLDP data being transmitted on
                                                                            // this link.
    RedfishCS_char_Array                  *SupportedEthernetCapabilities;    // The set of Ethernet
                                                                            // capabilities that this port
                                                                            // supports.
    RedfishCS_bool                        *WakeOnLANEnabled;                // Indicates whether Wake on LAN
                                                                            // (WoL) is enabled on this port.
} RedfishPort_V1_6_0_EthernetProperties_CS;

//
// Fibre Channel-specific properties for a port.
//
typedef struct _RedfishPort_V1_6_0_FibreChannelProperties_CS {
    RedfishCS_char_Array    *AssociatedWorldWideNames;      // An array of configured World
                                                            // Wide Names (WWN) that are
                                                            // associated with this network
                                                            // port, including the programmed
                                                            // address of the lowest numbered
                                                            // network device function, the
                                                            // configured but not active
                                                            // address, if applicable, the
                                                            // address for hardware port
                                                            // teaming, or other network
                                                            // addresses.
    RedfishCS_char          *FabricName;                    // The Fibre Channel Fabric Name
                                                            // provided by the switch.
    RedfishCS_int64         *NumberDiscoveredRemotePorts;    // The number of ports not on the
                                                            // associated device that the
                                                            // associated device has
                                                            // discovered through this port.
    RedfishCS_char          *PortConnectionType;            // The connection type of this
                                                            // port.
} RedfishPort_V1_6_0_FibreChannelProperties_CS;

//
// A maximum bandwidth allocation percentage for a network device functions
// associated a port.
//
typedef struct _RedfishPort_V1_6_0_FunctionMaxBandwidth_CS {
    RedfishCS_int64    *AllocationPercent;      // The maximum bandwidth
                                                // allocation percentage
                                                // allocated to the corresponding
                                                // network device function
                                                // instance.
    RedfishCS_Link     NetworkDeviceFunction;    // The link to the network device
                                                // function associated with this
                                                // bandwidth setting of this
                                                // network port.
} RedfishPort_V1_6_0_FunctionMaxBandwidth_CS;

//
// A minimum bandwidth allocation percentage for a network device functions
// associated a port.
//
typedef struct _RedfishPort_V1_6_0_FunctionMinBandwidth_CS {
    RedfishCS_int64    *AllocationPercent;      // The minimum bandwidth
                                                // allocation percentage
                                                // allocated to the corresponding
                                                // network device function
                                                // instance.
    RedfishCS_Link     NetworkDeviceFunction;    // The link to the network device
                                                // function associated with this
                                                // bandwidth setting of this
                                                // network port.
} RedfishPort_V1_6_0_FunctionMinBandwidth_CS;

//
// This type defines Gen-Z specific port properties.
//
typedef struct _RedfishPort_V1_6_0_GenZ_CS {
    RedfishCS_Link    LPRT;    // The Linear Packet Relay Table
                              // for the port.
    RedfishCS_Link    MPRT;    // the Multi-subnet Packet Relay
                              // Table for the port.
    RedfishCS_Link    VCAT;    // the Virtual Channel Action
                              // Table for the port.
} RedfishPort_V1_6_0_GenZ_CS;

//
// InfiniBand-specific properties for a port.
//
typedef struct _RedfishPort_V1_6_0_InfiniBandProperties_CS {
    RedfishCS_char_Array    *AssociatedNodeGUIDs;     // An array of configured node
                                                      // GUIDs that are associated with
                                                      // this network port, including
                                                      // the programmed address of the
                                                      // lowest numbered network device
                                                      // function, the configured but
                                                      // not active address, if
                                                      // applicable, the address for
                                                      // hardware port teaming, or
                                                      // other network addresses.
    RedfishCS_char_Array    *AssociatedPortGUIDs;     // An array of configured port
                                                      // GUIDs that are associated with
                                                      // this network port, including
                                                      // the programmed address of the
                                                      // lowest numbered network device
                                                      // function, the configured but
                                                      // not active address, if
                                                      // applicable, the address for
                                                      // hardware port teaming, or
                                                      // other network addresses.
    RedfishCS_char_Array    *AssociatedSystemGUIDs;    // An array of configured system
                                                      // GUIDs that are associated with
                                                      // this network port, including
                                                      // the programmed address of the
                                                      // lowest numbered network device
                                                      // function, the configured but
                                                      // not active address, if
                                                      // applicable, the address for
                                                      // hardware port teaming, or
                                                      // other network addresses.
} RedfishPort_V1_6_0_InfiniBandProperties_CS;

//
// Link Layer Data Protocol (LLDP) data received from the remote partner across
// this link.
//
typedef struct _RedfishPort_V1_6_0_LLDPReceive_CS {
    RedfishCS_char     *ChassisId;               // Link Layer Data Protocol
                                                 // (LLDP) chassis ID received
                                                 // from the remote partner across
                                                 // this link.
    RedfishCS_char     *ChassisIdSubtype;        // The type of identifier used
                                                 // for the chassis ID received
                                                 // from the remote partner across
                                                 // this link.
    RedfishCS_char     *ManagementAddressIPv4;    // The IPv4 management address
                                                 // received from the remote
                                                 // partner across this link.
    RedfishCS_char     *ManagementAddressIPv6;    // The IPv6 management address
                                                 // received from the remote
                                                 // partner across this link.
    RedfishCS_char     *ManagementAddressMAC;    // The management MAC address
                                                 // received from the remote
                                                 // partner across this link.
    RedfishCS_int64    *ManagementVlanId;        // The management VLAN ID
                                                 // received from the remote
                                                 // partner across this link.
    RedfishCS_char     *PortId;                  // A colon delimited string of
                                                 // hexadecimal octets identifying
                                                 // a port.
    RedfishCS_char     *PortIdSubtype;           // The port ID subtype received
                                                 // from the remote partner across
                                                 // this link.
} RedfishPort_V1_6_0_LLDPReceive_CS;

//
// Link Layer Data Protocol (LLDP) data being transmitted on this link.
//
typedef struct _RedfishPort_V1_6_0_LLDPTransmit_CS {
    RedfishCS_char     *ChassisId;               // Link Layer Data Protocol
                                                 // (LLDP) chassis ID.
    RedfishCS_char     *ChassisIdSubtype;        // The type of identifier used
                                                 // for the chassis ID.
    RedfishCS_char     *ManagementAddressIPv4;    // The IPv4 management address to
                                                 // be transmitted from this
                                                 // endpoint.
    RedfishCS_char     *ManagementAddressIPv6;    // The IPv6 management address to
                                                 // be transmitted from this
                                                 // endpoint.
    RedfishCS_char     *ManagementAddressMAC;    // The management MAC address to
                                                 // be transmitted from this
                                                 // endpoint.
    RedfishCS_int64    *ManagementVlanId;        // The management VLAN ID to be
                                                 // transmitted from this
                                                 // endpoint.
    RedfishCS_char     *PortId;                  // A colon delimited string of
                                                 // hexadecimal octets identifying
                                                 // a port to be transmitted from
                                                 // this endpoint.
    RedfishCS_char     *PortIdSubtype;           // The port ID subtype to be
                                                 // transmitted from this
                                                 // endpoint.
} RedfishPort_V1_6_0_LLDPTransmit_CS;

//
// Properties of the link for which this port is configured.
//
typedef struct _RedfishPort_V1_6_0_LinkConfiguration_CS {
    RedfishCS_bool                                       *AutoSpeedNegotiationCapable;    // An indication of whether the
                                                                                         // port is capable of
                                                                                         // autonegotiating speed.
    RedfishCS_bool                                       *AutoSpeedNegotiationEnabled;    // Controls whether this port is
                                                                                         // configured to enable
                                                                                         // autonegotiating speed.
    RedfishCS_int64_Array                                *CapableLinkSpeedGbps;          // The set of link speed
                                                                                         // capabilities of this port.
    RedfishPort_V1_6_0_ConfiguredNetworkLink_Array_CS    *ConfiguredNetworkLinks;        // The set of link speed and
                                                                                         // width pairs this port is
                                                                                         // configured to use for
                                                                                         // autonegotiation.
} RedfishPort_V1_6_0_LinkConfiguration_CS;

//
// The links to other resources that are related to this resource.
//
typedef struct _RedfishPort_V1_6_0_Links_CS {
    RedfishCS_Link            AssociatedEndpoints;                // An array of links to the
                                                                  // endpoints that connect through
                                                                  // this port.
    RedfishCS_int64           *AssociatedEndpointsodata_count;
    RedfishCS_Link            Cables;                             // An array of links to the
                                                                  // cables connected to this port.
    RedfishCS_int64           *Cablesodata_count;             
    RedfishCS_Link            ConnectedPorts;                     // An array of links to the
                                                                  // remote ports connected to this
                                                                  // port.
    RedfishCS_int64           *ConnectedPortsodata_count;     
    RedfishCS_Link            ConnectedSwitchPorts;               // An array of links to the ports
                                                                  // that connect to the switch
                                                                  // through this port.
    RedfishCS_int64           *ConnectedSwitchPortsodata_count;
    RedfishCS_Link            ConnectedSwitches;                  // An array of links to the
                                                                  // switches that connect to the
                                                                  // device through this port.
    RedfishCS_int64           *ConnectedSwitchesodata_count;  
    RedfishResource_Oem_CS    *Oem;                               // The OEM extension property.
} RedfishPort_V1_6_0_Links_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishPort_V1_6_0_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishPort_V1_6_0_OemActions_CS;

//
// This action resets this port.
//
typedef struct _RedfishPort_V1_6_0_Reset_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishPort_V1_6_0_Reset_CS;

//
// A small form-factor pluggable (SFP) device attached to a port.
//
typedef struct _RedfishPort_V1_6_0_SFP_CS {
    RedfishCS_char               *FiberConnectionType;    // The type of fiber connection
                                                         // currently used by this SFP.
    RedfishCS_char               *Manufacturer;          // The manufacturer of this SFP.
    RedfishCS_char               *MediumType;            // The medium type connected to
                                                         // this SFP.
    RedfishCS_char               *PartNumber;            // The part number for this SFP.
    RedfishCS_char               *SerialNumber;          // The serial number for this
                                                         // SFP.
    RedfishResource_Status_CS    *Status;                // The status and health of the
                                                         // resource and its subordinate
                                                         // or dependent resources.
    RedfishCS_char_Array         *SupportedSFPTypes;     // The types of SFP devices that
                                                         // can be attached to this port.
    RedfishCS_char               *Type;                  // The type of SFP device that is
                                                         // attached to this port.
} RedfishPort_V1_6_0_SFP_CS;

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
// The Port schema contains properties that describe a port of a switch,
// controller, chassis, or any other device that could be connected to another
// entity.
//
typedef struct _RedfishPort_V1_6_0_Port_CS {
    RedfishCS_Header                                    Header;
    RedfishCS_char                                      *odata_context;         
    RedfishCS_char                                      *odata_etag;            
    RedfishCS_char                                      *odata_id;              
    RedfishCS_char                                      *odata_type;            
    RedfishPort_V1_6_0_Actions_CS                       *Actions;                   // The available actions for this
                                                                                    // resource.
    RedfishCS_int64                                     *ActiveWidth;               // The number of active lanes for
                                                                                    // this interface.
    RedfishCS_char_Array                                *CapableProtocolVersions;    // The protocol versions capable
                                                                                    // of being sent over this port.
    RedfishCS_char                                      *CurrentProtocolVersion;    // The protocol version being
                                                                                    // sent over this port.
    RedfishCS_int64                                     *CurrentSpeedGbps;          // The current speed of this
                                                                                    // port.
    RedfishCS_char                                      *Description;           
    RedfishCS_bool                                      *Enabled;                   // An indication of whether this
                                                                                    // port is enabled.
    RedfishCS_Link                                      EnvironmentMetrics;         // The link to the environment
                                                                                    // metrics for this port or any
                                                                                    // attached small form-factor
                                                                                    // pluggable (SFP) device.
    RedfishPort_V1_6_0_EthernetProperties_CS            *Ethernet;                  // Ethernet properties for this
                                                                                    // port.
    RedfishPort_V1_6_0_FibreChannelProperties_CS        *FibreChannel;              // Fibre Channel properties for
                                                                                    // this port.
    RedfishPort_V1_6_0_FunctionMaxBandwidth_Array_CS    *FunctionMaxBandwidth;      // An array of maximum bandwidth
                                                                                    // allocation percentages for the
                                                                                    // functions associated with this
                                                                                    // port.
    RedfishPort_V1_6_0_FunctionMinBandwidth_Array_CS    *FunctionMinBandwidth;      // An array of minimum bandwidth
                                                                                    // allocation percentages for the
                                                                                    // functions associated with this
                                                                                    // port.
    RedfishPort_V1_6_0_GenZ_CS                          *GenZ;                      // Gen-Z specific properties.
    RedfishCS_char                                      *Id;                    
    RedfishPort_V1_6_0_InfiniBandProperties_CS          *InfiniBand;                // InfiniBand properties for this
                                                                                    // port.
    RedfishCS_bool                                      *InterfaceEnabled;          // An indication of whether the
                                                                                    // interface is enabled.
    RedfishPort_V1_6_0_LinkConfiguration_Array_CS       *LinkConfiguration;         // The link configuration of this
                                                                                    // port.
    RedfishCS_char                                      *LinkNetworkTechnology;     // The link network technology
                                                                                    // capabilities of this port.
    RedfishCS_char                                      *LinkState;                 // The desired link state for
                                                                                    // this interface.
    RedfishCS_char                                      *LinkStatus;                // The link status for this
                                                                                    // interface.
    RedfishCS_int64                                     *LinkTransitionIndicator;    // The number of link state
                                                                                    // transitions for this
                                                                                    // interface.
    RedfishPort_V1_6_0_Links_CS                         *Links;                     // The links to other resources
                                                                                    // that are related to this
                                                                                    // resource.
    RedfishCS_Link                                      Location;                   // The location of the port.
    RedfishCS_bool                                      *LocationIndicatorActive;    // An indicator allowing an
                                                                                    // operator to physically locate
                                                                                    // this resource.
    RedfishCS_int64                                     *MaxFrameSize;              // The maximum frame size
                                                                                    // supported by the port.
    RedfishCS_int64                                     *MaxSpeedGbps;              // The maximum speed of this port
                                                                                    // as currently configured.
    RedfishCS_Link                                      Metrics;                    // The link to the metrics
                                                                                    // associated with this port.
    RedfishCS_char                                      *Name;                  
    RedfishResource_Oem_CS                              *Oem;                       // The OEM extension property.
    RedfishCS_char                                      *PortId;                    // The label of this port on the
                                                                                    // physical package for this
                                                                                    // port.
    RedfishCS_char                                      *PortMedium;                // The physical connection medium
                                                                                    // for this port.
    RedfishCS_char                                      *PortProtocol;              // The protocol being sent over
                                                                                    // this port.
    RedfishCS_char                                      *PortType;                  // The type of this port.
    RedfishPort_V1_6_0_SFP_CS                           *SFP;                       // The small form-factor
                                                                                    // pluggable (SFP) device
                                                                                    // associated with this port.
    RedfishCS_bool                                      *SignalDetected;            // An indication of whether a
                                                                                    // signal is detected on this
                                                                                    // interface.
    RedfishResource_Status_CS                           *Status;                    // The status and health of the
                                                                                    // resource and its subordinate
                                                                                    // or dependent resources.
    RedfishCS_int64                                     *Width;                     // The number of lanes, phys, or
                                                                                    // other physical transport links
                                                                                    // that this port contains.
} RedfishPort_V1_6_0_Port_CS;

typedef struct _RedfishPort_V1_6_0_ConfiguredNetworkLink_Array_CS  {
    RedfishPort_V1_6_0_ConfiguredNetworkLink_Array_CS    *Next;
    RedfishPort_V1_6_0_ConfiguredNetworkLink_CS    *ArrayValue;
} RedfishPort_V1_6_0_ConfiguredNetworkLink_Array_CS;

typedef struct _RedfishPort_V1_6_0_FunctionMaxBandwidth_Array_CS  {
    RedfishPort_V1_6_0_FunctionMaxBandwidth_Array_CS    *Next;
    RedfishPort_V1_6_0_FunctionMaxBandwidth_CS    *ArrayValue;
} RedfishPort_V1_6_0_FunctionMaxBandwidth_Array_CS;

typedef struct _RedfishPort_V1_6_0_FunctionMinBandwidth_Array_CS  {
    RedfishPort_V1_6_0_FunctionMinBandwidth_Array_CS    *Next;
    RedfishPort_V1_6_0_FunctionMinBandwidth_CS    *ArrayValue;
} RedfishPort_V1_6_0_FunctionMinBandwidth_Array_CS;

typedef struct _RedfishPort_V1_6_0_LinkConfiguration_Array_CS  {
    RedfishPort_V1_6_0_LinkConfiguration_Array_CS    *Next;
    RedfishPort_V1_6_0_LinkConfiguration_CS    *ArrayValue;
} RedfishPort_V1_6_0_LinkConfiguration_Array_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_Port_V1_6_0_To_CS (char *JsonRawText, RedfishPort_V1_6_0_Port_CS **ReturnedCS);

RedfishCS_status
CS_To_Port_V1_6_0_JSON (RedfishPort_V1_6_0_Port_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyPort_V1_6_0_CS (RedfishPort_V1_6_0_Port_CS *CSPtr);

RedfishCS_status
DestroyPort_V1_6_0_Json (RedfishCS_char *JsonText);

#endif

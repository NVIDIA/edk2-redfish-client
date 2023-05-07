# Definition of NetworkDeviceFunction.V1_7_0 and functions<br><br>

## Actions
    typedef struct _RedfishNetworkDeviceFunction_V1_7_0_Actions_CS {
        RedfishNetworkDeviceFunction_V1_7_0_OemActions_CS *Oem;
    } RedfishNetworkDeviceFunction_V1_7_0_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishNetworkDeviceFunction_V1_7_0_OemActions_CS| Structure points to **Oem** property.| No| No


## BootTargets
    typedef struct _RedfishNetworkDeviceFunction_V1_7_0_BootTargets_CS {
        RedfishCS_int64 *BootPriority;
        RedfishCS_char *LUNID;
        RedfishCS_char *WWPN;
    } RedfishNetworkDeviceFunction_V1_7_0_BootTargets_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**BootPriority**|RedfishCS_int64| 64-bit long long interger pointer to **BootPriority** property.| No| No
|**LUNID**|RedfishCS_char| String pointer to **LUNID** property.| No| No
|**WWPN**|RedfishCS_char| String pointer to **WWPN** property.| No| No


## Ethernet
    typedef struct _RedfishNetworkDeviceFunction_V1_7_0_Ethernet_CS {
        RedfishCS_Link EthernetInterfaces;
        RedfishCS_char *MACAddress;
        RedfishCS_int64 *MTUSize;
        RedfishCS_int64 *MTUSizeMaximum;
        RedfishCS_char *PermanentMACAddress;
        RedfishCS_Link VLAN;
        RedfishCS_Link VLANs;
    } RedfishNetworkDeviceFunction_V1_7_0_Ethernet_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**EthernetInterfaces**|RedfishCS_Link| Structure link list to **EthernetInterfaces** property.| No| Yes
|**MACAddress**|RedfishCS_char| String pointer to **MACAddress** property.| No| No
|**MTUSize**|RedfishCS_int64| 64-bit long long interger pointer to **MTUSize** property.| No| No
|**MTUSizeMaximum**|RedfishCS_int64| 64-bit long long interger pointer to **MTUSizeMaximum** property.| No| Yes
|**PermanentMACAddress**|RedfishCS_char| String pointer to **PermanentMACAddress** property.| No| Yes
|**VLAN**|RedfishCS_Link| Structure link list to **VLAN** property.| No| No
|**VLANs**|RedfishCS_Link| Structure link list to **VLANs** property.| No| Yes


## FibreChannel
    typedef struct _RedfishNetworkDeviceFunction_V1_7_0_FibreChannel_CS {
        RedfishCS_bool *AllowFIPVLANDiscovery;
        RedfishNetworkDeviceFunction_V1_7_0_BootTargets_Array_CS *BootTargets;
        RedfishCS_int64 *FCoEActiveVLANId;
        RedfishCS_int64 *FCoELocalVLANId;
        RedfishCS_char *FibreChannelId;
        RedfishCS_char *PermanentWWNN;
        RedfishCS_char *PermanentWWPN;
        RedfishCS_char *WWNN;
        RedfishCS_char *WWNSource;
        RedfishCS_char *WWPN;
    } RedfishNetworkDeviceFunction_V1_7_0_FibreChannel_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**AllowFIPVLANDiscovery**|RedfishCS_bool| Boolean pointer to **AllowFIPVLANDiscovery** property.| No| No
|**BootTargets**|RedfishNetworkDeviceFunction_V1_7_0_BootTargets_Array_CS| Structure array points to one or more than one **RedfishNetworkDeviceFunction_V1_7_0_BootTargets_Array_CS** structures for property **BootTargets**.| No| No
|**FCoEActiveVLANId**|RedfishCS_int64| 64-bit long long interger pointer to **FCoEActiveVLANId** property.| No| Yes
|**FCoELocalVLANId**|RedfishCS_int64| 64-bit long long interger pointer to **FCoELocalVLANId** property.| No| No
|**FibreChannelId**|RedfishCS_char| String pointer to **FibreChannelId** property.| No| Yes
|**PermanentWWNN**|RedfishCS_char| String pointer to **PermanentWWNN** property.| No| Yes
|**PermanentWWPN**|RedfishCS_char| String pointer to **PermanentWWPN** property.| No| Yes
|**WWNN**|RedfishCS_char| String pointer to **WWNN** property.| No| No
|**WWNSource**|RedfishCS_char| String pointer to **WWNSource** property.| No| No
|**WWPN**|RedfishCS_char| String pointer to **WWPN** property.| No| No


## InfiniBand
    typedef struct _RedfishNetworkDeviceFunction_V1_7_0_InfiniBand_CS {
        RedfishCS_int64 *MTUSize;
        RedfishCS_char *NodeGUID;
        RedfishCS_char *PermanentNodeGUID;
        RedfishCS_char *PermanentPortGUID;
        RedfishCS_char *PermanentSystemGUID;
        RedfishCS_char *PortGUID;
        RedfishCS_int64_Array *SupportedMTUSizes;
        RedfishCS_char *SystemGUID;
    } RedfishNetworkDeviceFunction_V1_7_0_InfiniBand_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**MTUSize**|RedfishCS_int64| 64-bit long long interger pointer to **MTUSize** property.| No| No
|**NodeGUID**|RedfishCS_char| String pointer to **NodeGUID** property.| No| Yes
|**PermanentNodeGUID**|RedfishCS_char| String pointer to **PermanentNodeGUID** property.| No| Yes
|**PermanentPortGUID**|RedfishCS_char| String pointer to **PermanentPortGUID** property.| No| Yes
|**PermanentSystemGUID**|RedfishCS_char| String pointer to **PermanentSystemGUID** property.| No| Yes
|**PortGUID**|RedfishCS_char| String pointer to **PortGUID** property.| No| Yes
|**SupportedMTUSizes**|RedfishCS_int64_Array| Structure array points to one or more than one **RedfishCS_int64 *** for property **SupportedMTUSizes**.| No| Yes
|**SystemGUID**|RedfishCS_char| String pointer to **SystemGUID** property.| No| Yes


## Limit
    typedef struct _RedfishNetworkDeviceFunction_V1_7_0_Limit_CS {
        RedfishCS_int64 *BurstBytesPerSecond;
        RedfishCS_int64 *BurstPacketsPerSecond;
        RedfishCS_char *Direction;
        RedfishCS_int64 *SustainedBytesPerSecond;
        RedfishCS_int64 *SustainedPacketsPerSecond;
    } RedfishNetworkDeviceFunction_V1_7_0_Limit_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**BurstBytesPerSecond**|RedfishCS_int64| 64-bit long long interger pointer to **BurstBytesPerSecond** property.| No| No
|**BurstPacketsPerSecond**|RedfishCS_int64| 64-bit long long interger pointer to **BurstPacketsPerSecond** property.| No| No
|**Direction**|RedfishCS_char| String pointer to **Direction** property.| No| No
|**SustainedBytesPerSecond**|RedfishCS_int64| 64-bit long long interger pointer to **SustainedBytesPerSecond** property.| No| No
|**SustainedPacketsPerSecond**|RedfishCS_int64| 64-bit long long interger pointer to **SustainedPacketsPerSecond** property.| No| No


## Links
    typedef struct _RedfishNetworkDeviceFunction_V1_7_0_Links_CS {
        RedfishCS_Link Endpoints;
        RedfishCS_int64 *Endpointsodata_count;
        RedfishCS_Link EthernetInterface;
        RedfishCS_Link EthernetInterfaces;
        RedfishCS_int64 *EthernetInterfacesodata_count;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_Link OffloadProcessors;
        RedfishCS_int64 *OffloadProcessorsodata_count;
        RedfishCS_Link OffloadSystem;
        RedfishCS_Link PCIeFunction;
        RedfishCS_Link PhysicalNetworkPortAssignment;
        RedfishCS_Link PhysicalPortAssignment;
    } RedfishNetworkDeviceFunction_V1_7_0_Links_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Endpoints**|RedfishCS_Link| Structure link list to **Endpoints** property.| No| Yes
|**Endpointsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **Endpoints@odata.count** property.| No| No
|**EthernetInterface**|RedfishCS_Link| Structure link list to **EthernetInterface** property.| No| No
|**EthernetInterfaces**|RedfishCS_Link| Structure link list to **EthernetInterfaces** property.| No| No
|**EthernetInterfacesodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **EthernetInterfaces@odata.count** property.| No| No
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**OffloadProcessors**|RedfishCS_Link| Structure link list to **OffloadProcessors** property.| No| Yes
|**OffloadProcessorsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **OffloadProcessors@odata.count** property.| No| No
|**OffloadSystem**|RedfishCS_Link| Structure link list to **OffloadSystem** property.| No| Yes
|**PCIeFunction**|RedfishCS_Link| Structure link list to **PCIeFunction** property.| No| Yes
|**PhysicalNetworkPortAssignment**|RedfishCS_Link| Structure link list to **PhysicalNetworkPortAssignment** property.| No| No
|**PhysicalPortAssignment**|RedfishCS_Link| Structure link list to **PhysicalPortAssignment** property.| No| No


## OemActions
    typedef struct _RedfishNetworkDeviceFunction_V1_7_0_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishNetworkDeviceFunction_V1_7_0_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## iSCSIBoot
    typedef struct _RedfishNetworkDeviceFunction_V1_7_0_iSCSIBoot_CS {
        RedfishCS_char *AuthenticationMethod;
        RedfishCS_char *CHAPSecret;
        RedfishCS_char *CHAPUsername;
        RedfishCS_char *IPAddressType;
        RedfishCS_bool *IPMaskDNSViaDHCP;
        RedfishCS_char *InitiatorDefaultGateway;
        RedfishCS_char *InitiatorIPAddress;
        RedfishCS_char *InitiatorName;
        RedfishCS_char *InitiatorNetmask;
        RedfishCS_char *MutualCHAPSecret;
        RedfishCS_char *MutualCHAPUsername;
        RedfishCS_char *PrimaryDNS;
        RedfishCS_int64 *PrimaryLUN;
        RedfishCS_char *PrimaryTargetIPAddress;
        RedfishCS_char *PrimaryTargetName;
        RedfishCS_int64 *PrimaryTargetTCPPort;
        RedfishCS_bool *PrimaryVLANEnable;
        RedfishCS_int64 *PrimaryVLANId;
        RedfishCS_bool *RouterAdvertisementEnabled;
        RedfishCS_char *SecondaryDNS;
        RedfishCS_int64 *SecondaryLUN;
        RedfishCS_char *SecondaryTargetIPAddress;
        RedfishCS_char *SecondaryTargetName;
        RedfishCS_int64 *SecondaryTargetTCPPort;
        RedfishCS_bool *SecondaryVLANEnable;
        RedfishCS_int64 *SecondaryVLANId;
        RedfishCS_bool *TargetInfoViaDHCP;
    } RedfishNetworkDeviceFunction_V1_7_0_iSCSIBoot_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**AuthenticationMethod**|RedfishCS_char| String pointer to **AuthenticationMethod** property.| No| No
|**CHAPSecret**|RedfishCS_char| String pointer to **CHAPSecret** property.| No| No
|**CHAPUsername**|RedfishCS_char| String pointer to **CHAPUsername** property.| No| No
|**IPAddressType**|RedfishCS_char| String pointer to **IPAddressType** property.| No| No
|**IPMaskDNSViaDHCP**|RedfishCS_bool| Boolean pointer to **IPMaskDNSViaDHCP** property.| No| No
|**InitiatorDefaultGateway**|RedfishCS_char| String pointer to **InitiatorDefaultGateway** property.| No| No
|**InitiatorIPAddress**|RedfishCS_char| String pointer to **InitiatorIPAddress** property.| No| No
|**InitiatorName**|RedfishCS_char| String pointer to **InitiatorName** property.| No| No
|**InitiatorNetmask**|RedfishCS_char| String pointer to **InitiatorNetmask** property.| No| No
|**MutualCHAPSecret**|RedfishCS_char| String pointer to **MutualCHAPSecret** property.| No| No
|**MutualCHAPUsername**|RedfishCS_char| String pointer to **MutualCHAPUsername** property.| No| No
|**PrimaryDNS**|RedfishCS_char| String pointer to **PrimaryDNS** property.| No| No
|**PrimaryLUN**|RedfishCS_int64| 64-bit long long interger pointer to **PrimaryLUN** property.| No| No
|**PrimaryTargetIPAddress**|RedfishCS_char| String pointer to **PrimaryTargetIPAddress** property.| No| No
|**PrimaryTargetName**|RedfishCS_char| String pointer to **PrimaryTargetName** property.| No| No
|**PrimaryTargetTCPPort**|RedfishCS_int64| 64-bit long long interger pointer to **PrimaryTargetTCPPort** property.| No| No
|**PrimaryVLANEnable**|RedfishCS_bool| Boolean pointer to **PrimaryVLANEnable** property.| No| No
|**PrimaryVLANId**|RedfishCS_int64| 64-bit long long interger pointer to **PrimaryVLANId** property.| No| No
|**RouterAdvertisementEnabled**|RedfishCS_bool| Boolean pointer to **RouterAdvertisementEnabled** property.| No| No
|**SecondaryDNS**|RedfishCS_char| String pointer to **SecondaryDNS** property.| No| No
|**SecondaryLUN**|RedfishCS_int64| 64-bit long long interger pointer to **SecondaryLUN** property.| No| No
|**SecondaryTargetIPAddress**|RedfishCS_char| String pointer to **SecondaryTargetIPAddress** property.| No| No
|**SecondaryTargetName**|RedfishCS_char| String pointer to **SecondaryTargetName** property.| No| No
|**SecondaryTargetTCPPort**|RedfishCS_int64| 64-bit long long interger pointer to **SecondaryTargetTCPPort** property.| No| No
|**SecondaryVLANEnable**|RedfishCS_bool| Boolean pointer to **SecondaryVLANEnable** property.| No| No
|**SecondaryVLANId**|RedfishCS_int64| 64-bit long long interger pointer to **SecondaryVLANId** property.| No| No
|**TargetInfoViaDHCP**|RedfishCS_bool| Boolean pointer to **TargetInfoViaDHCP** property.| No| No


## Condition
    typedef struct _RedfishResource_Condition_CS {
        RedfishCS_Link LogEntry;
        RedfishCS_char *Message;
        RedfishCS_char_Array *MessageArgs;
        RedfishCS_char *MessageId;
        Redfishodatav4_idRef_CS *OriginOfCondition;
        RedfishCS_char *Resolution;
        RedfishCS_char *Severity;
        RedfishCS_char *Timestamp;
    } RedfishResource_Condition_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**LogEntry**|RedfishCS_Link| Structure link list to **LogEntry** property.| No| Yes
|**Message**|RedfishCS_char| String pointer to **Message** property.| No| Yes
|**MessageArgs**|RedfishCS_char_Array| Structure array points to one or more than one **RedfishCS_char *** for property **MessageArgs**.| No| Yes
|**MessageId**|RedfishCS_char| String pointer to **MessageId** property.| No| Yes
|**OriginOfCondition**|Redfishodatav4_idRef_CS| Structure points to **OriginOfCondition** property.| No| Yes
|**Resolution**|RedfishCS_char| String pointer to **Resolution** property.| No| Yes
|**Severity**|RedfishCS_char| String pointer to **Severity** property.| No| Yes
|**Timestamp**|RedfishCS_char| String pointer to **Timestamp** property.| No| Yes


## Oem
    typedef struct _RedfishResource_Oem_CS {
        RedfishCS_Link Prop;
    } RedfishResource_Oem_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## Status
    typedef struct _RedfishResource_Status_CS {
        RedfishResource_Condition_Array_CS *Conditions;
        RedfishCS_char *Health;
        RedfishCS_char *HealthRollup;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *State;
    } RedfishResource_Status_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Conditions**|RedfishResource_Condition_Array_CS| Structure array points to one or more than one **RedfishResource_Condition_Array_CS** structures for property **Conditions**.| No| No
|**Health**|RedfishCS_char| String pointer to **Health** property.| No| Yes
|**HealthRollup**|RedfishCS_char| String pointer to **HealthRollup** property.| No| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**State**|RedfishCS_char| String pointer to **State** property.| No| Yes


## idRef
    typedef struct _Redfishodatav4_idRef_CS {
        RedfishCS_char *odata_id;
    } Redfishodatav4_idRef_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No


## RedfishNetworkDeviceFunction_V1_7_0_BootTargets_Array_CS
    typedef struct _RedfishNetworkDeviceFunction_V1_7_0_BootTargets_Array_CS  {
        RedfishCS_Link *Next;
        RedfishNetworkDeviceFunction_V1_7_0_BootTargets_CS *ArrayValue;
    } RedfishNetworkDeviceFunction_V1_7_0_BootTargets_Array_CS;



## RedfishCS_int64_Array
    typedef struct _RedfishCS_int64_Array  {
        RedfishCS_Link *Next;
        RedfishCS_int64 *ArrayValue;
    } RedfishCS_int64_Array;



## RedfishCS_char_Array
    typedef struct _RedfishCS_char_Array  {
        RedfishCS_Link *Next;
        RedfishCS_char *ArrayValue;
    } RedfishCS_char_Array;



## RedfishResource_Condition_Array_CS
    typedef struct _RedfishResource_Condition_Array_CS  {
        RedfishCS_Link *Next;
        RedfishResource_Condition_CS *ArrayValue;
    } RedfishResource_Condition_Array_CS;



## NetworkDeviceFunction
    typedef struct _RedfishNetworkDeviceFunction_V1_7_0_NetworkDeviceFunction_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishNetworkDeviceFunction_V1_7_0_Actions_CS *Actions;
        RedfishCS_Link AllowDeny;
        RedfishCS_Link AssignablePhysicalNetworkPorts;
        RedfishCS_int64 *AssignablePhysicalNetworkPortsodata_count;
        RedfishCS_Link AssignablePhysicalPorts;
        RedfishCS_int64 *AssignablePhysicalPortsodata_count;
        RedfishCS_char *BootMode;
        RedfishCS_char *Description;
        RedfishCS_bool *DeviceEnabled;
        RedfishNetworkDeviceFunction_V1_7_0_Ethernet_CS *Ethernet;
        RedfishNetworkDeviceFunction_V1_7_0_FibreChannel_CS *FibreChannel;
        RedfishCS_char *Id;
        RedfishNetworkDeviceFunction_V1_7_0_InfiniBand_CS *InfiniBand;
        RedfishNetworkDeviceFunction_V1_7_0_Limit_CS *Limits;
        RedfishNetworkDeviceFunction_V1_7_0_Links_CS *Links;
        RedfishCS_int64 *MaxVirtualFunctions;
        RedfishCS_Link Metrics;
        RedfishCS_char *Name;
        RedfishCS_char *NetDevFuncCapabilities;
        RedfishCS_char *NetDevFuncType;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_Link PhysicalNetworkPortAssignment;
        RedfishCS_Link PhysicalPortAssignment;
        RedfishCS_bool *SAVIEnabled;
        RedfishResource_Status_CS *Status;
        RedfishCS_bool *VirtualFunctionsEnabled;
        RedfishNetworkDeviceFunction_V1_7_0_iSCSIBoot_CS *iSCSIBoot;
    } RedfishNetworkDeviceFunction_V1_7_0_NetworkDeviceFunction_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishNetworkDeviceFunction_V1_7_0_Actions_CS| Structure points to **Actions** property.| No| No
|**AllowDeny**|RedfishCS_Link| Structure link list to **AllowDeny** property.| No| Yes
|**AssignablePhysicalNetworkPorts**|RedfishCS_Link| Structure link list to **AssignablePhysicalNetworkPorts** property.| No| Yes
|**AssignablePhysicalNetworkPortsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **AssignablePhysicalNetworkPorts@odata.count** property.| No| No
|**AssignablePhysicalPorts**|RedfishCS_Link| Structure link list to **AssignablePhysicalPorts** property.| No| Yes
|**AssignablePhysicalPortsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **AssignablePhysicalPorts@odata.count** property.| No| No
|**BootMode**|RedfishCS_char| String pointer to **BootMode** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**DeviceEnabled**|RedfishCS_bool| Boolean pointer to **DeviceEnabled** property.| No| No
|**Ethernet**|RedfishNetworkDeviceFunction_V1_7_0_Ethernet_CS| Structure points to **Ethernet** property.| No| No
|**FibreChannel**|RedfishNetworkDeviceFunction_V1_7_0_FibreChannel_CS| Structure points to **FibreChannel** property.| No| No
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**InfiniBand**|RedfishNetworkDeviceFunction_V1_7_0_InfiniBand_CS| Structure points to **InfiniBand** property.| No| No
|**Limits**|RedfishNetworkDeviceFunction_V1_7_0_Limit_CS| Structure points to **Limits** property.| No| No
|**Links**|RedfishNetworkDeviceFunction_V1_7_0_Links_CS| Structure points to **Links** property.| No| No
|**MaxVirtualFunctions**|RedfishCS_int64| 64-bit long long interger pointer to **MaxVirtualFunctions** property.| No| Yes
|**Metrics**|RedfishCS_Link| Structure link list to **Metrics** property.| No| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**NetDevFuncCapabilities**|RedfishCS_char| String pointer to **NetDevFuncCapabilities** property.| No| Yes
|**NetDevFuncType**|RedfishCS_char| String pointer to **NetDevFuncType** property.| No| No
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**PhysicalNetworkPortAssignment**|RedfishCS_Link| Structure link list to **PhysicalNetworkPortAssignment** property.| No| Yes
|**PhysicalPortAssignment**|RedfishCS_Link| Structure link list to **PhysicalPortAssignment** property.| No| Yes
|**SAVIEnabled**|RedfishCS_bool| Boolean pointer to **SAVIEnabled** property.| No| No
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
|**VirtualFunctionsEnabled**|RedfishCS_bool| Boolean pointer to **VirtualFunctionsEnabled** property.| No| Yes
|**iSCSIBoot**|RedfishNetworkDeviceFunction_V1_7_0_iSCSIBoot_CS| Structure points to **iSCSIBoot** property.| No| No
## Redfish NetworkDeviceFunction V1_7_0 to C Structure Function
    RedfishCS_status
    Json_NetworkDeviceFunction_V1_7_0_To_CS (RedfishCS_char *JsonRawText, RedfishNetworkDeviceFunction_V1_7_0_NetworkDeviceFunction_CS **ReturnedCS);

## C Structure to Redfish NetworkDeviceFunction V1_7_0 JSON Function
    RedfishCS_status
    CS_To_NetworkDeviceFunction_V1_7_0_JSON (RedfishNetworkDeviceFunction_V1_7_0_NetworkDeviceFunction_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish NetworkDeviceFunction V1_7_0 C Structure Function
    RedfishCS_status
    DestroyNetworkDeviceFunction_V1_7_0_CS (RedfishNetworkDeviceFunction_V1_7_0_NetworkDeviceFunction_CS *CSPtr);


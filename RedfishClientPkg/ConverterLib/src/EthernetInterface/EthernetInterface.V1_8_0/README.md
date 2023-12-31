# Definition of EthernetInterface.V1_8_0 and functions<br><br>

## Actions
    typedef struct _RedfishEthernetInterface_V1_8_0_Actions_CS {
        RedfishEthernetInterface_V1_8_0_OemActions_CS *Oem;
    } RedfishEthernetInterface_V1_8_0_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishEthernetInterface_V1_8_0_OemActions_CS| Structure points to **Oem** property.| No| No


## DHCPv4Configuration
    typedef struct _RedfishEthernetInterface_V1_8_0_DHCPv4Configuration_CS {
        RedfishCS_bool *DHCPEnabled;
        RedfishCS_char *FallbackAddress;
        RedfishCS_bool *UseDNSServers;
        RedfishCS_bool *UseDomainName;
        RedfishCS_bool *UseGateway;
        RedfishCS_bool *UseNTPServers;
        RedfishCS_bool *UseStaticRoutes;
    } RedfishEthernetInterface_V1_8_0_DHCPv4Configuration_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**DHCPEnabled**|RedfishCS_bool| Boolean pointer to **DHCPEnabled** property.| No| No
|**FallbackAddress**|RedfishCS_char| String pointer to **FallbackAddress** property.| No| No
|**UseDNSServers**|RedfishCS_bool| Boolean pointer to **UseDNSServers** property.| No| No
|**UseDomainName**|RedfishCS_bool| Boolean pointer to **UseDomainName** property.| No| No
|**UseGateway**|RedfishCS_bool| Boolean pointer to **UseGateway** property.| No| No
|**UseNTPServers**|RedfishCS_bool| Boolean pointer to **UseNTPServers** property.| No| No
|**UseStaticRoutes**|RedfishCS_bool| Boolean pointer to **UseStaticRoutes** property.| No| No


## DHCPv6Configuration
    typedef struct _RedfishEthernetInterface_V1_8_0_DHCPv6Configuration_CS {
        RedfishCS_char *OperatingMode;
        RedfishCS_bool *UseDNSServers;
        RedfishCS_bool *UseDomainName;
        RedfishCS_bool *UseNTPServers;
        RedfishCS_bool *UseRapidCommit;
    } RedfishEthernetInterface_V1_8_0_DHCPv6Configuration_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**OperatingMode**|RedfishCS_char| String pointer to **OperatingMode** property.| No| No
|**UseDNSServers**|RedfishCS_bool| Boolean pointer to **UseDNSServers** property.| No| No
|**UseDomainName**|RedfishCS_bool| Boolean pointer to **UseDomainName** property.| No| No
|**UseNTPServers**|RedfishCS_bool| Boolean pointer to **UseNTPServers** property.| No| No
|**UseRapidCommit**|RedfishCS_bool| Boolean pointer to **UseRapidCommit** property.| No| No


## IPv6AddressPolicyEntry
    typedef struct _RedfishEthernetInterface_V1_8_0_IPv6AddressPolicyEntry_CS {
        RedfishCS_int64 *Label;
        RedfishCS_int64 *Precedence;
        RedfishCS_char *Prefix;
    } RedfishEthernetInterface_V1_8_0_IPv6AddressPolicyEntry_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Label**|RedfishCS_int64| 64-bit long long interger pointer to **Label** property.| No| No
|**Precedence**|RedfishCS_int64| 64-bit long long interger pointer to **Precedence** property.| No| No
|**Prefix**|RedfishCS_char| String pointer to **Prefix** property.| No| No


## Links
    typedef struct _RedfishEthernetInterface_V1_8_0_Links_CS {
        RedfishCS_Link Chassis;
        RedfishCS_Link Endpoints;
        RedfishCS_int64 *Endpointsodata_count;
        RedfishCS_Link HostInterface;
        RedfishCS_Link NetworkDeviceFunction;
        RedfishCS_Link NetworkDeviceFunctions;
        RedfishCS_int64 *NetworkDeviceFunctionsodata_count;
        RedfishResource_Oem_CS *Oem;
    } RedfishEthernetInterface_V1_8_0_Links_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Chassis**|RedfishCS_Link| Structure link list to **Chassis** property.| No| Yes
|**Endpoints**|RedfishCS_Link| Structure link list to **Endpoints** property.| No| Yes
|**Endpointsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **Endpoints@odata.count** property.| No| No
|**HostInterface**|RedfishCS_Link| Structure link list to **HostInterface** property.| No| Yes
|**NetworkDeviceFunction**|RedfishCS_Link| Structure link list to **NetworkDeviceFunction** property.| No| Yes
|**NetworkDeviceFunctions**|RedfishCS_Link| Structure link list to **NetworkDeviceFunctions** property.| No| Yes
|**NetworkDeviceFunctionsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **NetworkDeviceFunctions@odata.count** property.| No| No
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No


## OemActions
    typedef struct _RedfishEthernetInterface_V1_8_0_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishEthernetInterface_V1_8_0_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## StatelessAddressAutoConfiguration
    typedef struct _RedfishEthernetInterface_V1_8_0_StatelessAddressAutoConfiguration_CS {
        RedfishCS_bool *IPv4AutoConfigEnabled;
        RedfishCS_bool *IPv6AutoConfigEnabled;
    } RedfishEthernetInterface_V1_8_0_StatelessAddressAutoConfiguration_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**IPv4AutoConfigEnabled**|RedfishCS_bool| Boolean pointer to **IPv4AutoConfigEnabled** property.| No| No
|**IPv6AutoConfigEnabled**|RedfishCS_bool| Boolean pointer to **IPv6AutoConfigEnabled** property.| No| No


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



## EthernetInterface
    typedef struct _RedfishEthernetInterface_V1_8_0_EthernetInterface_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishEthernetInterface_V1_8_0_Actions_CS *Actions;
        RedfishCS_bool *AutoNeg;
        RedfishEthernetInterface_V1_8_0_DHCPv4Configuration_CS *DHCPv4;
        RedfishEthernetInterface_V1_8_0_DHCPv6Configuration_CS *DHCPv6;
        RedfishCS_char *Description;
        RedfishCS_char *EthernetInterfaceType;
        RedfishCS_char *FQDN;
        RedfishCS_bool *FullDuplex;
        RedfishCS_char *HostName;
        RedfishCS_Link IPv4Addresses;
        RedfishCS_Link IPv4StaticAddresses;
        RedfishEthernetInterface_V1_8_0_IPv6AddressPolicyEntry_CS *IPv6AddressPolicyTable;
        RedfishCS_Link IPv6Addresses;
        RedfishCS_char *IPv6DefaultGateway;
        RedfishCS_Link IPv6StaticAddresses;
        RedfishCS_Link IPv6StaticDefaultGateways;
        RedfishCS_char *Id;
        RedfishCS_bool *InterfaceEnabled;
        RedfishCS_char *LinkStatus;
        RedfishEthernetInterface_V1_8_0_Links_CS *Links;
        RedfishCS_char *MACAddress;
        RedfishCS_int64 *MTUSize;
        RedfishCS_int64 *MaxIPv6StaticAddresses;
        RedfishCS_char *Name;
        RedfishCS_char *NameServers;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *PermanentMACAddress;
        RedfishCS_int64 *SpeedMbps;
        RedfishEthernetInterface_V1_8_0_StatelessAddressAutoConfiguration_CS *StatelessAddressAutoConfig;
        RedfishCS_char *StaticNameServers;
        RedfishResource_Status_CS *Status;
        RedfishCS_char *UefiDevicePath;
        RedfishCS_Link VLAN;
        RedfishCS_Link VLANs;
    } RedfishEthernetInterface_V1_8_0_EthernetInterface_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishEthernetInterface_V1_8_0_Actions_CS| Structure points to **Actions** property.| No| No
|**AutoNeg**|RedfishCS_bool| Boolean pointer to **AutoNeg** property.| No| No
|**DHCPv4**|RedfishEthernetInterface_V1_8_0_DHCPv4Configuration_CS| Structure points to **DHCPv4** property.| No| No
|**DHCPv6**|RedfishEthernetInterface_V1_8_0_DHCPv6Configuration_CS| Structure points to **DHCPv6** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**EthernetInterfaceType**|RedfishCS_char| String pointer to **EthernetInterfaceType** property.| No| Yes
|**FQDN**|RedfishCS_char| String pointer to **FQDN** property.| No| No
|**FullDuplex**|RedfishCS_bool| Boolean pointer to **FullDuplex** property.| No| No
|**HostName**|RedfishCS_char| String pointer to **HostName** property.| No| No
|**IPv4Addresses**|RedfishCS_Link| Structure link list to **IPv4Addresses** property.| No| No
|**IPv4StaticAddresses**|RedfishCS_Link| Structure link list to **IPv4StaticAddresses** property.| No| No
|**IPv6AddressPolicyTable**|RedfishEthernetInterface_V1_8_0_IPv6AddressPolicyEntry_CS| Structure points to **IPv6AddressPolicyTable** property.| No| No
|**IPv6Addresses**|RedfishCS_Link| Structure link list to **IPv6Addresses** property.| No| No
|**IPv6DefaultGateway**|RedfishCS_char| String pointer to **IPv6DefaultGateway** property.| No| Yes
|**IPv6StaticAddresses**|RedfishCS_Link| Structure link list to **IPv6StaticAddresses** property.| No| No
|**IPv6StaticDefaultGateways**|RedfishCS_Link| Structure link list to **IPv6StaticDefaultGateways** property.| No| No
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**InterfaceEnabled**|RedfishCS_bool| Boolean pointer to **InterfaceEnabled** property.| No| No
|**LinkStatus**|RedfishCS_char| String pointer to **LinkStatus** property.| No| Yes
|**Links**|RedfishEthernetInterface_V1_8_0_Links_CS| Structure points to **Links** property.| No| No
|**MACAddress**|RedfishCS_char| String pointer to **MACAddress** property.| No| No
|**MTUSize**|RedfishCS_int64| 64-bit long long interger pointer to **MTUSize** property.| No| No
|**MaxIPv6StaticAddresses**|RedfishCS_int64| 64-bit long long interger pointer to **MaxIPv6StaticAddresses** property.| No| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**NameServers**|RedfishCS_char| String pointer to **NameServers** property.| No| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**PermanentMACAddress**|RedfishCS_char| String pointer to **PermanentMACAddress** property.| No| Yes
|**SpeedMbps**|RedfishCS_int64| 64-bit long long interger pointer to **SpeedMbps** property.| No| No
|**StatelessAddressAutoConfig**|RedfishEthernetInterface_V1_8_0_StatelessAddressAutoConfiguration_CS| Structure points to **StatelessAddressAutoConfig** property.| No| No
|**StaticNameServers**|RedfishCS_char| String pointer to **StaticNameServers** property.| No| No
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
|**UefiDevicePath**|RedfishCS_char| String pointer to **UefiDevicePath** property.| No| Yes
|**VLAN**|RedfishCS_Link| Structure link list to **VLAN** property.| No| No
|**VLANs**|RedfishCS_Link| Structure link list to **VLANs** property.| No| Yes
## Redfish EthernetInterface V1_8_0 to C Structure Function
    RedfishCS_status
    Json_EthernetInterface_V1_8_0_To_CS (RedfishCS_char *JsonRawText, RedfishEthernetInterface_V1_8_0_EthernetInterface_CS **ReturnedCS);

## C Structure to Redfish EthernetInterface V1_8_0 JSON Function
    RedfishCS_status
    CS_To_EthernetInterface_V1_8_0_JSON (RedfishEthernetInterface_V1_8_0_EthernetInterface_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish EthernetInterface V1_8_0 C Structure Function
    RedfishCS_status
    DestroyEthernetInterface_V1_8_0_CS (RedfishEthernetInterface_V1_8_0_EthernetInterface_CS *CSPtr);


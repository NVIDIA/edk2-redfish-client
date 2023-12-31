# Definition of NetworkDeviceFunctionMetrics.V1_1_0 and functions<br><br>

## Actions
    typedef struct _RedfishNetworkDeviceFunctionMetrics_V1_1_0_Actions_CS {
        RedfishNetworkDeviceFunctionMetrics_V1_1_0_OemActions_CS *Oem;
    } RedfishNetworkDeviceFunctionMetrics_V1_1_0_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishNetworkDeviceFunctionMetrics_V1_1_0_OemActions_CS| Structure points to **Oem** property.| No| No


## Ethernet
    typedef struct _RedfishNetworkDeviceFunctionMetrics_V1_1_0_Ethernet_CS {
        RedfishCS_int64 *NumOffloadedIPv4Conns;
        RedfishCS_int64 *NumOffloadedIPv6Conns;
    } RedfishNetworkDeviceFunctionMetrics_V1_1_0_Ethernet_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**NumOffloadedIPv4Conns**|RedfishCS_int64| 64-bit long long interger pointer to **NumOffloadedIPv4Conns** property.| No| Yes
|**NumOffloadedIPv6Conns**|RedfishCS_int64| 64-bit long long interger pointer to **NumOffloadedIPv6Conns** property.| No| Yes


## FibreChannel
    typedef struct _RedfishNetworkDeviceFunctionMetrics_V1_1_0_FibreChannel_CS {
        RedfishCS_int64 *PortLoginAccepts;
        RedfishCS_int64 *PortLoginRejects;
        RedfishCS_int64 *PortLoginRequests;
        RedfishCS_int64 *RXCongestionFPINs;
        RedfishCS_int64 *RXDeliveryFPINs;
        RedfishCS_int64 *RXExchanges;
        RedfishCS_int64 *RXLinkIntegrityFPINs;
        RedfishCS_int64 *RXPeerCongestionFPINs;
        RedfishCS_int64 *RXSequences;
        RedfishCS_int64 *TXCongestionFPINs;
        RedfishCS_int64 *TXDeliveryFPINs;
        RedfishCS_int64 *TXExchanges;
        RedfishCS_int64 *TXLinkIntegrityFPINs;
        RedfishCS_int64 *TXPeerCongestionFPINs;
        RedfishCS_int64 *TXSequences;
    } RedfishNetworkDeviceFunctionMetrics_V1_1_0_FibreChannel_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**PortLoginAccepts**|RedfishCS_int64| 64-bit long long interger pointer to **PortLoginAccepts** property.| No| Yes
|**PortLoginRejects**|RedfishCS_int64| 64-bit long long interger pointer to **PortLoginRejects** property.| No| Yes
|**PortLoginRequests**|RedfishCS_int64| 64-bit long long interger pointer to **PortLoginRequests** property.| No| Yes
|**RXCongestionFPINs**|RedfishCS_int64| 64-bit long long interger pointer to **RXCongestionFPINs** property.| No| Yes
|**RXDeliveryFPINs**|RedfishCS_int64| 64-bit long long interger pointer to **RXDeliveryFPINs** property.| No| Yes
|**RXExchanges**|RedfishCS_int64| 64-bit long long interger pointer to **RXExchanges** property.| No| Yes
|**RXLinkIntegrityFPINs**|RedfishCS_int64| 64-bit long long interger pointer to **RXLinkIntegrityFPINs** property.| No| Yes
|**RXPeerCongestionFPINs**|RedfishCS_int64| 64-bit long long interger pointer to **RXPeerCongestionFPINs** property.| No| Yes
|**RXSequences**|RedfishCS_int64| 64-bit long long interger pointer to **RXSequences** property.| No| Yes
|**TXCongestionFPINs**|RedfishCS_int64| 64-bit long long interger pointer to **TXCongestionFPINs** property.| No| Yes
|**TXDeliveryFPINs**|RedfishCS_int64| 64-bit long long interger pointer to **TXDeliveryFPINs** property.| No| Yes
|**TXExchanges**|RedfishCS_int64| 64-bit long long interger pointer to **TXExchanges** property.| No| Yes
|**TXLinkIntegrityFPINs**|RedfishCS_int64| 64-bit long long interger pointer to **TXLinkIntegrityFPINs** property.| No| Yes
|**TXPeerCongestionFPINs**|RedfishCS_int64| 64-bit long long interger pointer to **TXPeerCongestionFPINs** property.| No| Yes
|**TXSequences**|RedfishCS_int64| 64-bit long long interger pointer to **TXSequences** property.| No| Yes


## OemActions
    typedef struct _RedfishNetworkDeviceFunctionMetrics_V1_1_0_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishNetworkDeviceFunctionMetrics_V1_1_0_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## Oem
    typedef struct _RedfishResource_Oem_CS {
        RedfishCS_Link Prop;
    } RedfishResource_Oem_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## NetworkDeviceFunctionMetrics
    typedef struct _RedfishNetworkDeviceFunctionMetrics_V1_1_0_NetworkDeviceFunctionMetrics_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishNetworkDeviceFunctionMetrics_V1_1_0_Actions_CS *Actions;
        RedfishCS_char *Description;
        RedfishNetworkDeviceFunctionMetrics_V1_1_0_Ethernet_CS *Ethernet;
        RedfishNetworkDeviceFunctionMetrics_V1_1_0_FibreChannel_CS *FibreChannel;
        RedfishCS_char *Id;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_int64 *RXAvgQueueDepthPercent;
        RedfishCS_int64 *RXBytes;
        RedfishCS_int64 *RXFrames;
        RedfishCS_int64 *RXMulticastFrames;
        RedfishCS_bool *RXQueuesEmpty;
        RedfishCS_int64 *RXQueuesFull;
        RedfishCS_int64 *RXUnicastFrames;
        RedfishCS_int64 *TXAvgQueueDepthPercent;
        RedfishCS_int64 *TXBytes;
        RedfishCS_int64 *TXFrames;
        RedfishCS_int64 *TXMulticastFrames;
        RedfishCS_bool *TXQueuesEmpty;
        RedfishCS_int64 *TXQueuesFull;
        RedfishCS_int64 *TXUnicastFrames;
    } RedfishNetworkDeviceFunctionMetrics_V1_1_0_NetworkDeviceFunctionMetrics_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishNetworkDeviceFunctionMetrics_V1_1_0_Actions_CS| Structure points to **Actions** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Ethernet**|RedfishNetworkDeviceFunctionMetrics_V1_1_0_Ethernet_CS| Structure points to **Ethernet** property.| No| No
|**FibreChannel**|RedfishNetworkDeviceFunctionMetrics_V1_1_0_FibreChannel_CS| Structure points to **FibreChannel** property.| No| No
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**RXAvgQueueDepthPercent**|RedfishCS_int64| 64-bit long long interger pointer to **RXAvgQueueDepthPercent** property.| No| Yes
|**RXBytes**|RedfishCS_int64| 64-bit long long interger pointer to **RXBytes** property.| No| Yes
|**RXFrames**|RedfishCS_int64| 64-bit long long interger pointer to **RXFrames** property.| No| Yes
|**RXMulticastFrames**|RedfishCS_int64| 64-bit long long interger pointer to **RXMulticastFrames** property.| No| Yes
|**RXQueuesEmpty**|RedfishCS_bool| Boolean pointer to **RXQueuesEmpty** property.| No| Yes
|**RXQueuesFull**|RedfishCS_int64| 64-bit long long interger pointer to **RXQueuesFull** property.| No| Yes
|**RXUnicastFrames**|RedfishCS_int64| 64-bit long long interger pointer to **RXUnicastFrames** property.| No| Yes
|**TXAvgQueueDepthPercent**|RedfishCS_int64| 64-bit long long interger pointer to **TXAvgQueueDepthPercent** property.| No| Yes
|**TXBytes**|RedfishCS_int64| 64-bit long long interger pointer to **TXBytes** property.| No| Yes
|**TXFrames**|RedfishCS_int64| 64-bit long long interger pointer to **TXFrames** property.| No| Yes
|**TXMulticastFrames**|RedfishCS_int64| 64-bit long long interger pointer to **TXMulticastFrames** property.| No| Yes
|**TXQueuesEmpty**|RedfishCS_bool| Boolean pointer to **TXQueuesEmpty** property.| No| Yes
|**TXQueuesFull**|RedfishCS_int64| 64-bit long long interger pointer to **TXQueuesFull** property.| No| Yes
|**TXUnicastFrames**|RedfishCS_int64| 64-bit long long interger pointer to **TXUnicastFrames** property.| No| Yes
## Redfish NetworkDeviceFunctionMetrics V1_1_0 to C Structure Function
    RedfishCS_status
    Json_NetworkDeviceFunctionMetrics_V1_1_0_To_CS (RedfishCS_char *JsonRawText, RedfishNetworkDeviceFunctionMetrics_V1_1_0_NetworkDeviceFunctionMetrics_CS **ReturnedCS);

## C Structure to Redfish NetworkDeviceFunctionMetrics V1_1_0 JSON Function
    RedfishCS_status
    CS_To_NetworkDeviceFunctionMetrics_V1_1_0_JSON (RedfishNetworkDeviceFunctionMetrics_V1_1_0_NetworkDeviceFunctionMetrics_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish NetworkDeviceFunctionMetrics V1_1_0 C Structure Function
    RedfishCS_status
    DestroyNetworkDeviceFunctionMetrics_V1_1_0_CS (RedfishNetworkDeviceFunctionMetrics_V1_1_0_NetworkDeviceFunctionMetrics_CS *CSPtr);


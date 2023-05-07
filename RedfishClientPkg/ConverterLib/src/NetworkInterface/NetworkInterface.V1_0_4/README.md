# Definition of NetworkInterface.V1_0_4 and functions<br><br>

## Links
    typedef struct _RedfishNetworkInterface_V1_0_4_Links_CS {
        RedfishCS_Link NetworkAdapter;
        RedfishResource_Oem_CS *Oem;
    } RedfishNetworkInterface_V1_0_4_Links_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**NetworkAdapter**|RedfishCS_Link| Structure link list to **NetworkAdapter** property.| No| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No


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



## NetworkInterface
    typedef struct _RedfishNetworkInterface_V1_0_4_NetworkInterface_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishCS_char *Description;
        RedfishCS_char *Id;
        RedfishNetworkInterface_V1_0_4_Links_CS *Links;
        RedfishCS_char *Name;
        RedfishCS_Link NetworkDeviceFunctions;
        RedfishCS_Link NetworkPorts;
        RedfishResource_Oem_CS *Oem;
        RedfishResource_Status_CS *Status;
    } RedfishNetworkInterface_V1_0_4_NetworkInterface_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Links**|RedfishNetworkInterface_V1_0_4_Links_CS| Structure points to **Links** property.| No| No
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**NetworkDeviceFunctions**|RedfishCS_Link| Structure link list to **NetworkDeviceFunctions** property.| No| Yes
|**NetworkPorts**|RedfishCS_Link| Structure link list to **NetworkPorts** property.| No| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
## Redfish NetworkInterface V1_0_4 to C Structure Function
    RedfishCS_status
    Json_NetworkInterface_V1_0_4_To_CS (RedfishCS_char *JsonRawText, RedfishNetworkInterface_V1_0_4_NetworkInterface_CS **ReturnedCS);

## C Structure to Redfish NetworkInterface V1_0_4 JSON Function
    RedfishCS_status
    CS_To_NetworkInterface_V1_0_4_JSON (RedfishNetworkInterface_V1_0_4_NetworkInterface_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish NetworkInterface V1_0_4 C Structure Function
    RedfishCS_status
    DestroyNetworkInterface_V1_0_4_CS (RedfishNetworkInterface_V1_0_4_NetworkInterface_CS *CSPtr);


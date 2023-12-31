# Definition of LogEntry.V1_1_7 and functions<br><br>

## Links
    typedef struct _RedfishLogEntry_V1_1_7_Links_CS {
        RedfishResource_Oem_CS *Oem;
        Redfishodatav4_idRef_CS *OriginOfCondition;
    } RedfishLogEntry_V1_1_7_Links_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**OriginOfCondition**|Redfishodatav4_idRef_CS| Structure points to **OriginOfCondition** property.| No| Yes


## Oem
    typedef struct _RedfishResource_Oem_CS {
        RedfishCS_Link Prop;
    } RedfishResource_Oem_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## idRef
    typedef struct _Redfishodatav4_idRef_CS {
        RedfishCS_char *odata_id;
    } Redfishodatav4_idRef_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No


## LogEntry
    typedef struct _RedfishLogEntry_V1_1_7_LogEntry_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishCS_char *Created;
        RedfishCS_char *Description;
        RedfishCS_char *EntryCode;
        RedfishCS_char *EntryType;
        RedfishCS_char *EventId;
        RedfishCS_char *EventTimestamp;
        RedfishCS_char *EventType;
        RedfishCS_char *Id;
        RedfishLogEntry_V1_1_7_Links_CS *Links;
        RedfishCS_char *Message;
        RedfishCS_char *MessageArgs;
        RedfishCS_char *MessageId;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *OemRecordFormat;
        RedfishCS_int64 *SensorNumber;
        RedfishCS_char *SensorType;
        RedfishCS_char *Severity;
    } RedfishLogEntry_V1_1_7_LogEntry_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Created**|RedfishCS_char| String pointer to **Created** property.| No| Yes
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**EntryCode**|RedfishCS_char| String pointer to **EntryCode** property.| No| Yes
|**EntryType**|RedfishCS_char| String pointer to **EntryType** property.| Yes| Yes
|**EventId**|RedfishCS_char| String pointer to **EventId** property.| No| Yes
|**EventTimestamp**|RedfishCS_char| String pointer to **EventTimestamp** property.| No| Yes
|**EventType**|RedfishCS_char| String pointer to **EventType** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Links**|RedfishLogEntry_V1_1_7_Links_CS| Structure points to **Links** property.| No| No
|**Message**|RedfishCS_char| String pointer to **Message** property.| No| Yes
|**MessageArgs**|RedfishCS_char| String pointer to **MessageArgs** property.| No| Yes
|**MessageId**|RedfishCS_char| String pointer to **MessageId** property.| No| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**OemRecordFormat**|RedfishCS_char| String pointer to **OemRecordFormat** property.| No| Yes
|**SensorNumber**|RedfishCS_int64| 64-bit long long interger pointer to **SensorNumber** property.| No| Yes
|**SensorType**|RedfishCS_char| String pointer to **SensorType** property.| No| Yes
|**Severity**|RedfishCS_char| String pointer to **Severity** property.| No| Yes
## Redfish LogEntry V1_1_7 to C Structure Function
    RedfishCS_status
    Json_LogEntry_V1_1_7_To_CS (RedfishCS_char *JsonRawText, RedfishLogEntry_V1_1_7_LogEntry_CS **ReturnedCS);

## C Structure to Redfish LogEntry V1_1_7 JSON Function
    RedfishCS_status
    CS_To_LogEntry_V1_1_7_JSON (RedfishLogEntry_V1_1_7_LogEntry_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish LogEntry V1_1_7 C Structure Function
    RedfishCS_status
    DestroyLogEntry_V1_1_7_CS (RedfishLogEntry_V1_1_7_LogEntry_CS *CSPtr);


# Definition of LogService.V1_1_1 and functions<br><br>

## Actions
    typedef struct _RedfishLogService_V1_1_1_Actions_CS {
        RedfishLogService_V1_1_1_ClearLog_CS *LogService_ClearLog;
        RedfishLogService_V1_1_1_OemActions_CS *Oem;
    } RedfishLogService_V1_1_1_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**LogService_ClearLog**|RedfishLogService_V1_1_1_ClearLog_CS| Structure points to **#LogService.ClearLog** property.| No| No
|**Oem**|RedfishLogService_V1_1_1_OemActions_CS| Structure points to **Oem** property.| No| No


## ClearLog
    typedef struct _RedfishLogService_V1_1_1_ClearLog_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishLogService_V1_1_1_ClearLog_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## OemActions
    typedef struct _RedfishLogService_V1_1_1_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishLogService_V1_1_1_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


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



## LogService
    typedef struct _RedfishLogService_V1_1_1_LogService_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishLogService_V1_1_1_Actions_CS *Actions;
        RedfishCS_char *DateTime;
        RedfishCS_char *DateTimeLocalOffset;
        RedfishCS_char *Description;
        RedfishCS_Link Entries;
        RedfishCS_char *Id;
        RedfishCS_char *LogEntryType;
        RedfishCS_int64 *MaxNumberOfRecords;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *OverWritePolicy;
        RedfishCS_bool *ServiceEnabled;
        RedfishResource_Status_CS *Status;
    } RedfishLogService_V1_1_1_LogService_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishLogService_V1_1_1_Actions_CS| Structure points to **Actions** property.| No| No
|**DateTime**|RedfishCS_char| String pointer to **DateTime** property.| No| No
|**DateTimeLocalOffset**|RedfishCS_char| String pointer to **DateTimeLocalOffset** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Entries**|RedfishCS_Link| Structure link list to **Entries** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**LogEntryType**|RedfishCS_char| String pointer to **LogEntryType** property.| No| Yes
|**MaxNumberOfRecords**|RedfishCS_int64| 64-bit long long interger pointer to **MaxNumberOfRecords** property.| No| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**OverWritePolicy**|RedfishCS_char| String pointer to **OverWritePolicy** property.| No| Yes
|**ServiceEnabled**|RedfishCS_bool| Boolean pointer to **ServiceEnabled** property.| No| No
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
## Redfish LogService V1_1_1 to C Structure Function
    RedfishCS_status
    Json_LogService_V1_1_1_To_CS (RedfishCS_char *JsonRawText, RedfishLogService_V1_1_1_LogService_CS **ReturnedCS);

## C Structure to Redfish LogService V1_1_1 JSON Function
    RedfishCS_status
    CS_To_LogService_V1_1_1_JSON (RedfishLogService_V1_1_1_LogService_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish LogService V1_1_1 C Structure Function
    RedfishCS_status
    DestroyLogService_V1_1_1_CS (RedfishLogService_V1_1_1_LogService_CS *CSPtr);


# Definition of EventService.V1_7_1 and functions<br><br>

## Actions
    typedef struct _RedfishEventService_V1_7_1_Actions_CS {
        RedfishEventService_V1_7_1_SubmitTestEvent_CS *EventService_SubmitTestEvent;
        RedfishEventService_V1_7_1_OemActions_CS *Oem;
    } RedfishEventService_V1_7_1_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**EventService_SubmitTestEvent**|RedfishEventService_V1_7_1_SubmitTestEvent_CS| Structure points to **#EventService.SubmitTestEvent** property.| No| No
|**Oem**|RedfishEventService_V1_7_1_OemActions_CS| Structure points to **Oem** property.| No| No


## OemActions
    typedef struct _RedfishEventService_V1_7_1_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishEventService_V1_7_1_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## SMTP
    typedef struct _RedfishEventService_V1_7_1_SMTP_CS {
        RedfishCS_char *Authentication;
        RedfishCS_char *ConnectionProtocol;
        RedfishCS_char *FromAddress;
        RedfishCS_char *Password;
        RedfishCS_int64 *Port;
        RedfishCS_char *ServerAddress;
        RedfishCS_bool *ServiceEnabled;
        RedfishCS_char *Username;
    } RedfishEventService_V1_7_1_SMTP_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Authentication**|RedfishCS_char| String pointer to **Authentication** property.| No| No
|**ConnectionProtocol**|RedfishCS_char| String pointer to **ConnectionProtocol** property.| No| No
|**FromAddress**|RedfishCS_char| String pointer to **FromAddress** property.| No| No
|**Password**|RedfishCS_char| String pointer to **Password** property.| No| No
|**Port**|RedfishCS_int64| 64-bit long long interger pointer to **Port** property.| No| No
|**ServerAddress**|RedfishCS_char| String pointer to **ServerAddress** property.| No| No
|**ServiceEnabled**|RedfishCS_bool| Boolean pointer to **ServiceEnabled** property.| No| No
|**Username**|RedfishCS_char| String pointer to **Username** property.| No| No


## SSEFilterPropertiesSupported
    typedef struct _RedfishEventService_V1_7_1_SSEFilterPropertiesSupported_CS {
        RedfishCS_bool *EventFormatType;
        RedfishCS_bool *EventType;
        RedfishCS_bool *MessageId;
        RedfishCS_bool *MetricReportDefinition;
        RedfishCS_bool *OriginResource;
        RedfishCS_bool *RegistryPrefix;
        RedfishCS_bool *ResourceType;
        RedfishCS_bool *SubordinateResources;
    } RedfishEventService_V1_7_1_SSEFilterPropertiesSupported_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**EventFormatType**|RedfishCS_bool| Boolean pointer to **EventFormatType** property.| No| Yes
|**EventType**|RedfishCS_bool| Boolean pointer to **EventType** property.| No| Yes
|**MessageId**|RedfishCS_bool| Boolean pointer to **MessageId** property.| No| Yes
|**MetricReportDefinition**|RedfishCS_bool| Boolean pointer to **MetricReportDefinition** property.| No| Yes
|**OriginResource**|RedfishCS_bool| Boolean pointer to **OriginResource** property.| No| Yes
|**RegistryPrefix**|RedfishCS_bool| Boolean pointer to **RegistryPrefix** property.| No| Yes
|**ResourceType**|RedfishCS_bool| Boolean pointer to **ResourceType** property.| No| Yes
|**SubordinateResources**|RedfishCS_bool| Boolean pointer to **SubordinateResources** property.| No| Yes


## SubmitTestEvent
    typedef struct _RedfishEventService_V1_7_1_SubmitTestEvent_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishEventService_V1_7_1_SubmitTestEvent_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


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



## EventService
    typedef struct _RedfishEventService_V1_7_1_EventService_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishEventService_V1_7_1_Actions_CS *Actions;
        RedfishCS_int64 *DeliveryRetryAttempts;
        RedfishCS_int64 *DeliveryRetryIntervalSeconds;
        RedfishCS_char *Description;
        RedfishCS_char *EventFormatTypes;
        RedfishCS_char *EventTypesForSubscription;
        RedfishCS_char *Id;
        RedfishCS_bool *IncludeOriginOfConditionSupported;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *RegistryPrefixes;
        RedfishCS_char *ResourceTypes;
        RedfishEventService_V1_7_1_SMTP_CS *SMTP;
        RedfishEventService_V1_7_1_SSEFilterPropertiesSupported_CS *SSEFilterPropertiesSupported;
        RedfishCS_char *ServerSentEventUri;
        RedfishCS_bool *ServiceEnabled;
        RedfishResource_Status_CS *Status;
        RedfishCS_bool *SubordinateResourcesSupported;
        RedfishCS_Link Subscriptions;
    } RedfishEventService_V1_7_1_EventService_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishEventService_V1_7_1_Actions_CS| Structure points to **Actions** property.| No| No
|**DeliveryRetryAttempts**|RedfishCS_int64| 64-bit long long interger pointer to **DeliveryRetryAttempts** property.| No| No
|**DeliveryRetryIntervalSeconds**|RedfishCS_int64| 64-bit long long interger pointer to **DeliveryRetryIntervalSeconds** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**EventFormatTypes**|RedfishCS_char| String pointer to **EventFormatTypes** property.| No| Yes
|**EventTypesForSubscription**|RedfishCS_char| String pointer to **EventTypesForSubscription** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**IncludeOriginOfConditionSupported**|RedfishCS_bool| Boolean pointer to **IncludeOriginOfConditionSupported** property.| No| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**RegistryPrefixes**|RedfishCS_char| String pointer to **RegistryPrefixes** property.| No| Yes
|**ResourceTypes**|RedfishCS_char| String pointer to **ResourceTypes** property.| No| Yes
|**SMTP**|RedfishEventService_V1_7_1_SMTP_CS| Structure points to **SMTP** property.| No| No
|**SSEFilterPropertiesSupported**|RedfishEventService_V1_7_1_SSEFilterPropertiesSupported_CS| Structure points to **SSEFilterPropertiesSupported** property.| No| No
|**ServerSentEventUri**|RedfishCS_char| String pointer to **ServerSentEventUri** property.| No| Yes
|**ServiceEnabled**|RedfishCS_bool| Boolean pointer to **ServiceEnabled** property.| No| No
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
|**SubordinateResourcesSupported**|RedfishCS_bool| Boolean pointer to **SubordinateResourcesSupported** property.| No| Yes
|**Subscriptions**|RedfishCS_Link| Structure link list to **Subscriptions** property.| No| Yes
## Redfish EventService V1_7_1 to C Structure Function
    RedfishCS_status
    Json_EventService_V1_7_1_To_CS (RedfishCS_char *JsonRawText, RedfishEventService_V1_7_1_EventService_CS **ReturnedCS);

## C Structure to Redfish EventService V1_7_1 JSON Function
    RedfishCS_status
    CS_To_EventService_V1_7_1_JSON (RedfishEventService_V1_7_1_EventService_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish EventService V1_7_1 C Structure Function
    RedfishCS_status
    DestroyEventService_V1_7_1_CS (RedfishEventService_V1_7_1_EventService_CS *CSPtr);


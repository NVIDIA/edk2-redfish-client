# Definition of EventDestination.V1_5_1 and functions<br><br>

## Actions
    typedef struct _RedfishEventDestination_V1_5_1_Actions_CS {
        RedfishEventDestination_V1_5_1_ResumeSubscription_CS *EventDestination_ResumeSubscription;
        RedfishEventDestination_V1_5_1_OemActions_CS *Oem;
    } RedfishEventDestination_V1_5_1_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**EventDestination_ResumeSubscription**|RedfishEventDestination_V1_5_1_ResumeSubscription_CS| Structure points to **#EventDestination.ResumeSubscription** property.| No| No
|**Oem**|RedfishEventDestination_V1_5_1_OemActions_CS| Structure points to **Oem** property.| No| No


## HttpHeaderProperty
    typedef struct _RedfishEventDestination_V1_5_1_HttpHeaderProperty_CS {
        RedfishCS_Link Prop;
    } RedfishEventDestination_V1_5_1_HttpHeaderProperty_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## OemActions
    typedef struct _RedfishEventDestination_V1_5_1_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishEventDestination_V1_5_1_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## ResumeSubscription
    typedef struct _RedfishEventDestination_V1_5_1_ResumeSubscription_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishEventDestination_V1_5_1_ResumeSubscription_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


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


## EventDestination
    typedef struct _RedfishEventDestination_V1_5_1_EventDestination_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishEventDestination_V1_5_1_Actions_CS *Actions;
        RedfishCS_char *Context;
        RedfishCS_char *Description;
        RedfishCS_char *Destination;
        RedfishCS_char *EventFormatType;
        RedfishCS_char *EventTypes;
        RedfishEventDestination_V1_5_1_HttpHeaderProperty_CS *HttpHeaders;
        RedfishCS_char *Id;
        RedfishCS_char *MessageIds;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        Redfishodatav4_idRef_CS *OriginResources;
        RedfishCS_int64 *OriginResourcesodata_count;
        RedfishCS_char *Protocol;
        RedfishCS_char *RegistryPrefixes;
        RedfishCS_char *ResourceTypes;
        RedfishCS_bool *SubordinateResources;
        RedfishCS_char *SubscriptionType;
    } RedfishEventDestination_V1_5_1_EventDestination_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishEventDestination_V1_5_1_Actions_CS| Structure points to **Actions** property.| No| No
|**Context**|RedfishCS_char| String pointer to **Context** property.| Yes| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Destination**|RedfishCS_char| String pointer to **Destination** property.| No| Yes
|**EventFormatType**|RedfishCS_char| String pointer to **EventFormatType** property.| No| Yes
|**EventTypes**|RedfishCS_char| String pointer to **EventTypes** property.| No| Yes
|**HttpHeaders**|RedfishEventDestination_V1_5_1_HttpHeaderProperty_CS| Structure points to **HttpHeaders** property.| No| No
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**MessageIds**|RedfishCS_char| String pointer to **MessageIds** property.| No| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**OriginResources**|Redfishodatav4_idRef_CS| Structure points to **OriginResources** property.| No| Yes
|**OriginResourcesodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **OriginResources@odata.count** property.| No| No
|**Protocol**|RedfishCS_char| String pointer to **Protocol** property.| No| Yes
|**RegistryPrefixes**|RedfishCS_char| String pointer to **RegistryPrefixes** property.| No| Yes
|**ResourceTypes**|RedfishCS_char| String pointer to **ResourceTypes** property.| No| Yes
|**SubordinateResources**|RedfishCS_bool| Boolean pointer to **SubordinateResources** property.| No| Yes
|**SubscriptionType**|RedfishCS_char| String pointer to **SubscriptionType** property.| Yes| Yes
## Redfish EventDestination V1_5_1 to C Structure Function
    RedfishCS_status
    Json_EventDestination_V1_5_1_To_CS (RedfishCS_char *JsonRawText, RedfishEventDestination_V1_5_1_EventDestination_CS **ReturnedCS);

## C Structure to Redfish EventDestination V1_5_1 JSON Function
    RedfishCS_status
    CS_To_EventDestination_V1_5_1_JSON (RedfishEventDestination_V1_5_1_EventDestination_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish EventDestination V1_5_1 C Structure Function
    RedfishCS_status
    DestroyEventDestination_V1_5_1_CS (RedfishEventDestination_V1_5_1_EventDestination_CS *CSPtr);


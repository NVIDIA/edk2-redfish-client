# Definition of Zone.V1_5_1 and functions<br><br>

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


## Actions
    typedef struct _RedfishZone_V1_5_1_Actions_CS {
        RedfishZone_V1_5_1_AddEndpoint_CS *Zone_AddEndpoint;
        RedfishZone_V1_5_1_RemoveEndpoint_CS *Zone_RemoveEndpoint;
        RedfishZone_V1_5_1_OemActions_CS *Oem;
    } RedfishZone_V1_5_1_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Zone_AddEndpoint**|RedfishZone_V1_5_1_AddEndpoint_CS| Structure points to **#Zone.AddEndpoint** property.| No| No
|**Zone_RemoveEndpoint**|RedfishZone_V1_5_1_RemoveEndpoint_CS| Structure points to **#Zone.RemoveEndpoint** property.| No| No
|**Oem**|RedfishZone_V1_5_1_OemActions_CS| Structure points to **Oem** property.| No| No


## AddEndpoint
    typedef struct _RedfishZone_V1_5_1_AddEndpoint_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishZone_V1_5_1_AddEndpoint_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## Links
    typedef struct _RedfishZone_V1_5_1_Links_CS {
        RedfishCS_Link AddressPools;
        RedfishCS_int64 *AddressPoolsodata_count;
        RedfishCS_Link ContainedByZones;
        RedfishCS_int64 *ContainedByZonesodata_count;
        RedfishCS_Link ContainsZones;
        RedfishCS_int64 *ContainsZonesodata_count;
        RedfishCS_Link Endpoints;
        RedfishCS_int64 *Endpointsodata_count;
        RedfishCS_Link InvolvedSwitches;
        RedfishCS_int64 *InvolvedSwitchesodata_count;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_Link ResourceBlocks;
        RedfishCS_int64 *ResourceBlocksodata_count;
    } RedfishZone_V1_5_1_Links_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**AddressPools**|RedfishCS_Link| Structure link list to **AddressPools** property.| No| Yes
|**AddressPoolsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **AddressPools@odata.count** property.| No| No
|**ContainedByZones**|RedfishCS_Link| Structure link list to **ContainedByZones** property.| No| Yes
|**ContainedByZonesodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **ContainedByZones@odata.count** property.| No| No
|**ContainsZones**|RedfishCS_Link| Structure link list to **ContainsZones** property.| No| No
|**ContainsZonesodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **ContainsZones@odata.count** property.| No| No
|**Endpoints**|RedfishCS_Link| Structure link list to **Endpoints** property.| No| Yes
|**Endpointsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **Endpoints@odata.count** property.| No| No
|**InvolvedSwitches**|RedfishCS_Link| Structure link list to **InvolvedSwitches** property.| No| Yes
|**InvolvedSwitchesodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **InvolvedSwitches@odata.count** property.| No| No
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**ResourceBlocks**|RedfishCS_Link| Structure link list to **ResourceBlocks** property.| No| Yes
|**ResourceBlocksodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **ResourceBlocks@odata.count** property.| No| No


## OemActions
    typedef struct _RedfishZone_V1_5_1_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishZone_V1_5_1_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## RemoveEndpoint
    typedef struct _RedfishZone_V1_5_1_RemoveEndpoint_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishZone_V1_5_1_RemoveEndpoint_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


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



## Zone
    typedef struct _RedfishZone_V1_5_1_Zone_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishZone_V1_5_1_Actions_CS *Actions;
        RedfishCS_bool *DefaultRoutingEnabled;
        RedfishCS_char *Description;
        RedfishCS_char *ExternalAccessibility;
        RedfishCS_char *Id;
        RedfishCS_Link Identifiers;
        RedfishZone_V1_5_1_Links_CS *Links;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishResource_Status_CS *Status;
        RedfishCS_char *ZoneType;
    } RedfishZone_V1_5_1_Zone_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishZone_V1_5_1_Actions_CS| Structure points to **Actions** property.| No| No
|**DefaultRoutingEnabled**|RedfishCS_bool| Boolean pointer to **DefaultRoutingEnabled** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**ExternalAccessibility**|RedfishCS_char| String pointer to **ExternalAccessibility** property.| No| No
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Identifiers**|RedfishCS_Link| Structure link list to **Identifiers** property.| No| No
|**Links**|RedfishZone_V1_5_1_Links_CS| Structure points to **Links** property.| No| No
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
|**ZoneType**|RedfishCS_char| String pointer to **ZoneType** property.| No| No
## Redfish Zone V1_5_1 to C Structure Function
    RedfishCS_status
    Json_Zone_V1_5_1_To_CS (RedfishCS_char *JsonRawText, RedfishZone_V1_5_1_Zone_CS **ReturnedCS);

## C Structure to Redfish Zone V1_5_1 JSON Function
    RedfishCS_status
    CS_To_Zone_V1_5_1_JSON (RedfishZone_V1_5_1_Zone_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish Zone V1_5_1 C Structure Function
    RedfishCS_status
    DestroyZone_V1_5_1_CS (RedfishZone_V1_5_1_Zone_CS *CSPtr);


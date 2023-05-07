# Definition of MemoryChunks.V1_2_1 and functions<br><br>

## Actions
    typedef struct _RedfishMemoryChunks_V1_2_1_Actions_CS {
        RedfishMemoryChunks_V1_2_1_OemActions_CS *Oem;
    } RedfishMemoryChunks_V1_2_1_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishMemoryChunks_V1_2_1_OemActions_CS| Structure points to **Oem** property.| No| No


## InterleaveSet
    typedef struct _RedfishMemoryChunks_V1_2_1_InterleaveSet_CS {
        Redfishodata_V4_0_2_idRef_CS *Memory;
        RedfishCS_int64 *MemoryLevel;
        RedfishCS_int64 *OffsetMiB;
        RedfishCS_char *RegionId;
        RedfishCS_int64 *SizeMiB;
    } RedfishMemoryChunks_V1_2_1_InterleaveSet_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Memory**|Redfishodata_V4_0_2_idRef_CS| Structure points to **Memory** property.| No| Yes
|**MemoryLevel**|RedfishCS_int64| 64-bit long long interger pointer to **MemoryLevel** property.| No| Yes
|**OffsetMiB**|RedfishCS_int64| 64-bit long long interger pointer to **OffsetMiB** property.| No| Yes
|**RegionId**|RedfishCS_char| String pointer to **RegionId** property.| No| Yes
|**SizeMiB**|RedfishCS_int64| 64-bit long long interger pointer to **SizeMiB** property.| No| Yes


## OemActions
    typedef struct _RedfishMemoryChunks_V1_2_1_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishMemoryChunks_V1_2_1_OemActions_CS;

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
    typedef struct _Redfishodata_V4_0_2_idRef_CS {
        RedfishCS_char *odata_id;
    } Redfishodata_V4_0_2_idRef_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| No| No


## idRef
    typedef struct _Redfishodatav4_idRef_CS {
        RedfishCS_char *odata_id;
    } Redfishodatav4_idRef_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| No| No


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



## MemoryChunks
    typedef struct _RedfishMemoryChunks_V1_2_1_MemoryChunks_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishMemoryChunks_V1_2_1_Actions_CS *Actions;
        RedfishCS_char *AddressRangeType;
        RedfishCS_char *Description;
        RedfishCS_char *Id;
        RedfishMemoryChunks_V1_2_1_InterleaveSet_CS *InterleaveSets;
        RedfishCS_bool *IsMirrorEnabled;
        RedfishCS_bool *IsSpare;
        RedfishCS_int64 *MemoryChunkSizeMiB;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishResource_Status_CS *Status;
    } RedfishMemoryChunks_V1_2_1_MemoryChunks_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| No| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| No| No
|**Actions**|RedfishMemoryChunks_V1_2_1_Actions_CS| Structure points to **Actions** property.| No| No
|**AddressRangeType**|RedfishCS_char| String pointer to **AddressRangeType** property.| No| Yes
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**InterleaveSets**|RedfishMemoryChunks_V1_2_1_InterleaveSet_CS| Structure points to **InterleaveSets** property.| No| No
|**IsMirrorEnabled**|RedfishCS_bool| Boolean pointer to **IsMirrorEnabled** property.| No| Yes
|**IsSpare**|RedfishCS_bool| Boolean pointer to **IsSpare** property.| No| Yes
|**MemoryChunkSizeMiB**|RedfishCS_int64| 64-bit long long interger pointer to **MemoryChunkSizeMiB** property.| No| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
## Redfish MemoryChunks V1_2_1 to C Structure Function
    RedfishCS_status
    Json_MemoryChunks_V1_2_1_To_CS (RedfishCS_char *JsonRawText, RedfishMemoryChunks_V1_2_1_MemoryChunks_CS **ReturnedCS);

## C Structure to Redfish MemoryChunks V1_2_1 JSON Function
    RedfishCS_status
    CS_To_MemoryChunks_V1_2_1_JSON (RedfishMemoryChunks_V1_2_1_MemoryChunks_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish MemoryChunks V1_2_1 C Structure Function
    RedfishCS_status
    DestroyMemoryChunks_V1_2_1_CS (RedfishMemoryChunks_V1_2_1_MemoryChunks_CS *CSPtr);


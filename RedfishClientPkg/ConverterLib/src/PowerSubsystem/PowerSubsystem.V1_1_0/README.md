# Definition of PowerSubsystem.V1_1_0 and functions<br><br>

## Actions
    typedef struct _RedfishPowerSubsystem_V1_1_0_Actions_CS {
        RedfishPowerSubsystem_V1_1_0_OemActions_CS *Oem;
    } RedfishPowerSubsystem_V1_1_0_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishPowerSubsystem_V1_1_0_OemActions_CS| Structure points to **Oem** property.| No| No


## OemActions
    typedef struct _RedfishPowerSubsystem_V1_1_0_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishPowerSubsystem_V1_1_0_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## PowerAllocation
    typedef struct _RedfishPowerSubsystem_V1_1_0_PowerAllocation_CS {
        RedfishCS_int64 *AllocatedWatts;
        RedfishCS_int64 *RequestedWatts;
    } RedfishPowerSubsystem_V1_1_0_PowerAllocation_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**AllocatedWatts**|RedfishCS_int64| 64-bit long long interger pointer to **AllocatedWatts** property.| No| Yes
|**RequestedWatts**|RedfishCS_int64| 64-bit long long interger pointer to **RequestedWatts** property.| No| Yes


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



## PowerSubsystem
    typedef struct _RedfishPowerSubsystem_V1_1_0_PowerSubsystem_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishPowerSubsystem_V1_1_0_Actions_CS *Actions;
        RedfishPowerSubsystem_V1_1_0_PowerAllocation_CS *Allocation;
        RedfishCS_Link Batteries;
        RedfishCS_int64 *CapacityWatts;
        RedfishCS_char *Description;
        RedfishCS_char *Id;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_Link PowerSupplies;
        RedfishCS_Link PowerSupplyRedundancy;
        RedfishResource_Status_CS *Status;
    } RedfishPowerSubsystem_V1_1_0_PowerSubsystem_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishPowerSubsystem_V1_1_0_Actions_CS| Structure points to **Actions** property.| No| No
|**Allocation**|RedfishPowerSubsystem_V1_1_0_PowerAllocation_CS| Structure points to **Allocation** property.| No| No
|**Batteries**|RedfishCS_Link| Structure link list to **Batteries** property.| No| Yes
|**CapacityWatts**|RedfishCS_int64| 64-bit long long interger pointer to **CapacityWatts** property.| No| Yes
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**PowerSupplies**|RedfishCS_Link| Structure link list to **PowerSupplies** property.| No| Yes
|**PowerSupplyRedundancy**|RedfishCS_Link| Structure link list to **PowerSupplyRedundancy** property.| No| No
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
## Redfish PowerSubsystem V1_1_0 to C Structure Function
    RedfishCS_status
    Json_PowerSubsystem_V1_1_0_To_CS (RedfishCS_char *JsonRawText, RedfishPowerSubsystem_V1_1_0_PowerSubsystem_CS **ReturnedCS);

## C Structure to Redfish PowerSubsystem V1_1_0 JSON Function
    RedfishCS_status
    CS_To_PowerSubsystem_V1_1_0_JSON (RedfishPowerSubsystem_V1_1_0_PowerSubsystem_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish PowerSubsystem V1_1_0 C Structure Function
    RedfishCS_status
    DestroyPowerSubsystem_V1_1_0_CS (RedfishPowerSubsystem_V1_1_0_PowerSubsystem_CS *CSPtr);


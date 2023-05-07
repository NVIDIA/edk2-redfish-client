# Definition of PowerEquipment.V1_2_0 and functions<br><br>

## Actions
    typedef struct _RedfishPowerEquipment_V1_2_0_Actions_CS {
        RedfishPowerEquipment_V1_2_0_OemActions_CS *Oem;
    } RedfishPowerEquipment_V1_2_0_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishPowerEquipment_V1_2_0_OemActions_CS| Structure points to **Oem** property.| No| No


## Links
    typedef struct _RedfishPowerEquipment_V1_2_0_Links_CS {
        RedfishCS_Link ManagedBy;
        RedfishCS_int64 *ManagedByodata_count;
        RedfishResource_Oem_CS *Oem;
    } RedfishPowerEquipment_V1_2_0_Links_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**ManagedBy**|RedfishCS_Link| Structure link list to **ManagedBy** property.| No| Yes
|**ManagedByodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **ManagedBy@odata.count** property.| No| No
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No


## OemActions
    typedef struct _RedfishPowerEquipment_V1_2_0_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishPowerEquipment_V1_2_0_OemActions_CS;

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



## PowerEquipment
    typedef struct _RedfishPowerEquipment_V1_2_0_PowerEquipment_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishPowerEquipment_V1_2_0_Actions_CS *Actions;
        RedfishCS_char *Description;
        RedfishCS_Link ElectricalBuses;
        RedfishCS_Link FloorPDUs;
        RedfishCS_char *Id;
        RedfishPowerEquipment_V1_2_0_Links_CS *Links;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_Link PowerShelves;
        RedfishCS_Link RackPDUs;
        RedfishResource_Status_CS *Status;
        RedfishCS_Link Switchgear;
        RedfishCS_Link TransferSwitches;
    } RedfishPowerEquipment_V1_2_0_PowerEquipment_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishPowerEquipment_V1_2_0_Actions_CS| Structure points to **Actions** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**ElectricalBuses**|RedfishCS_Link| Structure link list to **ElectricalBuses** property.| No| Yes
|**FloorPDUs**|RedfishCS_Link| Structure link list to **FloorPDUs** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Links**|RedfishPowerEquipment_V1_2_0_Links_CS| Structure points to **Links** property.| No| No
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**PowerShelves**|RedfishCS_Link| Structure link list to **PowerShelves** property.| No| Yes
|**RackPDUs**|RedfishCS_Link| Structure link list to **RackPDUs** property.| No| Yes
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
|**Switchgear**|RedfishCS_Link| Structure link list to **Switchgear** property.| No| Yes
|**TransferSwitches**|RedfishCS_Link| Structure link list to **TransferSwitches** property.| No| Yes
## Redfish PowerEquipment V1_2_0 to C Structure Function
    RedfishCS_status
    Json_PowerEquipment_V1_2_0_To_CS (RedfishCS_char *JsonRawText, RedfishPowerEquipment_V1_2_0_PowerEquipment_CS **ReturnedCS);

## C Structure to Redfish PowerEquipment V1_2_0 JSON Function
    RedfishCS_status
    CS_To_PowerEquipment_V1_2_0_JSON (RedfishPowerEquipment_V1_2_0_PowerEquipment_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish PowerEquipment V1_2_0 C Structure Function
    RedfishCS_status
    DestroyPowerEquipment_V1_2_0_CS (RedfishPowerEquipment_V1_2_0_PowerEquipment_CS *CSPtr);


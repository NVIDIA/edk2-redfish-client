# Definition of BatteryMetrics.V1_0_1 and functions<br><br>

## Actions
    typedef struct _RedfishBatteryMetrics_V1_0_1_Actions_CS {
        RedfishBatteryMetrics_V1_0_1_OemActions_CS *Oem;
    } RedfishBatteryMetrics_V1_0_1_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishBatteryMetrics_V1_0_1_OemActions_CS| Structure points to **Oem** property.| No| No


## OemActions
    typedef struct _RedfishBatteryMetrics_V1_0_1_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishBatteryMetrics_V1_0_1_OemActions_CS;

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



## BatteryMetrics
    typedef struct _RedfishBatteryMetrics_V1_0_1_BatteryMetrics_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishBatteryMetrics_V1_0_1_Actions_CS *Actions;
        RedfishCS_Link CellVoltages;
        RedfishCS_int64 *CellVoltagesodata_count;
        RedfishCS_Link ChargePercent;
        RedfishCS_char *Description;
        RedfishCS_int64 *DischargeCycles;
        RedfishCS_char *Id;
        RedfishCS_Link InputCurrentAmps;
        RedfishCS_Link InputVoltage;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_Link OutputCurrentAmps;
        RedfishCS_int64 *OutputCurrentAmpsodata_count;
        RedfishCS_Link OutputVoltages;
        RedfishCS_int64 *OutputVoltagesodata_count;
        RedfishResource_Status_CS *Status;
        RedfishCS_Link StoredChargeAmpHours;
        RedfishCS_Link StoredEnergyWattHours;
        RedfishCS_Link TemperatureCelsius;
    } RedfishBatteryMetrics_V1_0_1_BatteryMetrics_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishBatteryMetrics_V1_0_1_Actions_CS| Structure points to **Actions** property.| No| No
|**CellVoltages**|RedfishCS_Link| Structure link list to **CellVoltages** property.| No| No
|**CellVoltagesodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **CellVoltages@odata.count** property.| No| No
|**ChargePercent**|RedfishCS_Link| Structure link list to **ChargePercent** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**DischargeCycles**|RedfishCS_int64| 64-bit long long interger pointer to **DischargeCycles** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**InputCurrentAmps**|RedfishCS_Link| Structure link list to **InputCurrentAmps** property.| No| No
|**InputVoltage**|RedfishCS_Link| Structure link list to **InputVoltage** property.| No| No
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**OutputCurrentAmps**|RedfishCS_Link| Structure link list to **OutputCurrentAmps** property.| No| No
|**OutputCurrentAmpsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **OutputCurrentAmps@odata.count** property.| No| No
|**OutputVoltages**|RedfishCS_Link| Structure link list to **OutputVoltages** property.| No| No
|**OutputVoltagesodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **OutputVoltages@odata.count** property.| No| No
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
|**StoredChargeAmpHours**|RedfishCS_Link| Structure link list to **StoredChargeAmpHours** property.| No| No
|**StoredEnergyWattHours**|RedfishCS_Link| Structure link list to **StoredEnergyWattHours** property.| No| No
|**TemperatureCelsius**|RedfishCS_Link| Structure link list to **TemperatureCelsius** property.| No| No
## Redfish BatteryMetrics V1_0_1 to C Structure Function
    RedfishCS_status
    Json_BatteryMetrics_V1_0_1_To_CS (RedfishCS_char *JsonRawText, RedfishBatteryMetrics_V1_0_1_BatteryMetrics_CS **ReturnedCS);

## C Structure to Redfish BatteryMetrics V1_0_1 JSON Function
    RedfishCS_status
    CS_To_BatteryMetrics_V1_0_1_JSON (RedfishBatteryMetrics_V1_0_1_BatteryMetrics_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish BatteryMetrics V1_0_1 C Structure Function
    RedfishCS_status
    DestroyBatteryMetrics_V1_0_1_CS (RedfishBatteryMetrics_V1_0_1_BatteryMetrics_CS *CSPtr);


# Definition of PowerDistributionMetrics.V1_3_0 and functions<br><br>

## Actions
    typedef struct _RedfishPowerDistributionMetrics_V1_3_0_Actions_CS {
        RedfishPowerDistributionMetrics_V1_3_0_ResetMetrics_CS *PowerDistributionMetrics_ResetMetrics;
        RedfishPowerDistributionMetrics_V1_3_0_OemActions_CS *Oem;
    } RedfishPowerDistributionMetrics_V1_3_0_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**PowerDistributionMetrics_ResetMetrics**|RedfishPowerDistributionMetrics_V1_3_0_ResetMetrics_CS| Structure points to **#PowerDistributionMetrics.ResetMetrics** property.| No| No
|**Oem**|RedfishPowerDistributionMetrics_V1_3_0_OemActions_CS| Structure points to **Oem** property.| No| No


## OemActions
    typedef struct _RedfishPowerDistributionMetrics_V1_3_0_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishPowerDistributionMetrics_V1_3_0_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## ResetMetrics
    typedef struct _RedfishPowerDistributionMetrics_V1_3_0_ResetMetrics_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishPowerDistributionMetrics_V1_3_0_ResetMetrics_CS;

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


## PowerDistributionMetrics
    typedef struct _RedfishPowerDistributionMetrics_V1_3_0_PowerDistributionMetrics_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishCS_Link AbsoluteHumidity;
        RedfishPowerDistributionMetrics_V1_3_0_Actions_CS *Actions;
        RedfishCS_char *Description;
        RedfishCS_Link EnergykWh;
        RedfishCS_Link HumidityPercent;
        RedfishCS_char *Id;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_Link PowerLoadPercent;
        RedfishCS_Link PowerWatts;
        RedfishCS_Link TemperatureCelsius;
    } RedfishPowerDistributionMetrics_V1_3_0_PowerDistributionMetrics_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**AbsoluteHumidity**|RedfishCS_Link| Structure link list to **AbsoluteHumidity** property.| No| No
|**Actions**|RedfishPowerDistributionMetrics_V1_3_0_Actions_CS| Structure points to **Actions** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**EnergykWh**|RedfishCS_Link| Structure link list to **EnergykWh** property.| No| No
|**HumidityPercent**|RedfishCS_Link| Structure link list to **HumidityPercent** property.| No| No
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**PowerLoadPercent**|RedfishCS_Link| Structure link list to **PowerLoadPercent** property.| No| No
|**PowerWatts**|RedfishCS_Link| Structure link list to **PowerWatts** property.| No| No
|**TemperatureCelsius**|RedfishCS_Link| Structure link list to **TemperatureCelsius** property.| No| No
## Redfish PowerDistributionMetrics V1_3_0 to C Structure Function
    RedfishCS_status
    Json_PowerDistributionMetrics_V1_3_0_To_CS (RedfishCS_char *JsonRawText, RedfishPowerDistributionMetrics_V1_3_0_PowerDistributionMetrics_CS **ReturnedCS);

## C Structure to Redfish PowerDistributionMetrics V1_3_0 JSON Function
    RedfishCS_status
    CS_To_PowerDistributionMetrics_V1_3_0_JSON (RedfishPowerDistributionMetrics_V1_3_0_PowerDistributionMetrics_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish PowerDistributionMetrics V1_3_0 C Structure Function
    RedfishCS_status
    DestroyPowerDistributionMetrics_V1_3_0_CS (RedfishPowerDistributionMetrics_V1_3_0_PowerDistributionMetrics_CS *CSPtr);


# Definition of Session.V1_1_2 and functions<br><br>

## Oem
    typedef struct _RedfishResource_Oem_CS {
        RedfishCS_Link Prop;
    } RedfishResource_Oem_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## Actions
    typedef struct _RedfishSession_V1_1_2_Actions_CS {
        RedfishSession_V1_1_2_OemActions_CS *Oem;
    } RedfishSession_V1_1_2_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishSession_V1_1_2_OemActions_CS| Structure points to **Oem** property.| No| No


## OemActions
    typedef struct _RedfishSession_V1_1_2_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishSession_V1_1_2_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## Session
    typedef struct _RedfishSession_V1_1_2_Session_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishSession_V1_1_2_Actions_CS *Actions;
        RedfishCS_char *Description;
        RedfishCS_char *Id;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *Password;
        RedfishCS_char *UserName;
    } RedfishSession_V1_1_2_Session_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishSession_V1_1_2_Actions_CS| Structure points to **Actions** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**Password**|RedfishCS_char| String pointer to **Password** property.| No| Yes
|**UserName**|RedfishCS_char| String pointer to **UserName** property.| No| Yes
## Redfish Session V1_1_2 to C Structure Function
    RedfishCS_status
    Json_Session_V1_1_2_To_CS (RedfishCS_char *JsonRawText, RedfishSession_V1_1_2_Session_CS **ReturnedCS);

## C Structure to Redfish Session V1_1_2 JSON Function
    RedfishCS_status
    CS_To_Session_V1_1_2_JSON (RedfishSession_V1_1_2_Session_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish Session V1_1_2 C Structure Function
    RedfishCS_status
    DestroySession_V1_1_2_CS (RedfishSession_V1_1_2_Session_CS *CSPtr);


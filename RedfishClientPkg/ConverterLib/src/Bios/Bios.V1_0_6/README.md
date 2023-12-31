# Definition of Bios.V1_0_6 and functions<br><br>

## Actions
    typedef struct _RedfishBios_V1_0_6_Actions_CS {
        RedfishBios_V1_0_6_ChangePassword_CS *Bios_ChangePassword;
        RedfishBios_V1_0_6_ResetBios_CS *Bios_ResetBios;
        RedfishBios_V1_0_6_OemActions_CS *Oem;
    } RedfishBios_V1_0_6_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Bios_ChangePassword**|RedfishBios_V1_0_6_ChangePassword_CS| Structure points to **#Bios.ChangePassword** property.| No| No
|**Bios_ResetBios**|RedfishBios_V1_0_6_ResetBios_CS| Structure points to **#Bios.ResetBios** property.| No| No
|**Oem**|RedfishBios_V1_0_6_OemActions_CS| Structure points to **Oem** property.| No| No


## Attributes
    typedef struct _RedfishBios_V1_0_6_Attributes_CS {
        RedfishCS_Link Prop;
    } RedfishBios_V1_0_6_Attributes_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## ChangePassword
    typedef struct _RedfishBios_V1_0_6_ChangePassword_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishBios_V1_0_6_ChangePassword_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## OemActions
    typedef struct _RedfishBios_V1_0_6_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishBios_V1_0_6_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## ResetBios
    typedef struct _RedfishBios_V1_0_6_ResetBios_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishBios_V1_0_6_ResetBios_CS;

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


## Bios
    typedef struct _RedfishBios_V1_0_6_Bios_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishBios_V1_0_6_Actions_CS *Actions;
        RedfishCS_char *AttributeRegistry;
        RedfishBios_V1_0_6_Attributes_CS *Attributes;
        RedfishCS_char *Description;
        RedfishCS_char *Id;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
    } RedfishBios_V1_0_6_Bios_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishBios_V1_0_6_Actions_CS| Structure points to **Actions** property.| No| No
|**AttributeRegistry**|RedfishCS_char| String pointer to **AttributeRegistry** property.| No| Yes
|**Attributes**|RedfishBios_V1_0_6_Attributes_CS| Structure points to **Attributes** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
## Redfish Bios V1_0_6 to C Structure Function
    RedfishCS_status
    Json_Bios_V1_0_6_To_CS (RedfishCS_char *JsonRawText, RedfishBios_V1_0_6_Bios_CS **ReturnedCS);

## C Structure to Redfish Bios V1_0_6 JSON Function
    RedfishCS_status
    CS_To_Bios_V1_0_6_JSON (RedfishBios_V1_0_6_Bios_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish Bios V1_0_6 C Structure Function
    RedfishCS_status
    DestroyBios_V1_0_6_CS (RedfishBios_V1_0_6_Bios_CS *CSPtr);


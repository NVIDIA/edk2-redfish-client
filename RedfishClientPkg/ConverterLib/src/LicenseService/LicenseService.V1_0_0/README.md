# Definition of LicenseService.V1_0_0 and functions<br><br>

## Actions
    typedef struct _RedfishLicenseService_V1_0_0_Actions_CS {
        RedfishLicenseService_V1_0_0_Install_CS *LicenseService_Install;
        RedfishLicenseService_V1_0_0_OemActions_CS *Oem;
    } RedfishLicenseService_V1_0_0_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**LicenseService_Install**|RedfishLicenseService_V1_0_0_Install_CS| Structure points to **#LicenseService.Install** property.| No| No
|**Oem**|RedfishLicenseService_V1_0_0_OemActions_CS| Structure points to **Oem** property.| No| No


## Install
    typedef struct _RedfishLicenseService_V1_0_0_Install_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishLicenseService_V1_0_0_Install_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## OemActions
    typedef struct _RedfishLicenseService_V1_0_0_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishLicenseService_V1_0_0_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## Oem
    typedef struct _RedfishResource_Oem_CS {
        RedfishCS_Link Prop;
    } RedfishResource_Oem_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## LicenseService
    typedef struct _RedfishLicenseService_V1_0_0_LicenseService_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishLicenseService_V1_0_0_Actions_CS *Actions;
        RedfishCS_char *Description;
        RedfishCS_char *Id;
        RedfishCS_int64 *LicenseExpirationWarningDays;
        RedfishCS_Link Licenses;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_bool *ServiceEnabled;
    } RedfishLicenseService_V1_0_0_LicenseService_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishLicenseService_V1_0_0_Actions_CS| Structure points to **Actions** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**LicenseExpirationWarningDays**|RedfishCS_int64| 64-bit long long interger pointer to **LicenseExpirationWarningDays** property.| No| No
|**Licenses**|RedfishCS_Link| Structure link list to **Licenses** property.| No| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**ServiceEnabled**|RedfishCS_bool| Boolean pointer to **ServiceEnabled** property.| No| No
## Redfish LicenseService V1_0_0 to C Structure Function
    RedfishCS_status
    Json_LicenseService_V1_0_0_To_CS (RedfishCS_char *JsonRawText, RedfishLicenseService_V1_0_0_LicenseService_CS **ReturnedCS);

## C Structure to Redfish LicenseService V1_0_0 JSON Function
    RedfishCS_status
    CS_To_LicenseService_V1_0_0_JSON (RedfishLicenseService_V1_0_0_LicenseService_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish LicenseService V1_0_0 C Structure Function
    RedfishCS_status
    DestroyLicenseService_V1_0_0_CS (RedfishLicenseService_V1_0_0_LicenseService_CS *CSPtr);


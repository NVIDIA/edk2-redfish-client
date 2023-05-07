# Definition of Storage.V1_10_1 and functions<br><br>

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
    typedef struct _RedfishStorage_V1_10_1_Actions_CS {
        RedfishStorage_V1_10_1_SetEncryptionKey_CS *Storage_SetEncryptionKey;
        RedfishStorage_V1_10_1_OemActions_CS *Oem;
    } RedfishStorage_V1_10_1_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Storage_SetEncryptionKey**|RedfishStorage_V1_10_1_SetEncryptionKey_CS| Structure points to **#Storage.SetEncryptionKey** property.| No| No
|**Oem**|RedfishStorage_V1_10_1_OemActions_CS| Structure points to **Oem** property.| No| No


## CacheSummary
    typedef struct _RedfishStorage_V1_10_1_CacheSummary_CS {
        RedfishCS_int64 *PersistentCacheSizeMiB;
        RedfishResource_Status_CS *Status;
        RedfishCS_int64 *TotalCacheSizeMiB;
    } RedfishStorage_V1_10_1_CacheSummary_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**PersistentCacheSizeMiB**|RedfishCS_int64| 64-bit long long interger pointer to **PersistentCacheSizeMiB** property.| No| Yes
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
|**TotalCacheSizeMiB**|RedfishCS_int64| 64-bit long long interger pointer to **TotalCacheSizeMiB** property.| No| Yes


## Links
    typedef struct _RedfishStorage_V1_10_1_Links_CS {
        RedfishCS_Link Enclosures;
        RedfishCS_int64 *Enclosuresodata_count;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_Link SimpleStorage;
        RedfishCS_Link StorageServices;
        RedfishCS_int64 *StorageServicesodata_count;
    } RedfishStorage_V1_10_1_Links_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Enclosures**|RedfishCS_Link| Structure link list to **Enclosures** property.| No| Yes
|**Enclosuresodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **Enclosures@odata.count** property.| No| No
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**SimpleStorage**|RedfishCS_Link| Structure link list to **SimpleStorage** property.| No| Yes
|**StorageServices**|RedfishCS_Link| Structure link list to **StorageServices** property.| No| Yes
|**StorageServicesodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **StorageServices@odata.count** property.| No| No


## OemActions
    typedef struct _RedfishStorage_V1_10_1_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishStorage_V1_10_1_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## Rates
    typedef struct _RedfishStorage_V1_10_1_Rates_CS {
        RedfishCS_int64 *ConsistencyCheckRatePercent;
        RedfishCS_int64 *RebuildRatePercent;
        RedfishCS_int64 *TransformationRatePercent;
    } RedfishStorage_V1_10_1_Rates_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**ConsistencyCheckRatePercent**|RedfishCS_int64| 64-bit long long interger pointer to **ConsistencyCheckRatePercent** property.| No| No
|**RebuildRatePercent**|RedfishCS_int64| 64-bit long long interger pointer to **RebuildRatePercent** property.| No| No
|**TransformationRatePercent**|RedfishCS_int64| 64-bit long long interger pointer to **TransformationRatePercent** property.| No| No


## SetEncryptionKey
    typedef struct _RedfishStorage_V1_10_1_SetEncryptionKey_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishStorage_V1_10_1_SetEncryptionKey_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## StorageController
    typedef struct _RedfishStorage_V1_10_1_StorageController_CS {
        RedfishCS_char *odata_id;
        RedfishStorage_V1_10_1_StorageControllerActions_CS *Actions;
        RedfishCS_Link Assembly;
        RedfishCS_char *AssetTag;
        RedfishStorage_V1_10_1_CacheSummary_CS *CacheSummary;
        RedfishCS_Link Certificates;
        RedfishStorage_V1_10_1_Rates_CS *ControllerRates;
        RedfishCS_char *FirmwareVersion;
        RedfishCS_Link Identifiers;
        RedfishStorage_V1_10_1_StorageControllerLinks_CS *Links;
        RedfishCS_Link Location;
        RedfishCS_char *Manufacturer;
        RedfishCS_Link Measurements;
        RedfishCS_char *MemberId;
        RedfishCS_char *Model;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_Link PCIeInterface;
        RedfishCS_char *PartNumber;
        RedfishCS_Link Ports;
        RedfishCS_char *SKU;
        RedfishCS_char *SerialNumber;
        RedfishCS_int64 *SpeedGbps;
        RedfishResource_Status_CS *Status;
        RedfishCS_char_Array *SupportedControllerProtocols;
        RedfishCS_char_Array *SupportedDeviceProtocols;
        RedfishCS_char_Array *SupportedRAIDTypes;
    } RedfishStorage_V1_10_1_StorageController_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**Actions**|RedfishStorage_V1_10_1_StorageControllerActions_CS| Structure points to **Actions** property.| No| No
|**Assembly**|RedfishCS_Link| Structure link list to **Assembly** property.| No| Yes
|**AssetTag**|RedfishCS_char| String pointer to **AssetTag** property.| No| No
|**CacheSummary**|RedfishStorage_V1_10_1_CacheSummary_CS| Structure points to **CacheSummary** property.| No| No
|**Certificates**|RedfishCS_Link| Structure link list to **Certificates** property.| No| Yes
|**ControllerRates**|RedfishStorage_V1_10_1_Rates_CS| Structure points to **ControllerRates** property.| No| No
|**FirmwareVersion**|RedfishCS_char| String pointer to **FirmwareVersion** property.| No| Yes
|**Identifiers**|RedfishCS_Link| Structure link list to **Identifiers** property.| No| No
|**Links**|RedfishStorage_V1_10_1_StorageControllerLinks_CS| Structure points to **Links** property.| No| No
|**Location**|RedfishCS_Link| Structure link list to **Location** property.| No| No
|**Manufacturer**|RedfishCS_char| String pointer to **Manufacturer** property.| No| Yes
|**Measurements**|RedfishCS_Link| Structure link list to **Measurements** property.| No| No
|**MemberId**|RedfishCS_char| String pointer to **MemberId** property.| No| Yes
|**Model**|RedfishCS_char| String pointer to **Model** property.| No| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**PCIeInterface**|RedfishCS_Link| Structure link list to **PCIeInterface** property.| No| No
|**PartNumber**|RedfishCS_char| String pointer to **PartNumber** property.| No| Yes
|**Ports**|RedfishCS_Link| Structure link list to **Ports** property.| No| Yes
|**SKU**|RedfishCS_char| String pointer to **SKU** property.| No| Yes
|**SerialNumber**|RedfishCS_char| String pointer to **SerialNumber** property.| No| Yes
|**SpeedGbps**|RedfishCS_int64| 64-bit long long interger pointer to **SpeedGbps** property.| No| Yes
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
|**SupportedControllerProtocols**|RedfishCS_char_Array| Structure array points to one or more than one **RedfishCS_char *** for property **SupportedControllerProtocols**.| No| Yes
|**SupportedDeviceProtocols**|RedfishCS_char_Array| Structure array points to one or more than one **RedfishCS_char *** for property **SupportedDeviceProtocols**.| No| Yes
|**SupportedRAIDTypes**|RedfishCS_char_Array| Structure array points to one or more than one **RedfishCS_char *** for property **SupportedRAIDTypes**.| No| Yes


## StorageControllerActions
    typedef struct _RedfishStorage_V1_10_1_StorageControllerActions_CS {
        RedfishStorage_V1_10_1_StorageControllerOemActions_CS *Oem;
    } RedfishStorage_V1_10_1_StorageControllerActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishStorage_V1_10_1_StorageControllerOemActions_CS| Structure points to **Oem** property.| No| No


## StorageControllerLinks
    typedef struct _RedfishStorage_V1_10_1_StorageControllerLinks_CS {
        RedfishCS_Link Endpoints;
        RedfishCS_int64 *Endpointsodata_count;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_Link PCIeFunctions;
        RedfishCS_int64 *PCIeFunctionsodata_count;
        RedfishCS_Link StorageServices;
        RedfishCS_int64 *StorageServicesodata_count;
    } RedfishStorage_V1_10_1_StorageControllerLinks_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Endpoints**|RedfishCS_Link| Structure link list to **Endpoints** property.| No| No
|**Endpointsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **Endpoints@odata.count** property.| No| No
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**PCIeFunctions**|RedfishCS_Link| Structure link list to **PCIeFunctions** property.| No| No
|**PCIeFunctionsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **PCIeFunctions@odata.count** property.| No| No
|**StorageServices**|RedfishCS_Link| Structure link list to **StorageServices** property.| No| No
|**StorageServicesodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **StorageServices@odata.count** property.| No| No


## StorageControllerOemActions
    typedef struct _RedfishStorage_V1_10_1_StorageControllerOemActions_CS {
        RedfishCS_Link Prop;
    } RedfishStorage_V1_10_1_StorageControllerOemActions_CS;

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



## Storage
    typedef struct _RedfishStorage_V1_10_1_Storage_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishStorage_V1_10_1_Actions_CS *Actions;
        RedfishCS_Link ConsistencyGroups;
        RedfishCS_Link Controllers;
        RedfishCS_char *Description;
        RedfishCS_Link Drives;
        RedfishCS_int64 *Drivesodata_count;
        RedfishCS_Link EndpointGroups;
        RedfishCS_Link FileSystems;
        RedfishCS_char *Id;
        RedfishCS_Link Identifiers;
        RedfishStorage_V1_10_1_Links_CS *Links;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_Link Redundancy;
        RedfishCS_int64 *Redundancyodata_count;
        RedfishResource_Status_CS *Status;
        RedfishStorage_V1_10_1_StorageController_CS *StorageControllers;
        RedfishCS_int64 *StorageControllersodata_count;
        RedfishCS_Link StorageGroups;
        RedfishCS_Link StoragePools;
        RedfishCS_Link Volumes;
    } RedfishStorage_V1_10_1_Storage_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishStorage_V1_10_1_Actions_CS| Structure points to **Actions** property.| No| No
|**ConsistencyGroups**|RedfishCS_Link| Structure link list to **ConsistencyGroups** property.| No| Yes
|**Controllers**|RedfishCS_Link| Structure link list to **Controllers** property.| No| Yes
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Drives**|RedfishCS_Link| Structure link list to **Drives** property.| No| Yes
|**Drivesodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **Drives@odata.count** property.| No| No
|**EndpointGroups**|RedfishCS_Link| Structure link list to **EndpointGroups** property.| No| Yes
|**FileSystems**|RedfishCS_Link| Structure link list to **FileSystems** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Identifiers**|RedfishCS_Link| Structure link list to **Identifiers** property.| No| No
|**Links**|RedfishStorage_V1_10_1_Links_CS| Structure points to **Links** property.| No| No
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**Redundancy**|RedfishCS_Link| Structure link list to **Redundancy** property.| No| No
|**Redundancyodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **Redundancy@odata.count** property.| No| No
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
|**StorageControllers**|RedfishStorage_V1_10_1_StorageController_CS| Structure points to **StorageControllers** property.| No| Yes
|**StorageControllersodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **StorageControllers@odata.count** property.| No| No
|**StorageGroups**|RedfishCS_Link| Structure link list to **StorageGroups** property.| No| Yes
|**StoragePools**|RedfishCS_Link| Structure link list to **StoragePools** property.| No| Yes
|**Volumes**|RedfishCS_Link| Structure link list to **Volumes** property.| No| Yes
## Redfish Storage V1_10_1 to C Structure Function
    RedfishCS_status
    Json_Storage_V1_10_1_To_CS (RedfishCS_char *JsonRawText, RedfishStorage_V1_10_1_Storage_CS **ReturnedCS);

## C Structure to Redfish Storage V1_10_1 JSON Function
    RedfishCS_status
    CS_To_Storage_V1_10_1_JSON (RedfishStorage_V1_10_1_Storage_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish Storage V1_10_1 C Structure Function
    RedfishCS_status
    DestroyStorage_V1_10_1_CS (RedfishStorage_V1_10_1_Storage_CS *CSPtr);


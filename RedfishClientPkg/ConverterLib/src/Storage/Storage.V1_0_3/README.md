# Definition of Storage.V1_0_3 and functions<br><br>

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


## Identifier
    typedef struct _RedfishResource_V1_1_0_Identifier_CS {
        RedfishCS_char *DurableName;
        RedfishCS_char *DurableNameFormat;
    } RedfishResource_V1_1_0_Identifier_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**DurableName**|RedfishCS_char| String pointer to **DurableName** property.| No| Yes
|**DurableNameFormat**|RedfishCS_char| String pointer to **DurableNameFormat** property.| No| Yes


## SetEncryptionKey
    typedef struct _RedfishStorage_V1_0_3_SetEncryptionKey_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishStorage_V1_0_3_SetEncryptionKey_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## StorageController
    typedef struct _RedfishStorage_V1_0_3_StorageController_CS {
        RedfishCS_char *AssetTag;
        RedfishCS_char *FirmwareVersion;
        RedfishResource_V1_1_0_Identifier_Array_CS *Identifiers;
        RedfishCS_char *Manufacturer;
        RedfishCS_char *MemberId;
        RedfishCS_char *Model;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *PartNumber;
        RedfishCS_char *SKU;
        RedfishCS_char *SerialNumber;
        RedfishCS_int64 *SpeedGbps;
        RedfishResource_Status_CS *Status;
        RedfishCS_char_Array *SupportedControllerProtocols;
        RedfishCS_char_Array *SupportedDeviceProtocols;
    } RedfishStorage_V1_0_3_StorageController_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**AssetTag**|RedfishCS_char| String pointer to **AssetTag** property.| No| No
|**FirmwareVersion**|RedfishCS_char| String pointer to **FirmwareVersion** property.| No| Yes
|**Identifiers**|RedfishResource_V1_1_0_Identifier_Array_CS| Structure array points to one or more than one **RedfishResource_V1_1_0_Identifier_Array_CS** structures for property **Identifiers**.| No| No
|**Manufacturer**|RedfishCS_char| String pointer to **Manufacturer** property.| No| Yes
|**MemberId**|RedfishCS_char| String pointer to **MemberId** property.| No| Yes
|**Model**|RedfishCS_char| String pointer to **Model** property.| No| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**PartNumber**|RedfishCS_char| String pointer to **PartNumber** property.| No| Yes
|**SKU**|RedfishCS_char| String pointer to **SKU** property.| No| Yes
|**SerialNumber**|RedfishCS_char| String pointer to **SerialNumber** property.| No| Yes
|**SpeedGbps**|RedfishCS_int64| 64-bit long long interger pointer to **SpeedGbps** property.| No| Yes
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
|**SupportedControllerProtocols**|RedfishCS_char_Array| Structure array points to one or more than one **RedfishCS_char *** for property **SupportedControllerProtocols**.| No| Yes
|**SupportedDeviceProtocols**|RedfishCS_char_Array| Structure array points to one or more than one **RedfishCS_char *** for property **SupportedDeviceProtocols**.| No| Yes


## Storage_Actions
    typedef struct _RedfishStorage_V1_0_3_Storage_Actions_CS {
        RedfishStorage_V1_0_3_SetEncryptionKey_CS *Storage_SetEncryptionKey;
        RedfishStorage_V1_0_3_Storage_Actions_Oem_CS *Oem;
    } RedfishStorage_V1_0_3_Storage_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Storage_SetEncryptionKey**|RedfishStorage_V1_0_3_SetEncryptionKey_CS| Structure points to **#Storage.SetEncryptionKey** property.| No| No
|**Oem**|RedfishStorage_V1_0_3_Storage_Actions_Oem_CS| Structure points to **Oem** property.| No| No


## Storage_Actions_Oem
    typedef struct _RedfishStorage_V1_0_3_Storage_Actions_Oem_CS {
        RedfishCS_Link Prop;
    } RedfishStorage_V1_0_3_Storage_Actions_Oem_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## Storage_Links
    typedef struct _RedfishStorage_V1_0_3_Storage_Links_CS {
        RedfishCS_Link Enclosures;
        RedfishCS_int64 *Enclosuresodata_count;
        RedfishCS_char *Enclosuresodata_navigationLink;
        RedfishResource_Oem_CS *Oem;
    } RedfishStorage_V1_0_3_Storage_Links_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Enclosures**|RedfishCS_Link| Structure link list to **Enclosures** property.| No| Yes
|**Enclosuresodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **Enclosures@odata.count** property.| No| No
|**Enclosuresodata_navigationLink**|RedfishCS_char| String pointer to **Enclosures@odata.navigationLink** property.| No| No
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No


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



## RedfishResource_V1_1_0_Identifier_Array_CS
    typedef struct _RedfishResource_V1_1_0_Identifier_Array_CS  {
        RedfishCS_Link *Next;
        RedfishResource_V1_1_0_Identifier_CS *ArrayValue;
    } RedfishResource_V1_1_0_Identifier_Array_CS;



## Storage
    typedef struct _RedfishStorage_V1_0_3_Storage_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishStorage_V1_0_3_Storage_Actions_CS *Actions;
        RedfishCS_char *Description;
        RedfishCS_Link Drives;
        RedfishCS_int64 *Drivesodata_count;
        RedfishCS_char *Drivesodata_navigationLink;
        RedfishCS_char *Id;
        RedfishStorage_V1_0_3_Storage_Links_CS *Links;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_Link Redundancy;
        RedfishCS_int64 *Redundancyodata_count;
        RedfishCS_char *Redundancyodata_navigationLink;
        RedfishResource_Status_CS *Status;
        RedfishStorage_V1_0_3_StorageController_CS *StorageControllers;
        RedfishCS_int64 *StorageControllersodata_count;
        RedfishCS_char *StorageControllersodata_navigationLink;
        RedfishCS_Link Volumes;
    } RedfishStorage_V1_0_3_Storage_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| No| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| No| No
|**Actions**|RedfishStorage_V1_0_3_Storage_Actions_CS| Structure points to **Actions** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Drives**|RedfishCS_Link| Structure link list to **Drives** property.| No| Yes
|**Drivesodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **Drives@odata.count** property.| No| No
|**Drivesodata_navigationLink**|RedfishCS_char| String pointer to **Drives@odata.navigationLink** property.| No| No
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Links**|RedfishStorage_V1_0_3_Storage_Links_CS| Structure points to **Links** property.| No| No
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**Redundancy**|RedfishCS_Link| Structure link list to **Redundancy** property.| No| No
|**Redundancyodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **Redundancy@odata.count** property.| No| No
|**Redundancyodata_navigationLink**|RedfishCS_char| String pointer to **Redundancy@odata.navigationLink** property.| No| No
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
|**StorageControllers**|RedfishStorage_V1_0_3_StorageController_CS| Structure points to **StorageControllers** property.| No| Yes
|**StorageControllersodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **StorageControllers@odata.count** property.| No| No
|**StorageControllersodata_navigationLink**|RedfishCS_char| String pointer to **StorageControllers@odata.navigationLink** property.| No| No
|**Volumes**|RedfishCS_Link| Structure link list to **Volumes** property.| No| Yes
## Redfish Storage V1_0_3 to C Structure Function
    RedfishCS_status
    Json_Storage_V1_0_3_To_CS (RedfishCS_char *JsonRawText, RedfishStorage_V1_0_3_Storage_CS **ReturnedCS);

## C Structure to Redfish Storage V1_0_3 JSON Function
    RedfishCS_status
    CS_To_Storage_V1_0_3_JSON (RedfishStorage_V1_0_3_Storage_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish Storage V1_0_3 C Structure Function
    RedfishCS_status
    DestroyStorage_V1_0_3_CS (RedfishStorage_V1_0_3_Storage_CS *CSPtr);

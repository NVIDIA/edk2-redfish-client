# Definition of MessageRegistry.V1_5_0 and functions<br><br>

## Actions
    typedef struct _RedfishMessageRegistry_V1_5_0_Actions_CS {
        RedfishMessageRegistry_V1_5_0_OemActions_CS *Oem;
    } RedfishMessageRegistry_V1_5_0_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishMessageRegistry_V1_5_0_OemActions_CS| Structure points to **Oem** property.| No| No


## ClearingLogic
    typedef struct _RedfishMessageRegistry_V1_5_0_ClearingLogic_CS {
        RedfishCS_bool *ClearsAll;
        RedfishCS_char *ClearsIf;
        RedfishCS_char_Array *ClearsMessage;
    } RedfishMessageRegistry_V1_5_0_ClearingLogic_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**ClearsAll**|RedfishCS_bool| Boolean pointer to **ClearsAll** property.| No| Yes
|**ClearsIf**|RedfishCS_char| String pointer to **ClearsIf** property.| No| Yes
|**ClearsMessage**|RedfishCS_char_Array| Structure array points to one or more than one **RedfishCS_char *** for property **ClearsMessage**.| No| Yes


## Message
    typedef struct _RedfishMessageRegistry_V1_5_0_Message_CS {
        RedfishCS_char_Array *ArgDescriptions;
        RedfishCS_char_Array *ArgLongDescriptions;
        RedfishMessageRegistry_V1_5_0_ClearingLogic_CS *ClearingLogic;
        RedfishCS_char *Deprecated;
        RedfishCS_char *Description;
        RedfishCS_char *LongDescription;
        RedfishCS_char *Message;
        RedfishCS_char *MessageSeverity;
        RedfishCS_int64 *NumberOfArgs;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char_Array *ParamTypes;
        RedfishCS_char *Resolution;
        RedfishCS_char *Severity;
        RedfishCS_char *VersionAdded;
        RedfishCS_char *VersionDeprecated;
    } RedfishMessageRegistry_V1_5_0_Message_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**ArgDescriptions**|RedfishCS_char_Array| Structure array points to one or more than one **RedfishCS_char *** for property **ArgDescriptions**.| No| Yes
|**ArgLongDescriptions**|RedfishCS_char_Array| Structure array points to one or more than one **RedfishCS_char *** for property **ArgLongDescriptions**.| No| Yes
|**ClearingLogic**|RedfishMessageRegistry_V1_5_0_ClearingLogic_CS| Structure points to **ClearingLogic** property.| No| No
|**Deprecated**|RedfishCS_char| String pointer to **Deprecated** property.| No| Yes
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**LongDescription**|RedfishCS_char| String pointer to **LongDescription** property.| No| Yes
|**Message**|RedfishCS_char| String pointer to **Message** property.| No| Yes
|**MessageSeverity**|RedfishCS_char| String pointer to **MessageSeverity** property.| No| Yes
|**NumberOfArgs**|RedfishCS_int64| 64-bit long long interger pointer to **NumberOfArgs** property.| No| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**ParamTypes**|RedfishCS_char_Array| Structure array points to one or more than one **RedfishCS_char *** for property **ParamTypes**.| No| Yes
|**Resolution**|RedfishCS_char| String pointer to **Resolution** property.| No| Yes
|**Severity**|RedfishCS_char| String pointer to **Severity** property.| No| Yes
|**VersionAdded**|RedfishCS_char| String pointer to **VersionAdded** property.| No| Yes
|**VersionDeprecated**|RedfishCS_char| String pointer to **VersionDeprecated** property.| No| Yes


## MessageProperty
    typedef struct _RedfishMessageRegistry_V1_5_0_MessageProperty_CS {
        RedfishCS_Link Prop;
    } RedfishMessageRegistry_V1_5_0_MessageProperty_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## OemActions
    typedef struct _RedfishMessageRegistry_V1_5_0_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishMessageRegistry_V1_5_0_OemActions_CS;

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


## RedfishCS_char_Array
    typedef struct _RedfishCS_char_Array  {
        RedfishCS_Link *Next;
        RedfishCS_char *ArrayValue;
    } RedfishCS_char_Array;



## MessageRegistry
    typedef struct _RedfishMessageRegistry_V1_5_0_MessageRegistry_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_type;
        RedfishMessageRegistry_V1_5_0_Actions_CS *Actions;
        RedfishCS_char *Description;
        RedfishCS_char *Id;
        RedfishCS_char *Language;
        RedfishMessageRegistry_V1_5_0_MessageProperty_CS *Messages;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *OwningEntity;
        RedfishCS_char *RegistryPrefix;
        RedfishCS_char *RegistryVersion;
    } RedfishMessageRegistry_V1_5_0_MessageRegistry_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishMessageRegistry_V1_5_0_Actions_CS| Structure points to **Actions** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Language**|RedfishCS_char| String pointer to **Language** property.| Yes| Yes
|**Messages**|RedfishMessageRegistry_V1_5_0_MessageProperty_CS| Structure points to **Messages** property.| Yes| No
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**OwningEntity**|RedfishCS_char| String pointer to **OwningEntity** property.| Yes| Yes
|**RegistryPrefix**|RedfishCS_char| String pointer to **RegistryPrefix** property.| Yes| Yes
|**RegistryVersion**|RedfishCS_char| String pointer to **RegistryVersion** property.| Yes| Yes
## Redfish MessageRegistry V1_5_0 to C Structure Function
    RedfishCS_status
    Json_MessageRegistry_V1_5_0_To_CS (RedfishCS_char *JsonRawText, RedfishMessageRegistry_V1_5_0_MessageRegistry_CS **ReturnedCS);

## C Structure to Redfish MessageRegistry V1_5_0 JSON Function
    RedfishCS_status
    CS_To_MessageRegistry_V1_5_0_JSON (RedfishMessageRegistry_V1_5_0_MessageRegistry_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish MessageRegistry V1_5_0 C Structure Function
    RedfishCS_status
    DestroyMessageRegistry_V1_5_0_CS (RedfishMessageRegistry_V1_5_0_MessageRegistry_CS *CSPtr);


//
// Auto-generated file by Redfish Schema C Structure Generator.
// https://github.com/DMTF/Redfish-Schema-C-Struct-Generator.
//
//  (C) Copyright 2019-2021 Hewlett Packard Enterprise Development LP<BR>
//
// Copyright Notice:
// Copyright 2019-2021 Distributed Management Task Force, Inc. All rights reserved.
// License: BSD 3-Clause License. For full text see link: https://github.com/DMTF/Redfish-JSON-C-Struct-Converter/blob/master/LICENSE.md
//

#include"Redfish_ProcessorMetrics_v1_3_1_CS.h"
#include <stdlib.h>
#include <string.h>
#include <jansson.h>

RedfishCS_bool SupportedRedfishResource (RedfishCS_char *Odata_Type, RedfishCS_char *NameSpace, RedfishCS_char *Version, RedfishCS_char *DataType);
RedfishCS_status CreateCsUriByNode (RedfishCS_void *Cs, json_t *JsonOj, RedfishCS_char *NodeName, RedfishCS_char *ParentUri, RedfishCS_Type_Uri_Data **CsTypeUriData);
RedfishCS_status CreateCsJsonByNode (RedfishCS_void *Cs, json_t *JsonOj, RedfishCS_char *NodeName, RedfishCS_char *ParentUri, RedfishCS_Type_JSON_Data **CsTypeJsonData);
RedfishCS_status CreateCsUriOrJsonByNode (RedfishCS_void *Cs, json_t *JsonObj, RedfishCS_char *NodeName, RedfishCS_char *ParentUri, RedfishCS_Link *LinkHead);
RedfishCS_status CreateCsUriOrJsonByNodeArray (RedfishCS_void *Cs, json_t *JsonObj, RedfishCS_char *NodeName, RedfishCS_char *ParentUri, RedfishCS_Link *LinkHead);
RedfishCS_status CreateJsonPayloadAndCs (char *JsonRawText, char *ResourceType, char *ResourceVersion, char *TypeName, json_t **JsonObjReturned, void **Cs, int size);
RedfishCS_status GetRedfishPropertyStr (RedfishCS_void *Cs, json_t *JsonObj, char *Key, RedfishCS_char **DstBuffer);
RedfishCS_status GetRedfishPropertyBoolean (RedfishCS_void *Cs, json_t *JsonObj, char *Key, RedfishCS_bool **DstBuffer);
RedfishCS_status GetRedfishPropertyVague (RedfishCS_void *Cs, json_t *JsonObj, char *Key, RedfishCS_Vague **DstBuffer);
RedfishCS_status DestoryCsMemory (RedfishCS_void *rootCs);
RedfishCS_status GetRedfishPropertyInt64 (RedfishCS_void *Cs, json_t *JsonObj, char *Key, RedfishCS_int64 **Dst);
RedfishCS_status InsertJsonStringObj (json_t *JsonObj, char *Key, char *StringValue);
RedfishCS_status InsertJsonLinkObj (json_t *JsonObj, char *Key, RedfishCS_Link *Link);
RedfishCS_status InsertJsonInt64Obj (json_t *ParentJsonObj, char *Key, RedfishCS_int64 *Int64Value);
RedfishCS_status InsertJsonBoolObj (json_t *ParentJsonObj, char *Key, RedfishCS_bool *BoolValue);
RedfishCS_status InsertJsonStringArrayObj (json_t *JsonObj, char *Key, RedfishCS_char_Array *StringValueArray);
RedfishCS_status InsertJsonLinkArrayObj (json_t *JsonObj, char *Key, RedfishCS_Link *LinkArray);
RedfishCS_status InsertJsonInt64ArrayObj (json_t *ParentJsonObj, char *Key, RedfishCS_int64_Array *Int64ValueArray);
RedfishCS_status InsertJsonBoolArrayObj (json_t *ParentJsonObj, char *Key, RedfishCS_bool_Array *BoolValueArray);
RedfishCS_status InsertJsonVagueObj (json_t *ParentJsonObj, char *Key, RedfishCS_Vague *VagueValue);
RedfishCS_bool CheckEmptyPropJsonObject(json_t *JsonObj, RedfishCS_uint32 *NumOfProperty);
RedfishCS_status CreateEmptyPropCsJson(RedfishCS_void *Cs, json_t *JsonOj, RedfishCS_char *NodeName, RedfishCS_char *ParentUri, RedfishCS_Type_EmptyProp_CS_Data **CsTypeEmptyPropCS, RedfishCS_uint32 NunmOfProperties);
RedfishCS_status CsEmptyPropLinkToJson(json_t *CsJson, char *Key, RedfishCS_Link *Link);

static RedfishCS_status GenCacheMetrics_ArrayCs(RedfishProcessorMetrics_V1_3_1_ProcessorMetrics_CS *Cs, json_t *JsonObj, char *Key, RedfishProcessorMetrics_V1_3_1_CacheMetrics_Array_CS **Dst);
//
//Generate C structure for #ProcessorMetrics.ClearCurrentPeriod
//
static RedfishCS_status GenClearCurrentPeriodCs(RedfishProcessorMetrics_V1_3_1_ProcessorMetrics_CS *Cs, json_t *JsonObj, char *Key, RedfishProcessorMetrics_V1_3_1_ClearCurrentPeriod_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishProcessorMetrics_V1_3_1_ClearCurrentPeriod_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // target
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "target", &(*Dst)->target);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // title
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "title", &(*Dst)->title);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for Oem
//
static RedfishCS_status GenOemActionsCs(RedfishProcessorMetrics_V1_3_1_ProcessorMetrics_CS *Cs, json_t *JsonObj, char *Key, RedfishProcessorMetrics_V1_3_1_OemActions_CS **Dst)
{
  RedfishCS_status Status;
  RedfishCS_Type_JSON_Data *CsTypeJson;
  RedfishCS_Type_EmptyProp_CS_Data *CsTypeEmptyPropCS;
  RedfishCS_uint32 NunmOfEmptyPropProperties;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishProcessorMetrics_V1_3_1_OemActions_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  InitializeLinkHead (&(*Dst)->Prop);

  //
  // Try to create C structure if the property is
  // declared as empty property in schema. The supported property type
  // is string, integer, real, number and boolean.
  //
  if (CheckEmptyPropJsonObject(TempJsonObj, &NunmOfEmptyPropProperties)) {
    Status = CreateEmptyPropCsJson(Cs, JsonObj, Key, Cs->Header.ThisUri, &CsTypeEmptyPropCS, NunmOfEmptyPropProperties);
    if (Status != RedfishCS_status_success) {
      goto Error;
    }
    InsertTailLink(&(*Dst)->Prop, &CsTypeEmptyPropCS->Header.LinkEntry);
  } else {
    Status = CreateCsJsonByNode (Cs, JsonObj, Key, Cs->Header.ThisUri, &CsTypeJson);
    if (Status != RedfishCS_status_success) {
      goto Error;
    }
    InsertTailLink(&(*Dst)->Prop, &CsTypeJson->Header.LinkEntry);
  }
Error:;
  return Status;
}
//
//Generate C structure for Actions
//
static RedfishCS_status GenActionsCs(RedfishProcessorMetrics_V1_3_1_ProcessorMetrics_CS *Cs, json_t *JsonObj, char *Key, RedfishProcessorMetrics_V1_3_1_Actions_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishProcessorMetrics_V1_3_1_Actions_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // #ProcessorMetrics.ClearCurrentPeriod
  Status = GenClearCurrentPeriodCs (Cs, TempJsonObj, "#ProcessorMetrics.ClearCurrentPeriod", &(*Dst)->ProcessorMetrics_ClearCurrentPeriod);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Oem
  Status = GenOemActionsCs (Cs, TempJsonObj, "Oem", &(*Dst)->Oem);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
static RedfishCS_status GenCacheMetrics_Array_ElementCs(RedfishProcessorMetrics_V1_3_1_ProcessorMetrics_CS *Cs, json_t *JsonObj, RedfishCS_uint64 Index,  RedfishProcessorMetrics_V1_3_1_CacheMetrics_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_array_get (JsonObj, (RedfishCS_int)Index);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsZeroMemory(Cs, sizeof(RedfishProcessorMetrics_V1_3_1_CacheMetrics_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // CacheMiss
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "CacheMiss", &(*Dst)->CacheMiss);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // CacheMissesPerInstruction
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "CacheMissesPerInstruction", &(*Dst)->CacheMissesPerInstruction);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // HitRatio
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "HitRatio", &(*Dst)->HitRatio);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Level
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "Level", &(*Dst)->Level);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // OccupancyBytes
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "OccupancyBytes", &(*Dst)->OccupancyBytes);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // OccupancyPercent
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "OccupancyPercent", &(*Dst)->OccupancyPercent);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  return RedfishCS_status_success;
Error:;
  return Status;
}
//
//Generate C structure for RedfishProcessorMetrics_V1_3_1_CacheMetrics_Array_CS
//
static RedfishCS_status GenCacheMetrics_ArrayCs(RedfishProcessorMetrics_V1_3_1_ProcessorMetrics_CS *Cs, json_t *JsonObj, char *Key, RedfishProcessorMetrics_V1_3_1_CacheMetrics_Array_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;
  RedfishCS_uint64 ArraySize;
  RedfishCS_uint64 Index;
  RedfishProcessorMetrics_V1_3_1_CacheMetrics_Array_CS *ThisElement;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }

  if (json_is_array(TempJsonObj) != RedfishCS_boolean_true) {
    return RedfishCS_status_invalid_parameter;
  }

  ArraySize = json_array_size (TempJsonObj);
  Status = allocateArrayRecordCsMemory(Cs, sizeof (RedfishProcessorMetrics_V1_3_1_CacheMetrics_Array_CS), ArraySize, (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  if (*Dst == NULL) {
    // Empty array
    return RedfishCS_status_success;
  }
  ThisElement = *Dst;
  for (Index = 0; Index < ArraySize; Index ++) {
    Status = GenCacheMetrics_Array_ElementCs(Cs, TempJsonObj, Index, &ThisElement->ArrayValue);
    if (Status != RedfishCS_status_success){
      goto Error;
    }
    ThisElement = ThisElement->Next;
  }
Error:;
  return Status;
}
//
//Generate C structure for CurrentPeriod
//
static RedfishCS_status GenCurrentPeriodCs(RedfishProcessorMetrics_V1_3_1_ProcessorMetrics_CS *Cs, json_t *JsonObj, char *Key, RedfishProcessorMetrics_V1_3_1_CurrentPeriod_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishProcessorMetrics_V1_3_1_CurrentPeriod_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // CorrectableECCErrorCount
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "CorrectableECCErrorCount", &(*Dst)->CorrectableECCErrorCount);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // UncorrectableECCErrorCount
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "UncorrectableECCErrorCount", &(*Dst)->UncorrectableECCErrorCount);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for LifeTime
//
static RedfishCS_status GenLifeTimeCs(RedfishProcessorMetrics_V1_3_1_ProcessorMetrics_CS *Cs, json_t *JsonObj, char *Key, RedfishProcessorMetrics_V1_3_1_LifeTime_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishProcessorMetrics_V1_3_1_LifeTime_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // CorrectableECCErrorCount
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "CorrectableECCErrorCount", &(*Dst)->CorrectableECCErrorCount);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // UncorrectableECCErrorCount
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "UncorrectableECCErrorCount", &(*Dst)->UncorrectableECCErrorCount);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for CacheMetricsTotal
//
static RedfishCS_status GenCacheMetricsTotalCs(RedfishProcessorMetrics_V1_3_1_ProcessorMetrics_CS *Cs, json_t *JsonObj, char *Key, RedfishProcessorMetrics_V1_3_1_CacheMetricsTotal_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishProcessorMetrics_V1_3_1_CacheMetricsTotal_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // CurrentPeriod
  Status = GenCurrentPeriodCs (Cs, TempJsonObj, "CurrentPeriod", &(*Dst)->CurrentPeriod);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // LifeTime
  Status = GenLifeTimeCs (Cs, TempJsonObj, "LifeTime", &(*Dst)->LifeTime);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
static RedfishCS_status GenCStateResidency_Array_ElementCs(RedfishProcessorMetrics_V1_3_1_ProcessorMetrics_CS *Cs, json_t *JsonObj, RedfishCS_uint64 Index,  RedfishProcessorMetrics_V1_3_1_CStateResidency_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_array_get (JsonObj, (RedfishCS_int)Index);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsZeroMemory(Cs, sizeof(RedfishProcessorMetrics_V1_3_1_CStateResidency_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // Level
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "Level", &(*Dst)->Level);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ResidencyPercent
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "ResidencyPercent", &(*Dst)->ResidencyPercent);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  return RedfishCS_status_success;
Error:;
  return Status;
}
//
//Generate C structure for RedfishProcessorMetrics_V1_3_1_CStateResidency_Array_CS
//
static RedfishCS_status GenCStateResidency_ArrayCs(RedfishProcessorMetrics_V1_3_1_ProcessorMetrics_CS *Cs, json_t *JsonObj, char *Key, RedfishProcessorMetrics_V1_3_1_CStateResidency_Array_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;
  RedfishCS_uint64 ArraySize;
  RedfishCS_uint64 Index;
  RedfishProcessorMetrics_V1_3_1_CStateResidency_Array_CS *ThisElement;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }

  if (json_is_array(TempJsonObj) != RedfishCS_boolean_true) {
    return RedfishCS_status_invalid_parameter;
  }

  ArraySize = json_array_size (TempJsonObj);
  Status = allocateArrayRecordCsMemory(Cs, sizeof (RedfishProcessorMetrics_V1_3_1_CStateResidency_Array_CS), ArraySize, (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  if (*Dst == NULL) {
    // Empty array
    return RedfishCS_status_success;
  }
  ThisElement = *Dst;
  for (Index = 0; Index < ArraySize; Index ++) {
    Status = GenCStateResidency_Array_ElementCs(Cs, TempJsonObj, Index, &ThisElement->ArrayValue);
    if (Status != RedfishCS_status_success){
      goto Error;
    }
    ThisElement = ThisElement->Next;
  }
Error:;
  return Status;
}
static RedfishCS_status GenCoreMetrics_Array_ElementCs(RedfishProcessorMetrics_V1_3_1_ProcessorMetrics_CS *Cs, json_t *JsonObj, RedfishCS_uint64 Index,  RedfishProcessorMetrics_V1_3_1_CoreMetrics_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_array_get (JsonObj, (RedfishCS_int)Index);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsZeroMemory(Cs, sizeof(RedfishProcessorMetrics_V1_3_1_CoreMetrics_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // CStateResidency
  Status = GenCStateResidency_ArrayCs (Cs, TempJsonObj, "CStateResidency", &(*Dst)->CStateResidency);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // CoreCache
  Status = GenCacheMetrics_ArrayCs (Cs, TempJsonObj, "CoreCache", &(*Dst)->CoreCache);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // CoreId
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "CoreId", &(*Dst)->CoreId);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // IOStallCount
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "IOStallCount", &(*Dst)->IOStallCount);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // InstructionsPerCycle
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "InstructionsPerCycle", &(*Dst)->InstructionsPerCycle);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // MemoryStallCount
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "MemoryStallCount", &(*Dst)->MemoryStallCount);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // UnhaltedCycles
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "UnhaltedCycles", &(*Dst)->UnhaltedCycles);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  return RedfishCS_status_success;
Error:;
  return Status;
}
//
//Generate C structure for RedfishProcessorMetrics_V1_3_1_CoreMetrics_Array_CS
//
static RedfishCS_status GenCoreMetrics_ArrayCs(RedfishProcessorMetrics_V1_3_1_ProcessorMetrics_CS *Cs, json_t *JsonObj, char *Key, RedfishProcessorMetrics_V1_3_1_CoreMetrics_Array_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;
  RedfishCS_uint64 ArraySize;
  RedfishCS_uint64 Index;
  RedfishProcessorMetrics_V1_3_1_CoreMetrics_Array_CS *ThisElement;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }

  if (json_is_array(TempJsonObj) != RedfishCS_boolean_true) {
    return RedfishCS_status_invalid_parameter;
  }

  ArraySize = json_array_size (TempJsonObj);
  Status = allocateArrayRecordCsMemory(Cs, sizeof (RedfishProcessorMetrics_V1_3_1_CoreMetrics_Array_CS), ArraySize, (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  if (*Dst == NULL) {
    // Empty array
    return RedfishCS_status_success;
  }
  ThisElement = *Dst;
  for (Index = 0; Index < ArraySize; Index ++) {
    Status = GenCoreMetrics_Array_ElementCs(Cs, TempJsonObj, Index, &ThisElement->ArrayValue);
    if (Status != RedfishCS_status_success){
      goto Error;
    }
    ThisElement = ThisElement->Next;
  }
Error:;
  return Status;
}
//
//Generate C structure for Oem
//
static RedfishCS_status GenOemCs(RedfishProcessorMetrics_V1_3_1_ProcessorMetrics_CS *Cs, json_t *JsonObj, char *Key, RedfishResource_Oem_CS **Dst)
{
  RedfishCS_status Status;
  RedfishCS_Type_JSON_Data *CsTypeJson;
  RedfishCS_Type_EmptyProp_CS_Data *CsTypeEmptyPropCS;
  RedfishCS_uint32 NunmOfEmptyPropProperties;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishResource_Oem_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  InitializeLinkHead (&(*Dst)->Prop);

  //
  // Try to create C structure if the property is
  // declared as empty property in schema. The supported property type
  // is string, integer, real, number and boolean.
  //
  if (CheckEmptyPropJsonObject(TempJsonObj, &NunmOfEmptyPropProperties)) {
    Status = CreateEmptyPropCsJson(Cs, JsonObj, Key, Cs->Header.ThisUri, &CsTypeEmptyPropCS, NunmOfEmptyPropProperties);
    if (Status != RedfishCS_status_success) {
      goto Error;
    }
    InsertTailLink(&(*Dst)->Prop, &CsTypeEmptyPropCS->Header.LinkEntry);
  } else {
    Status = CreateCsJsonByNode (Cs, JsonObj, Key, Cs->Header.ThisUri, &CsTypeJson);
    if (Status != RedfishCS_status_success) {
      goto Error;
    }
    InsertTailLink(&(*Dst)->Prop, &CsTypeJson->Header.LinkEntry);
  }
Error:;
  return Status;
}
static RedfishCS_status CS_To_JSON_ActionsOem(json_t *CsJson, char *Key, RedfishProcessorMetrics_V1_3_1_OemActions_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // Check if this is RedfishCS_Type_CS_EmptyProp.
  CsEmptyPropLinkToJson(CsJson, Key, &CSPtr->Prop);
  // No JSON property for this structure.
  return RedfishCS_status_success;
}
static RedfishCS_status CS_To_JSON_ActionsProcessorMetrics_ClearCurrentPeriod(json_t *CsJson, char *Key, RedfishProcessorMetrics_V1_3_1_ClearCurrentPeriod_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // target 
  if (InsertJsonStringObj (CsJson, "target", CSPtr->target) != RedfishCS_status_success) {goto Error;}

  // title 
  if (InsertJsonStringObj (CsJson, "title", CSPtr->title) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_Actions(json_t *CsJson, char *Key, RedfishProcessorMetrics_V1_3_1_Actions_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // Oem
  if (CS_To_JSON_ActionsOem(CsJson, "Oem", CSPtr->Oem) != RedfishCS_status_success) {goto Error;}

  // #ProcessorMetrics.ClearCurrentPeriod
  if (CS_To_JSON_ActionsProcessorMetrics_ClearCurrentPeriod(CsJson, "#ProcessorMetrics.ClearCurrentPeriod", CSPtr->ProcessorMetrics_ClearCurrentPeriod) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_Cache(json_t *CsJson, char *Key, RedfishProcessorMetrics_V1_3_1_CacheMetrics_Array_CS *CSPtr)
{
  json_t *ArrayJson;
  json_t *ArrayMember;
  RedfishProcessorMetrics_V1_3_1_CacheMetrics_Array_CS *NextArray;
  RedfishProcessorMetrics_V1_3_1_CacheMetrics_CS *NextArrayItem;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  ArrayJson = json_array();
  if (ArrayJson == NULL) {
    return RedfishCS_status_unsupported;
  }
  NextArray = CSPtr;
  do {
    ArrayMember = json_object();
    if (ArrayMember == NULL) {
      return RedfishCS_status_unsupported;
    }

    NextArrayItem = NextArray->ArrayValue;
    // CacheMiss 
    if (InsertJsonInt64Obj (ArrayMember, "CacheMiss", NextArrayItem->CacheMiss) != RedfishCS_status_success) {goto Error;}

    // CacheMissesPerInstruction 
    if (InsertJsonInt64Obj (ArrayMember, "CacheMissesPerInstruction", NextArrayItem->CacheMissesPerInstruction) != RedfishCS_status_success) {goto Error;}

    // HitRatio 
    if (InsertJsonInt64Obj (ArrayMember, "HitRatio", NextArrayItem->HitRatio) != RedfishCS_status_success) {goto Error;}

    // Level 
    if (InsertJsonStringObj (ArrayMember, "Level", NextArrayItem->Level) != RedfishCS_status_success) {goto Error;}

    // OccupancyBytes 
    if (InsertJsonInt64Obj (ArrayMember, "OccupancyBytes", NextArrayItem->OccupancyBytes) != RedfishCS_status_success) {goto Error;}

    // OccupancyPercent 
    if (InsertJsonInt64Obj (ArrayMember, "OccupancyPercent", NextArrayItem->OccupancyPercent) != RedfishCS_status_success) {goto Error;}

    if (json_array_append_new (ArrayJson, ArrayMember) != 0) {goto Error;}
    NextArray = NextArray->Next;
  } while (NextArray != NULL);
  json_object_set_new (CsJson, Key, ArrayJson);

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_CacheMetricsTotalCurrentPeriod(json_t *CsJson, char *Key, RedfishProcessorMetrics_V1_3_1_CurrentPeriod_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // CorrectableECCErrorCount 
  if (InsertJsonInt64Obj (CsJson, "CorrectableECCErrorCount", CSPtr->CorrectableECCErrorCount) != RedfishCS_status_success) {goto Error;}

  // UncorrectableECCErrorCount 
  if (InsertJsonInt64Obj (CsJson, "UncorrectableECCErrorCount", CSPtr->UncorrectableECCErrorCount) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_CacheMetricsTotalLifeTime(json_t *CsJson, char *Key, RedfishProcessorMetrics_V1_3_1_LifeTime_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // CorrectableECCErrorCount 
  if (InsertJsonInt64Obj (CsJson, "CorrectableECCErrorCount", CSPtr->CorrectableECCErrorCount) != RedfishCS_status_success) {goto Error;}

  // UncorrectableECCErrorCount 
  if (InsertJsonInt64Obj (CsJson, "UncorrectableECCErrorCount", CSPtr->UncorrectableECCErrorCount) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_CacheMetricsTotal(json_t *CsJson, char *Key, RedfishProcessorMetrics_V1_3_1_CacheMetricsTotal_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // CurrentPeriod
  if (CS_To_JSON_CacheMetricsTotalCurrentPeriod(CsJson, "CurrentPeriod", CSPtr->CurrentPeriod) != RedfishCS_status_success) {goto Error;}

  // LifeTime
  if (CS_To_JSON_CacheMetricsTotalLifeTime(CsJson, "LifeTime", CSPtr->LifeTime) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_CoreMetricsCStateResidency(json_t *CsJson, char *Key, RedfishProcessorMetrics_V1_3_1_CStateResidency_Array_CS *CSPtr)
{
  json_t *ArrayJson;
  json_t *ArrayMember;
  RedfishProcessorMetrics_V1_3_1_CStateResidency_Array_CS *NextArray;
  RedfishProcessorMetrics_V1_3_1_CStateResidency_CS *NextArrayItem;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  ArrayJson = json_array();
  if (ArrayJson == NULL) {
    return RedfishCS_status_unsupported;
  }
  NextArray = CSPtr;
  do {
    ArrayMember = json_object();
    if (ArrayMember == NULL) {
      return RedfishCS_status_unsupported;
    }

    NextArrayItem = NextArray->ArrayValue;
    // Level 
    if (InsertJsonStringObj (ArrayMember, "Level", NextArrayItem->Level) != RedfishCS_status_success) {goto Error;}

    // ResidencyPercent 
    if (InsertJsonInt64Obj (ArrayMember, "ResidencyPercent", NextArrayItem->ResidencyPercent) != RedfishCS_status_success) {goto Error;}

    if (json_array_append_new (ArrayJson, ArrayMember) != 0) {goto Error;}
    NextArray = NextArray->Next;
  } while (NextArray != NULL);
  json_object_set_new (CsJson, Key, ArrayJson);

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_CoreMetricsCoreCache(json_t *CsJson, char *Key, RedfishProcessorMetrics_V1_3_1_CacheMetrics_Array_CS *CSPtr)
{
  json_t *ArrayJson;
  json_t *ArrayMember;
  RedfishProcessorMetrics_V1_3_1_CacheMetrics_Array_CS *NextArray;
  RedfishProcessorMetrics_V1_3_1_CacheMetrics_CS *NextArrayItem;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  ArrayJson = json_array();
  if (ArrayJson == NULL) {
    return RedfishCS_status_unsupported;
  }
  NextArray = CSPtr;
  do {
    ArrayMember = json_object();
    if (ArrayMember == NULL) {
      return RedfishCS_status_unsupported;
    }

    NextArrayItem = NextArray->ArrayValue;
    // CacheMiss 
    if (InsertJsonInt64Obj (ArrayMember, "CacheMiss", NextArrayItem->CacheMiss) != RedfishCS_status_success) {goto Error;}

    // CacheMissesPerInstruction 
    if (InsertJsonInt64Obj (ArrayMember, "CacheMissesPerInstruction", NextArrayItem->CacheMissesPerInstruction) != RedfishCS_status_success) {goto Error;}

    // HitRatio 
    if (InsertJsonInt64Obj (ArrayMember, "HitRatio", NextArrayItem->HitRatio) != RedfishCS_status_success) {goto Error;}

    // Level 
    if (InsertJsonStringObj (ArrayMember, "Level", NextArrayItem->Level) != RedfishCS_status_success) {goto Error;}

    // OccupancyBytes 
    if (InsertJsonInt64Obj (ArrayMember, "OccupancyBytes", NextArrayItem->OccupancyBytes) != RedfishCS_status_success) {goto Error;}

    // OccupancyPercent 
    if (InsertJsonInt64Obj (ArrayMember, "OccupancyPercent", NextArrayItem->OccupancyPercent) != RedfishCS_status_success) {goto Error;}

    if (json_array_append_new (ArrayJson, ArrayMember) != 0) {goto Error;}
    NextArray = NextArray->Next;
  } while (NextArray != NULL);
  json_object_set_new (CsJson, Key, ArrayJson);

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_CoreMetrics(json_t *CsJson, char *Key, RedfishProcessorMetrics_V1_3_1_CoreMetrics_Array_CS *CSPtr)
{
  json_t *ArrayJson;
  json_t *ArrayMember;
  RedfishProcessorMetrics_V1_3_1_CoreMetrics_Array_CS *NextArray;
  RedfishProcessorMetrics_V1_3_1_CoreMetrics_CS *NextArrayItem;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  ArrayJson = json_array();
  if (ArrayJson == NULL) {
    return RedfishCS_status_unsupported;
  }
  NextArray = CSPtr;
  do {
    ArrayMember = json_object();
    if (ArrayMember == NULL) {
      return RedfishCS_status_unsupported;
    }

    NextArrayItem = NextArray->ArrayValue;
    // CStateResidency
    if (CS_To_JSON_CoreMetricsCStateResidency(ArrayMember, "CStateResidency", NextArrayItem->CStateResidency) != RedfishCS_status_success) {goto Error;}

    // CoreCache
    if (CS_To_JSON_CoreMetricsCoreCache(ArrayMember, "CoreCache", NextArrayItem->CoreCache) != RedfishCS_status_success) {goto Error;}

    // CoreId 
    if (InsertJsonStringObj (ArrayMember, "CoreId", NextArrayItem->CoreId) != RedfishCS_status_success) {goto Error;}

    // IOStallCount 
    if (InsertJsonInt64Obj (ArrayMember, "IOStallCount", NextArrayItem->IOStallCount) != RedfishCS_status_success) {goto Error;}

    // InstructionsPerCycle 
    if (InsertJsonInt64Obj (ArrayMember, "InstructionsPerCycle", NextArrayItem->InstructionsPerCycle) != RedfishCS_status_success) {goto Error;}

    // MemoryStallCount 
    if (InsertJsonInt64Obj (ArrayMember, "MemoryStallCount", NextArrayItem->MemoryStallCount) != RedfishCS_status_success) {goto Error;}

    // UnhaltedCycles 
    if (InsertJsonInt64Obj (ArrayMember, "UnhaltedCycles", NextArrayItem->UnhaltedCycles) != RedfishCS_status_success) {goto Error;}

    if (json_array_append_new (ArrayJson, ArrayMember) != 0) {goto Error;}
    NextArray = NextArray->Next;
  } while (NextArray != NULL);
  json_object_set_new (CsJson, Key, ArrayJson);

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_Oem(json_t *CsJson, char *Key, RedfishResource_Oem_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // Check if this is RedfishCS_Type_CS_EmptyProp.
  CsEmptyPropLinkToJson(CsJson, Key, &CSPtr->Prop);
  // No JSON property for this structure.
  return RedfishCS_status_success;
}

//
// C structure to JSON for ProcessorMetrics.V1_3_1.ProcessorMetrics
//
RedfishCS_status CS_To_ProcessorMetrics_V1_3_1_JSON(RedfishProcessorMetrics_V1_3_1_ProcessorMetrics_CS *CSPtr, RedfishCS_char **JsonText)
{
  json_t  *CsJson;

  if (CSPtr == NULL || JsonText == NULL || CSPtr->Header.ResourceType != RedfishCS_Type_CS) {
    return RedfishCS_status_invalid_parameter;
  }
  CsJson = json_object();
  if (CsJson == NULL) {
    return RedfishCS_status_unsupported;
  }
  // Actions
  if (CS_To_JSON_Actions(CsJson, "Actions", CSPtr->Actions) != RedfishCS_status_success) {goto Error;}

  // AverageFrequencyMHz 
  if (InsertJsonInt64Obj (CsJson, "AverageFrequencyMHz", CSPtr->AverageFrequencyMHz) != RedfishCS_status_success) {goto Error;}

  // BandwidthPercent 
  if (InsertJsonInt64Obj (CsJson, "BandwidthPercent", CSPtr->BandwidthPercent) != RedfishCS_status_success) {goto Error;}

  // Cache
  if (CS_To_JSON_Cache(CsJson, "Cache", CSPtr->Cache) != RedfishCS_status_success) {goto Error;}

  // CacheMetricsTotal
  if (CS_To_JSON_CacheMetricsTotal(CsJson, "CacheMetricsTotal", CSPtr->CacheMetricsTotal) != RedfishCS_status_success) {goto Error;}

  // ConsumedPowerWatt 
  if (InsertJsonInt64Obj (CsJson, "ConsumedPowerWatt", CSPtr->ConsumedPowerWatt) != RedfishCS_status_success) {goto Error;}

  // CoreMetrics
  if (CS_To_JSON_CoreMetrics(CsJson, "CoreMetrics", CSPtr->CoreMetrics) != RedfishCS_status_success) {goto Error;}

  // CoreVoltage 
  if (InsertJsonLinkObj (CsJson, "CoreVoltage", &CSPtr->CoreVoltage) != RedfishCS_status_success) {goto Error;}

  // Description 
  if (InsertJsonStringObj (CsJson, "Description", CSPtr->Description) != RedfishCS_status_success) {goto Error;}

  // FrequencyRatio 
  if (InsertJsonInt64Obj (CsJson, "FrequencyRatio", CSPtr->FrequencyRatio) != RedfishCS_status_success) {goto Error;}

  // Id 
  if (InsertJsonStringObj (CsJson, "Id", CSPtr->Id) != RedfishCS_status_success) {goto Error;}

  // KernelPercent 
  if (InsertJsonInt64Obj (CsJson, "KernelPercent", CSPtr->KernelPercent) != RedfishCS_status_success) {goto Error;}

  // LocalMemoryBandwidthBytes 
  if (InsertJsonInt64Obj (CsJson, "LocalMemoryBandwidthBytes", CSPtr->LocalMemoryBandwidthBytes) != RedfishCS_status_success) {goto Error;}

  // Name 
  if (InsertJsonStringObj (CsJson, "Name", CSPtr->Name) != RedfishCS_status_success) {goto Error;}

  // Oem
  if (CS_To_JSON_Oem(CsJson, "Oem", CSPtr->Oem) != RedfishCS_status_success) {goto Error;}

  // OperatingSpeedMHz 
  if (InsertJsonInt64Obj (CsJson, "OperatingSpeedMHz", CSPtr->OperatingSpeedMHz) != RedfishCS_status_success) {goto Error;}

  // RemoteMemoryBandwidthBytes 
  if (InsertJsonInt64Obj (CsJson, "RemoteMemoryBandwidthBytes", CSPtr->RemoteMemoryBandwidthBytes) != RedfishCS_status_success) {goto Error;}

  // TemperatureCelsius 
  if (InsertJsonInt64Obj (CsJson, "TemperatureCelsius", CSPtr->TemperatureCelsius) != RedfishCS_status_success) {goto Error;}

  // ThrottlingCelsius 
  if (InsertJsonInt64Obj (CsJson, "ThrottlingCelsius", CSPtr->ThrottlingCelsius) != RedfishCS_status_success) {goto Error;}

  // UserPercent 
  if (InsertJsonInt64Obj (CsJson, "UserPercent", CSPtr->UserPercent) != RedfishCS_status_success) {goto Error;}

  // @odata.context 
  if (InsertJsonStringObj (CsJson, "@odata.context", CSPtr->odata_context) != RedfishCS_status_success) {goto Error;}

  // @odata.etag 
  if (InsertJsonStringObj (CsJson, "@odata.etag", CSPtr->odata_etag) != RedfishCS_status_success) {goto Error;}

  // @odata.id 
  if (InsertJsonStringObj (CsJson, "@odata.id", CSPtr->odata_id) != RedfishCS_status_success) {goto Error;}

  // @odata.type 
  if (InsertJsonStringObj (CsJson, "@odata.type", CSPtr->odata_type) != RedfishCS_status_success) {goto Error;}

  *JsonText = (RedfishCS_char *)json_dumps(CsJson, JSON_INDENT(2 * 1) | JSON_ENSURE_ASCII);
  json_decref(CsJson);
  return RedfishCS_status_success;
Error:;
  json_decref(CsJson);
  return RedfishCS_status_unsupported;
}

//
// Destory C Structure for ProcessorMetrics.V1_3_1.ProcessorMetrics
//
RedfishCS_status DestroyProcessorMetrics_V1_3_1_CS(RedfishProcessorMetrics_V1_3_1_ProcessorMetrics_CS *CSPtr)
{
  RedfishCS_status Status;

  Status = DestoryCsMemory ((RedfishCS_void *)CSPtr);
  return Status;
}

//
// Destory JSON text for ProcessorMetrics.V1_3_1.ProcessorMetrics
//
RedfishCS_status DestroyProcessorMetrics_V1_3_1_Json(RedfishCS_char *JsonText)
{
  free ((RedfishCS_void *)JsonText);
  return RedfishCS_status_success;
}

//
//Generate C structure for ProcessorMetrics.V1_3_1.ProcessorMetrics
//
RedfishCS_status
Json_ProcessorMetrics_V1_3_1_To_CS(RedfishCS_char *JsonRawText, RedfishProcessorMetrics_V1_3_1_ProcessorMetrics_CS **ReturnedCs)
{
  RedfishCS_status  Status;
  json_t *JsonObj;
  RedfishProcessorMetrics_V1_3_1_ProcessorMetrics_CS *Cs;

  Status = CreateJsonPayloadAndCs (JsonRawText, "ProcessorMetrics", "v1_3_1", "ProcessorMetrics", &JsonObj, (RedfishCS_void **)&Cs, sizeof (RedfishProcessorMetrics_V1_3_1_ProcessorMetrics_CS));
  if (Status != RedfishCS_status_success) {
    goto Error;
  }

  // @odata.context
  Status = GetRedfishPropertyStr (Cs, JsonObj, "@odata.context", &Cs->odata_context);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // @odata.etag
  Status = GetRedfishPropertyStr (Cs, JsonObj, "@odata.etag", &Cs->odata_etag);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // @odata.id
  Status = GetRedfishPropertyStr (Cs, JsonObj, "@odata.id", &Cs->odata_id);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){goto Error;}}

  // @odata.type
  Status = GetRedfishPropertyStr (Cs, JsonObj, "@odata.type", &Cs->odata_type);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){goto Error;}}

  // Actions
  Status = GenActionsCs (Cs, JsonObj, "Actions", &Cs->Actions);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // AverageFrequencyMHz
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "AverageFrequencyMHz", &Cs->AverageFrequencyMHz);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // BandwidthPercent
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "BandwidthPercent", &Cs->BandwidthPercent);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Cache
  Status = GenCacheMetrics_ArrayCs (Cs, JsonObj, "Cache", &Cs->Cache);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // CacheMetricsTotal
  Status = GenCacheMetricsTotalCs (Cs, JsonObj, "CacheMetricsTotal", &Cs->CacheMetricsTotal);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ConsumedPowerWatt
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "ConsumedPowerWatt", &Cs->ConsumedPowerWatt);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // CoreMetrics
  Status = GenCoreMetrics_ArrayCs (Cs, JsonObj, "CoreMetrics", &Cs->CoreMetrics);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // CoreVoltage
  InitializeLinkHead (&Cs->CoreVoltage);
  Status = CreateCsUriOrJsonByNode (Cs, JsonObj, "CoreVoltage", Cs->Header.ThisUri, &Cs->CoreVoltage);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Description
  Status = GetRedfishPropertyStr (Cs, JsonObj, "Description", &Cs->Description);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // FrequencyRatio
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "FrequencyRatio", &Cs->FrequencyRatio);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Id
  Status = GetRedfishPropertyStr (Cs, JsonObj, "Id", &Cs->Id);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){goto Error;}}

  // KernelPercent
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "KernelPercent", &Cs->KernelPercent);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // LocalMemoryBandwidthBytes
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "LocalMemoryBandwidthBytes", &Cs->LocalMemoryBandwidthBytes);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Name
  Status = GetRedfishPropertyStr (Cs, JsonObj, "Name", &Cs->Name);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){goto Error;}}

  // Oem
  Status = GenOemCs (Cs, JsonObj, "Oem", &Cs->Oem);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // OperatingSpeedMHz
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "OperatingSpeedMHz", &Cs->OperatingSpeedMHz);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // RemoteMemoryBandwidthBytes
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "RemoteMemoryBandwidthBytes", &Cs->RemoteMemoryBandwidthBytes);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // TemperatureCelsius
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "TemperatureCelsius", &Cs->TemperatureCelsius);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ThrottlingCelsius
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "ThrottlingCelsius", &Cs->ThrottlingCelsius);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // UserPercent
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "UserPercent", &Cs->UserPercent);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  json_decref(JsonObj);
  *ReturnedCs = Cs;
  return RedfishCS_status_success;
Error:;
  json_decref(JsonObj);
  DestroyProcessorMetrics_V1_3_1_CS (Cs);
  return Status;
}

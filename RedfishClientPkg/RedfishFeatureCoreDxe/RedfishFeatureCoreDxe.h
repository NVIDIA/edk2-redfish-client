/** @file
  Definitions of RedfishFeatureCoreDxe

  (C) Copyright 2021 Hewlett Packard Enterprise Development LP<BR>

  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#ifndef EDKII_REDFISH_FEATURE_CORE_DXE_H_
#define EDKII_REDFISH_FEATURE_CORE_DXE_H_

#include <Protocol/EdkIIRedfishFeature.h>

#include <Base.h>
#include <Library/BaseLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/DebugLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Library/PrintLib.h>
#include <Library/UefiBootServicesTableLib.h>

#define MaxNodeNameLength             64
#define NodeSeperator                 L'/'
#define NodeIsCollectionLeftBracket   '{'
#define NodeIsCollectionRightBracket  '}'

typedef struct _REDFISH_FEATURE_INTERNAL_DATA REDFISH_FEATURE_INTERNAL_DATA;
struct _REDFISH_FEATURE_INTERNAL_DATA {
  REDFISH_FEATURE_INTERNAL_DATA    *SiblingList;         ///< Next same level in hierarchy of resource URI.
  REDFISH_FEATURE_INTERNAL_DATA    *ChildList;           ///< Next level in hierarchy of resource URI.
  EFI_STRING                       NodeName;             ///< Name of the node in hierarchy of resource URI.
  REDFISH_FEATURE_CALLBACK         Callback;             ///< Callback function of Redfish feature driver.
  VOID                             *Context;             ///< Context of feature driver.
  FEATURE_RETURNED_INFORMATION     *ReturnedInformation; ///< Information returned from Redfish feature driver.
  UINT32                           Flags;
};

#define REDFISH_FEATURE_INTERNAL_DATA_IS_COLLECTION  0x00000001

typedef struct {
  EDKII_REDFISH_FEATURE_PROTOCOL    *This;
  FEATURE_CALLBACK_ACTION           Action;
} REDFISH_FEATURE_STARTUP_CONTEXT;
#endif

/** @file
  This file defines the EFI Redfish C Structure Interpreter for Storage v1_7_4

  (C) Copyright 2019-2021 Hewlett Packard Enterprise Development LP<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

  Auto-generated file by Redfish Schema C Structure Generator.
  https://github.com/DMTF/Redfish-Schema-C-Struct-Generator
  
  Copyright Notice:
  Copyright 2019-2021 Distributed Management Task Force, Inc. All rights reserved.
  License: BSD 3-Clause License. For full text see link: https://github.com/DMTF/Redfish-JSON-C-Struct-Converter/blob/master/LICENSE.md  

**/

#ifndef EFI_REDFISH_INTERP_STORAGE_V1_7_4_H__
#define EFI_REDFISH_INTERP_STORAGE_V1_7_4_H__

#include <Uefi.h>
#include <Protocol/RestJsonStructure.h>
#include "ConverterLib/edk2library/Storage/v1_7_4/Redfish_Storage_v1_7_4_CS.h"
//
// EFI structure of Redfish Storage v1_7_4
//
typedef struct _EFI_REDFISH_STORAGE_V1_7_4 {
  EFI_REST_JSON_STRUCTURE_HEADER Header;
  EFI_REDFISH_STORAGE_V1_7_4_CS *Storage;
} EFI_REDFISH_STORAGE_V1_7_4;

#endif

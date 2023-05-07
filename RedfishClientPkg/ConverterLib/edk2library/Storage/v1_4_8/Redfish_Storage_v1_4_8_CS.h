//
// Auto-generated file by Redfish Schema C Structure Generator.
// https://github.com/DMTF/Redfish-Schema-C-Struct-Generator.
//
//  (C) Copyright 2019-2021 Hewlett Packard Enterprise Development LP<BR>
//  SPDX-License-Identifier: BSD-2-Clause-Patent
//
// Auto-generated file by Redfish Schema C Structure Generator.
// https://github.com/DMTF/Redfish-Schema-C-Struct-Generator.
// Copyright Notice:
// Copyright 2019-2021 Distributed Management Task Force, Inc. All rights reserved.
// License: BSD 3-Clause License. For full text see link: https://github.com/DMTF/Redfish-JSON-C-Struct-Converter/blob/master/LICENSE.md
//

#ifndef EFI_REDFISHSTORAGE_V1_4_8_CSTRUCT_H_
#define EFI_REDFISHSTORAGE_V1_4_8_CSTRUCT_H_

#include "../../../include/RedfishDataTypeDef.h"
#include "../../../include/Redfish_Storage_v1_4_8_CS.h"

typedef RedfishStorage_V1_4_8_Storage_CS EFI_REDFISH_STORAGE_V1_4_8_CS;

RedfishCS_status
Json_Storage_V1_4_8_To_CS (RedfishCS_char *JsonRawText, EFI_REDFISH_STORAGE_V1_4_8_CS **ReturnedCs);

RedfishCS_status
CS_To_Storage_V1_4_8_JSON (EFI_REDFISH_STORAGE_V1_4_8_CS *CSPtr, RedfishCS_char **JsonText);

RedfishCS_status
DestroyStorage_V1_4_8_CS (EFI_REDFISH_STORAGE_V1_4_8_CS *CSPtr);

RedfishCS_status
DestroyStorage_V1_4_8_Json (RedfishCS_char *JsonText);

#endif

//
// Auto-generated file by Redfish Schema C Structure Generator.
// https://github.com/DMTF/Redfish-Schema-C-Struct-Generator.
//
//  (C) Copyright 2019-2022 Hewlett Packard Enterprise Development LP<BR>
//  Copyright (c) 2023-2024, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
//  Copyright (C) 2024 Advanced Micro Devices, Inc. All rights reserved.<BR>
//  SPDX-License-Identifier: BSD-2-Clause-Patent
//
// Auto-generated file by Redfish Schema C Structure Generator.
// https://github.com/DMTF/Redfish-Schema-C-Struct-Generator.
// Copyright Notice:
// Copyright 2019-2024 Distributed Management Task Force, Inc. All rights reserved.
// License: BSD 3-Clause License. For full text see link: https://github.com/DMTF/Redfish-JSON-C-Struct-Converter/blob/master/LICENSE.md
//

#ifndef EFI_REDFISHVIRTUALMEDIA_V1_3_1_CSTRUCT_H_
#define EFI_REDFISHVIRTUALMEDIA_V1_3_1_CSTRUCT_H_

#include "../../../include/RedfishDataTypeDef.h"
#include "../../../include/Redfish_VirtualMedia_v1_3_1_CS.h"

typedef RedfishVirtualMedia_V1_3_1_VirtualMedia_CS EFI_REDFISH_VIRTUALMEDIA_V1_3_1_CS;

RedfishCS_status
Json_VirtualMedia_V1_3_1_To_CS (RedfishCS_char *JsonRawText, EFI_REDFISH_VIRTUALMEDIA_V1_3_1_CS **ReturnedCs);

RedfishCS_status
CS_To_VirtualMedia_V1_3_1_JSON (EFI_REDFISH_VIRTUALMEDIA_V1_3_1_CS *CSPtr, RedfishCS_char **JsonText);

RedfishCS_status
DestroyVirtualMedia_V1_3_1_CS (EFI_REDFISH_VIRTUALMEDIA_V1_3_1_CS *CSPtr);

RedfishCS_status
DestroyVirtualMedia_V1_3_1_Json (RedfishCS_char *JsonText);

#endif

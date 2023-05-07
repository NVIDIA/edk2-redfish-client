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

#ifndef EFI_REDFISHENDPOINT_V1_3_7_CSTRUCT_H_
#define EFI_REDFISHENDPOINT_V1_3_7_CSTRUCT_H_

#include "../../../include/RedfishDataTypeDef.h"
#include "../../../include/Redfish_Endpoint_v1_3_7_CS.h"

typedef RedfishEndpoint_V1_3_7_Endpoint_CS EFI_REDFISH_ENDPOINT_V1_3_7_CS;

RedfishCS_status
Json_Endpoint_V1_3_7_To_CS (RedfishCS_char *JsonRawText, EFI_REDFISH_ENDPOINT_V1_3_7_CS **ReturnedCs);

RedfishCS_status
CS_To_Endpoint_V1_3_7_JSON (EFI_REDFISH_ENDPOINT_V1_3_7_CS *CSPtr, RedfishCS_char **JsonText);

RedfishCS_status
DestroyEndpoint_V1_3_7_CS (EFI_REDFISH_ENDPOINT_V1_3_7_CS *CSPtr);

RedfishCS_status
DestroyEndpoint_V1_3_7_Json (RedfishCS_char *JsonText);

#endif

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

#ifndef EFI_REDFISHLOGENTRY_V1_10_0_CSTRUCT_H_
#define EFI_REDFISHLOGENTRY_V1_10_0_CSTRUCT_H_

#include "../../../include/RedfishDataTypeDef.h"
#include "../../../include/Redfish_LogEntry_v1_10_0_CS.h"

typedef RedfishLogEntry_V1_10_0_LogEntry_CS EFI_REDFISH_LOGENTRY_V1_10_0_CS;

RedfishCS_status
Json_LogEntry_V1_10_0_To_CS (RedfishCS_char *JsonRawText, EFI_REDFISH_LOGENTRY_V1_10_0_CS **ReturnedCs);

RedfishCS_status
CS_To_LogEntry_V1_10_0_JSON (EFI_REDFISH_LOGENTRY_V1_10_0_CS *CSPtr, RedfishCS_char **JsonText);

RedfishCS_status
DestroyLogEntry_V1_10_0_CS (EFI_REDFISH_LOGENTRY_V1_10_0_CS *CSPtr);

RedfishCS_status
DestroyLogEntry_V1_10_0_Json (RedfishCS_char *JsonText);

#endif

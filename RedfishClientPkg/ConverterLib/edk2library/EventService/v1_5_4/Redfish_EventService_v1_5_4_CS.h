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

#ifndef EFI_REDFISHEVENTSERVICE_V1_5_4_CSTRUCT_H_
#define EFI_REDFISHEVENTSERVICE_V1_5_4_CSTRUCT_H_

#include "../../../include/RedfishDataTypeDef.h"
#include "../../../include/Redfish_EventService_v1_5_4_CS.h"

typedef RedfishEventService_V1_5_4_EventService_CS EFI_REDFISH_EVENTSERVICE_V1_5_4_CS;

RedfishCS_status
Json_EventService_V1_5_4_To_CS (RedfishCS_char *JsonRawText, EFI_REDFISH_EVENTSERVICE_V1_5_4_CS **ReturnedCs);

RedfishCS_status
CS_To_EventService_V1_5_4_JSON (EFI_REDFISH_EVENTSERVICE_V1_5_4_CS *CSPtr, RedfishCS_char **JsonText);

RedfishCS_status
DestroyEventService_V1_5_4_CS (EFI_REDFISH_EVENTSERVICE_V1_5_4_CS *CSPtr);

RedfishCS_status
DestroyEventService_V1_5_4_Json (RedfishCS_char *JsonText);

#endif

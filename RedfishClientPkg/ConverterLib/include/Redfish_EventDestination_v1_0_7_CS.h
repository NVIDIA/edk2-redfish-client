//
// Auto-generated file by Redfish Schema C Structure Generator.
// https://github.com/DMTF/Redfish-Schema-C-Struct-Generator.
//
//  (C) Copyright 2019-2022 Hewlett Packard Enterprise Development LP<BR>
//  Copyright (c) 2023-2024, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
//  Copyright (C) 2024 Advanced Micro Devices, Inc. All rights reserved.<BR>
//
// Copyright Notice:
// Copyright 2019-2024 Distributed Management Task Force, Inc. All rights reserved.
// License: BSD 3-Clause License. For full text see link: https://github.com/DMTF/Redfish-JSON-C-Struct-Converter/blob/master/LICENSE.md
//

#ifndef RedfishEventdestination_V1_0_7_CSTRUCT_H_
#define RedfishEventdestination_V1_0_7_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishEventDestination_V1_0_7_HttpHeaderProperty_Array_CS RedfishEventDestination_V1_0_7_HttpHeaderProperty_Array_CS;
typedef struct _RedfishEventDestination_V1_0_7_EventDestination_CS RedfishEventDestination_V1_0_7_EventDestination_CS;
typedef struct _RedfishEventDestination_V1_0_7_HttpHeaderProperty_CS RedfishEventDestination_V1_0_7_HttpHeaderProperty_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

//
// The value of the HTTP header is the property value.  The header name is the
// property name.
//
typedef struct _RedfishEventDestination_V1_0_7_HttpHeaderProperty_CS {
    RedfishCS_Link    Prop;
} RedfishEventDestination_V1_0_7_HttpHeaderProperty_CS;

//
// The OEM extension.
//
#ifndef RedfishResource_Oem_CS_
#define RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS {
    RedfishCS_Link    Prop;
} RedfishResource_Oem_CS;
#endif

//
// An Event Destination desribes the target of an event subscription, including
// the types of events subscribed and context to provide to the target in the
// Event payload.
//
typedef struct _RedfishEventDestination_V1_0_7_EventDestination_CS {
    RedfishCS_Header                                              Header;
    RedfishCS_char                                                *odata_context;
    RedfishCS_char                                                *odata_etag;  
    RedfishCS_char                                                *odata_id;    
    RedfishCS_char                                                *odata_type;  
    RedfishCS_char                                                *Context;         // A client-supplied string that
                                                                                    // is stored with the event
                                                                                    // destination subscription.
    RedfishCS_char                                                *Description; 
    RedfishCS_char                                                *Destination;     // The URI of the destination
                                                                                    // Event Service.
    RedfishCS_char_Array                                          *EventTypes;      // This property contains the
                                                                                    // types of events that will be
                                                                                    // sent to the destination.
    RedfishEventDestination_V1_0_7_HttpHeaderProperty_Array_CS    *HttpHeaders;     // This is for setting HTTP
                                                                                    // headers, such as authorization
                                                                                    // information.  This object will
                                                                                    // be null or an empty array on a
                                                                                    // GET.  An empty array is the
                                                                                    // preferred return value on GET.
    RedfishCS_char                                                *Id;          
    RedfishCS_char                                                *Name;        
    RedfishResource_Oem_CS                                        *Oem;             // This is the
                                                                                    // manufacturer/provider specific
                                                                                    // extension moniker used to
                                                                                    // divide the Oem object into
                                                                                    // sections.
    RedfishCS_char                                                *Protocol;        // The protocol type of the event
                                                                                    // connection.
} RedfishEventDestination_V1_0_7_EventDestination_CS;

typedef struct _RedfishEventDestination_V1_0_7_HttpHeaderProperty_Array_CS  {
    RedfishEventDestination_V1_0_7_HttpHeaderProperty_Array_CS    *Next;
    RedfishEventDestination_V1_0_7_HttpHeaderProperty_CS    *ArrayValue;
} RedfishEventDestination_V1_0_7_HttpHeaderProperty_Array_CS;

RedfishCS_status
Json_EventDestination_V1_0_7_To_CS (char *JsonRawText, RedfishEventDestination_V1_0_7_EventDestination_CS **ReturnedCS);

RedfishCS_status
CS_To_EventDestination_V1_0_7_JSON (RedfishEventDestination_V1_0_7_EventDestination_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyEventDestination_V1_0_7_CS (RedfishEventDestination_V1_0_7_EventDestination_CS *CSPtr);

RedfishCS_status
DestroyEventDestination_V1_0_7_Json (RedfishCS_char *JsonText);

#endif

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

#ifndef RedfishActioninfo_V1_0_2_CSTRUCT_H_
#define RedfishActioninfo_V1_0_2_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishActionInfo_V1_0_2_Parameters_Array_CS RedfishActionInfo_V1_0_2_Parameters_Array_CS;
typedef struct _RedfishActionInfo_V1_0_2_ActionInfo_CS RedfishActionInfo_V1_0_2_ActionInfo_CS;
typedef struct _RedfishActionInfo_V1_0_2_Parameters_CS RedfishActionInfo_V1_0_2_Parameters_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

//
// A parameter associated with the specified Redfish Action.
//
typedef struct _RedfishActionInfo_V1_0_2_Parameters_CS {
    RedfishCS_char_Array    *AllowableValues;    // A list of values for this
                                                // parameter supported by this
                                                // Action target.
    RedfishCS_char          *DataType;          // The JSON property type used
                                                // for this parameter.
    RedfishCS_char          *Name;              // The name of the parameter for
                                                // this Action.
    RedfishCS_char          *ObjectDataType;    // The OData Type of an object-
                                                // based parameter.
    RedfishCS_bool          *Required;          // Indicates whether the
                                                // parameter is required to
                                                // perform this Action.
} RedfishActionInfo_V1_0_2_Parameters_CS;

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
// ActionInfo describes the parameters and other information necessary to perform
// a Redfish Action to a particular Action target.  As parameter support may
// differ between implementations and even among instances of a resource, this
// data can be used to ensure Action requests from applications contain supported
// parameters.
//
typedef struct _RedfishActionInfo_V1_0_2_ActionInfo_CS {
    RedfishCS_Header                                Header;
    RedfishCS_char                                  *odata_context;
    RedfishCS_char                                  *odata_id;    
    RedfishCS_char                                  *odata_type;  
    RedfishCS_char                                  *Description; 
    RedfishCS_char                                  *Id;          
    RedfishCS_char                                  *Name;        
    RedfishResource_Oem_CS                          *Oem;             // This is the
                                                                      // manufacturer/provider specific
                                                                      // extension moniker used to
                                                                      // divide the Oem object into
                                                                      // sections.
    RedfishActionInfo_V1_0_2_Parameters_Array_CS    *Parameters;      // The parameters associated with
                                                                      // the specified Redfish Action.
} RedfishActionInfo_V1_0_2_ActionInfo_CS;

typedef struct _RedfishActionInfo_V1_0_2_Parameters_Array_CS  {
    RedfishActionInfo_V1_0_2_Parameters_Array_CS    *Next;
    RedfishActionInfo_V1_0_2_Parameters_CS    *ArrayValue;
} RedfishActionInfo_V1_0_2_Parameters_Array_CS;

RedfishCS_status
Json_ActionInfo_V1_0_2_To_CS (char *JsonRawText, RedfishActionInfo_V1_0_2_ActionInfo_CS **ReturnedCS);

RedfishCS_status
CS_To_ActionInfo_V1_0_2_JSON (RedfishActionInfo_V1_0_2_ActionInfo_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyActionInfo_V1_0_2_CS (RedfishActionInfo_V1_0_2_ActionInfo_CS *CSPtr);

RedfishCS_status
DestroyActionInfo_V1_0_2_Json (RedfishCS_char *JsonText);

#endif

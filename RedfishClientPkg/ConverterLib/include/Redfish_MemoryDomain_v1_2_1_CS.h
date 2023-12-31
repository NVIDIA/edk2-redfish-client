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

#ifndef RedfishMemorydomain_V1_2_1_CSTRUCT_H_
#define RedfishMemorydomain_V1_2_1_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishMemoryDomain_V1_2_1_MemorySet_Array_CS RedfishMemoryDomain_V1_2_1_MemorySet_Array_CS;
typedef struct _RedfishMemoryDomain_V1_2_1_Actions_CS RedfishMemoryDomain_V1_2_1_Actions_CS;
typedef struct _RedfishMemoryDomain_V1_2_1_MemoryDomain_CS RedfishMemoryDomain_V1_2_1_MemoryDomain_CS;
typedef struct _RedfishMemoryDomain_V1_2_1_MemorySet_CS RedfishMemoryDomain_V1_2_1_MemorySet_CS;
typedef struct _RedfishMemoryDomain_V1_2_1_OemActions_CS RedfishMemoryDomain_V1_2_1_OemActions_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

//
// The available actions for this resource.
//
typedef struct _RedfishMemoryDomain_V1_2_1_Actions_CS {
    RedfishMemoryDomain_V1_2_1_OemActions_CS    *Oem;    // This property contains the
                                                        // available OEM specific actions
                                                        // for this resource.
} RedfishMemoryDomain_V1_2_1_Actions_CS;

//
// This is the interleave sets for a memory chunk.
//
typedef struct _RedfishMemoryDomain_V1_2_1_MemorySet_CS {
    RedfishCS_Link     MemorySet;               // This is the collection of
                                                // memory for a particular
                                                // interleave set.
    RedfishCS_int64    *MemorySetodata_count;
} RedfishMemoryDomain_V1_2_1_MemorySet_CS;

//
// The available OEM specific actions for this resource.
//
typedef struct _RedfishMemoryDomain_V1_2_1_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishMemoryDomain_V1_2_1_OemActions_CS;

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
// This is the schema definition of a Memory Domain and its configuration. Memory
// Domains are used to indicate to the client which Memory (DIMMs) can be grouped
// together in Memory Chunks to form interleave sets or otherwise grouped
// together.
//
typedef struct _RedfishMemoryDomain_V1_2_1_MemoryDomain_CS {
    RedfishCS_Header                                 Header;
    RedfishCS_char                                   *odata_context;           
    RedfishCS_char                                   *odata_etag;              
    RedfishCS_char                                   *odata_id;                
    RedfishCS_char                                   *odata_type;              
    RedfishMemoryDomain_V1_2_1_Actions_CS            *Actions;                     // The available actions for this
                                                                                   // resource.
    RedfishCS_bool                                   *AllowsBlockProvisioning;     // Indicates if this Memory
                                                                                   // Domain supports the
                                                                                   // provisioning of blocks of
                                                                                   // memory.
    RedfishCS_bool                                   *AllowsMemoryChunkCreation;    // Indicates if this Memory
                                                                                   // Domain supports the creation
                                                                                   // of Memory Chunks.
    RedfishCS_bool                                   *AllowsMirroring;             // Indicates if this Memory
                                                                                   // Domain supports the creation
                                                                                   // of Memory Chunks with
                                                                                   // mirroring enabled.
    RedfishCS_bool                                   *AllowsSparing;               // Indicates if this Memory
                                                                                   // Domain supports the creation
                                                                                   // of Memory Chunks with sparing
                                                                                   // enabled.
    RedfishCS_char                                   *Description;             
    RedfishCS_char                                   *Id;                      
    RedfishMemoryDomain_V1_2_1_MemorySet_Array_CS    *InterleavableMemorySets;     // This is the interleave sets
                                                                                   // for the memory chunk.
    RedfishCS_Link                                   MemoryChunks;                 // A reference to the collection
                                                                                   // of Memory Chunks associated
                                                                                   // with this Memory Domain.
    RedfishCS_char                                   *Name;                    
    RedfishResource_Oem_CS                           *Oem;                         // This is the
                                                                                   // manufacturer/provider specific
                                                                                   // extension moniker used to
                                                                                   // divide the Oem object into
                                                                                   // sections.
} RedfishMemoryDomain_V1_2_1_MemoryDomain_CS;

typedef struct _RedfishMemoryDomain_V1_2_1_MemorySet_Array_CS  {
    RedfishMemoryDomain_V1_2_1_MemorySet_Array_CS    *Next;
    RedfishMemoryDomain_V1_2_1_MemorySet_CS    *ArrayValue;
} RedfishMemoryDomain_V1_2_1_MemorySet_Array_CS;

RedfishCS_status
Json_MemoryDomain_V1_2_1_To_CS (char *JsonRawText, RedfishMemoryDomain_V1_2_1_MemoryDomain_CS **ReturnedCS);

RedfishCS_status
CS_To_MemoryDomain_V1_2_1_JSON (RedfishMemoryDomain_V1_2_1_MemoryDomain_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyMemoryDomain_V1_2_1_CS (RedfishMemoryDomain_V1_2_1_MemoryDomain_CS *CSPtr);

RedfishCS_status
DestroyMemoryDomain_V1_2_1_Json (RedfishCS_char *JsonText);

#endif

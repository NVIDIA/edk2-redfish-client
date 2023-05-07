//
// Auto-generated file by Redfish Schema C Structure Generator.
// https://github.com/DMTF/Redfish-Schema-C-Struct-Generator.
//
//  (C) Copyright 2019-2021 Hewlett Packard Enterprise Development LP<BR>
//
// Copyright Notice:
// Copyright 2019-2021 Distributed Management Task Force, Inc. All rights reserved.
// License: BSD 3-Clause License. For full text see link: https://github.com/DMTF/Redfish-JSON-C-Struct-Converter/blob/master/LICENSE.md
//

#ifndef RedfishServiceroot_V1_10_0_CSTRUCT_H_
#define RedfishServiceroot_V1_10_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

typedef struct _RedfishServiceRoot_V1_10_0_DeepOperations_CS RedfishServiceRoot_V1_10_0_DeepOperations_CS;
typedef struct _RedfishServiceRoot_V1_10_0_Expand_CS RedfishServiceRoot_V1_10_0_Expand_CS;
typedef struct _RedfishServiceRoot_V1_10_0_Links_CS RedfishServiceRoot_V1_10_0_Links_CS;
typedef struct _RedfishServiceRoot_V1_10_0_ProtocolFeaturesSupported_CS RedfishServiceRoot_V1_10_0_ProtocolFeaturesSupported_CS;
typedef struct _RedfishServiceRoot_V1_10_0_ServiceRoot_CS RedfishServiceRoot_V1_10_0_ServiceRoot_CS;
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
// The information about deep operations that the service supports.
//
typedef struct _RedfishServiceRoot_V1_10_0_DeepOperations_CS {
    RedfishCS_bool     *DeepPATCH;    // An indication of whether the
                                     // service supports the deep
                                     // PATCH operation.
    RedfishCS_bool     *DeepPOST;    // An indication of whether the
                                     // service supports the deep POST
                                     // operation.
    RedfishCS_int64    *MaxLevels;    // The maximum levels of
                                     // resources allowed in deep
                                     // operations.
} RedfishServiceRoot_V1_10_0_DeepOperations_CS;

//
// The information about the use of $expand in the service.
//
typedef struct _RedfishServiceRoot_V1_10_0_Expand_CS {
    RedfishCS_bool     *ExpandAll;    // An indication of whether the
                                     // service supports the asterisk
                                     // (`*`) option of the $expand
                                     // query parameter.
    RedfishCS_bool     *Levels;      // An indication of whether the
                                     // service supports the $levels
                                     // option of the $expand query
                                     // parameter.
    RedfishCS_bool     *Links;       // An indication of whether this
                                     // service supports the tilde
                                     // (`~`) option of the $expand
                                     // query parameter.
    RedfishCS_int64    *MaxLevels;    // The maximum $levels option
                                     // value in the $expand query
                                     // parameter.
    RedfishCS_bool     *NoLinks;     // An indication of whether the
                                     // service supports the period
                                     // (`.`) option of the $expand
                                     // query parameter.
} RedfishServiceRoot_V1_10_0_Expand_CS;

//
// The links to other Resources that are related to this Resource.
//
typedef struct _RedfishServiceRoot_V1_10_0_Links_CS {
    RedfishResource_Oem_CS    *Oem;       // The OEM extension property.
    RedfishCS_Link            Sessions;    // The link to a collection of
                                          // Sessions.
} RedfishServiceRoot_V1_10_0_Links_CS;

//
// The information about protocol features that the service supports.
//
typedef struct _RedfishServiceRoot_V1_10_0_ProtocolFeaturesSupported_CS {
    RedfishServiceRoot_V1_10_0_DeepOperations_CS    *DeepOperations;    // The information about deep
                                                                        // operations that the service
                                                                        // supports.
    RedfishCS_bool                                  *ExcerptQuery;      // An indication of whether the
                                                                        // service supports the excerpt
                                                                        // query parameter.
    RedfishServiceRoot_V1_10_0_Expand_CS            *ExpandQuery;       // The information about the use
                                                                        // of $expand in the service.
    RedfishCS_bool                                  *FilterQuery;       // An indication of whether the
                                                                        // service supports the $filter
                                                                        // query parameter.
    RedfishCS_bool                                  *OnlyMemberQuery;    // An indication of whether the
                                                                        // service supports the only
                                                                        // query parameter.
    RedfishCS_bool                                  *SelectQuery;       // An indication of whether the
                                                                        // service supports the $select
                                                                        // query parameter.
} RedfishServiceRoot_V1_10_0_ProtocolFeaturesSupported_CS;

//
// The ServiceRoot schema describes the root of the Redfish Service, located at
// the '/redfish/v1' URI.  All other Resources accessible through the Redfish
// interface on this device are linked directly or indirectly from the Service
// Root.
//
typedef struct _RedfishServiceRoot_V1_10_0_ServiceRoot_CS {
    RedfishCS_Header                                           Header;
    RedfishCS_char                                             *odata_context;           
    RedfishCS_char                                             *odata_etag;              
    RedfishCS_char                                             *odata_id;                
    RedfishCS_char                                             *odata_type;              
    RedfishCS_Link                                             AccountService;               // The link to the Account
                                                                                             // Service.
    RedfishCS_Link                                             AggregationService;           // The link to the aggregation
                                                                                             // service.
    RedfishCS_Link                                             CertificateService;           // The link to the Certificate
                                                                                             // Service.
    RedfishCS_Link                                             Chassis;                      // The link to a collection of
                                                                                             // chassis.
    RedfishCS_Link                                             CompositionService;           // The link to the Composition
                                                                                             // Service.
    RedfishCS_char                                             *Description;             
    RedfishCS_Link                                             EventService;                 // The link to the Event Service.
    RedfishCS_Link                                             Fabrics;                      // The link to a collection of
                                                                                             // all fabric entities.
    RedfishCS_Link                                             Facilities;                   // The link to a collection of
                                                                                             // facilities.
    RedfishCS_char                                             *Id;                      
    RedfishCS_Link                                             JobService;                   // The link to the JobService.
    RedfishCS_Link                                             JsonSchemas;                  // The link to a collection of
                                                                                             // JSON Schema files.
    RedfishServiceRoot_V1_10_0_Links_CS                        *Links;                       // The links to other Resources
                                                                                             // that are related to this
                                                                                             // Resource.
    RedfishCS_Link                                             Managers;                     // The link to a collection of
                                                                                             // managers.
    RedfishCS_Link                                             NVMeDomains;                  // The link to a collection of
                                                                                             // NVMe domains.
    RedfishCS_char                                             *Name;                    
    RedfishResource_Oem_CS                                     *Oem;                         // The OEM extension property.
    RedfishCS_Link                                             PowerEquipment;               // The link to a set of power
                                                                                             // equipment.
    RedfishCS_char                                             *Product;                     // The product associated with
                                                                                             // this Redfish Service.
    RedfishServiceRoot_V1_10_0_ProtocolFeaturesSupported_CS    *ProtocolFeaturesSupported;    // The information about protocol
                                                                                             // features that the service
                                                                                             // supports.
    RedfishCS_char                                             *RedfishVersion;              // The version of the Redfish
                                                                                             // Service.
    RedfishCS_Link                                             Registries;                   // The link to a collection of
                                                                                             // Registries.
    RedfishCS_Link                                             ResourceBlocks;               // The link to a collection of
                                                                                             // all Resource Block Resources.
                                                                                             // This collection is intended
                                                                                             // for implementations that do
                                                                                             // not contain a Composition
                                                                                             // Service but that expose
                                                                                             // Resources to an orchestrator
                                                                                             // that implements a Composition
                                                                                             // Service.
    RedfishCS_Link                                             SessionService;               // The link to the Sessions
                                                                                             // Service.
    RedfishCS_Link                                             Storage;                      // The link to a collection of
                                                                                             // storage subsystems.
    RedfishCS_Link                                             StorageServices;              // The link to a collection of
                                                                                             // all storage service entities.
    RedfishCS_Link                                             StorageSystems;               // The link to a collection of
                                                                                             // storage systems.
    RedfishCS_Link                                             Systems;                      // The link to a collection of
                                                                                             // systems.
    RedfishCS_Link                                             Tasks;                        // The link to the Task Service.
    RedfishCS_Link                                             TelemetryService;             // The link to the Telemetry
                                                                                             // Service.
    RedfishCS_char                                             *UUID;                        // Unique identifier for a
                                                                                             // service instance.  When SSDP
                                                                                             // is used, this value should be
                                                                                             // an exact match of the UUID
                                                                                             // value returned in a 200 OK
                                                                                             // from an SSDP M-SEARCH request
                                                                                             // during discovery.
    RedfishCS_Link                                             UpdateService;                // The link to the Update
                                                                                             // Service.
    RedfishCS_char                                             *Vendor;                      // The vendor or manufacturer
                                                                                             // associated with this Redfish
                                                                                             // Service.
} RedfishServiceRoot_V1_10_0_ServiceRoot_CS;

RedfishCS_status
Json_ServiceRoot_V1_10_0_To_CS (char *JsonRawText, RedfishServiceRoot_V1_10_0_ServiceRoot_CS **ReturnedCS);

RedfishCS_status
CS_To_ServiceRoot_V1_10_0_JSON (RedfishServiceRoot_V1_10_0_ServiceRoot_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyServiceRoot_V1_10_0_CS (RedfishServiceRoot_V1_10_0_ServiceRoot_CS *CSPtr);

RedfishCS_status
DestroyServiceRoot_V1_10_0_Json (RedfishCS_char *JsonText);

#endif

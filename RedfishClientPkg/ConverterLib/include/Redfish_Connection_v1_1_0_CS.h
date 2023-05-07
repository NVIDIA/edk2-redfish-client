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

#ifndef RedfishConnection_V1_1_0_CSTRUCT_H_
#define RedfishConnection_V1_1_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishConnection_V1_1_0_MemoryChunkInfo_Array_CS RedfishConnection_V1_1_0_MemoryChunkInfo_Array_CS;
typedef struct _RedfishConnection_V1_1_0_VolumeInfo_Array_CS RedfishConnection_V1_1_0_VolumeInfo_Array_CS;
typedef struct _RedfishConnection_V1_1_0_Actions_CS RedfishConnection_V1_1_0_Actions_CS;
typedef struct _RedfishConnection_V1_1_0_Connection_CS RedfishConnection_V1_1_0_Connection_CS;
typedef struct _RedfishConnection_V1_1_0_ConnectionKey_CS RedfishConnection_V1_1_0_ConnectionKey_CS;
typedef struct _RedfishConnection_V1_1_0_GenZConnectionKey_CS RedfishConnection_V1_1_0_GenZConnectionKey_CS;
typedef struct _RedfishConnection_V1_1_0_Links_CS RedfishConnection_V1_1_0_Links_CS;
typedef struct _RedfishConnection_V1_1_0_MemoryChunkInfo_CS RedfishConnection_V1_1_0_MemoryChunkInfo_CS;
typedef struct _RedfishConnection_V1_1_0_OemActions_CS RedfishConnection_V1_1_0_OemActions_CS;
typedef struct _RedfishConnection_V1_1_0_VolumeInfo_CS RedfishConnection_V1_1_0_VolumeInfo_CS;
#ifndef RedfishResource_Condition_CS_
typedef struct _RedfishResource_Condition_CS RedfishResource_Condition_CS;
#endif

#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

#ifndef RedfishResource_Status_CS_
typedef struct _RedfishResource_Status_CS RedfishResource_Status_CS;
#endif

#ifndef Redfishodatav4_idRef_CS_
typedef struct _Redfishodatav4_idRef_CS Redfishodatav4_idRef_CS;
#endif

//
// The available actions for this resource.
//
typedef struct _RedfishConnection_V1_1_0_Actions_CS {
    RedfishConnection_V1_1_0_OemActions_CS    *Oem;    // The available OEM-specific
                                                      // actions for this resource.
} RedfishConnection_V1_1_0_Actions_CS;

//
// The permission key information required to access the target resources for a
// connection.
//
typedef struct _RedfishConnection_V1_1_0_ConnectionKey_CS {
    RedfishConnection_V1_1_0_GenZConnectionKey_CS    *GenZ;    // The Gen-Z-specific permission
                                                              // key information for this
                                                              // connection.
} RedfishConnection_V1_1_0_ConnectionKey_CS;

//
// The Gen-Z-specific permission key information for a connection.
//
typedef struct _RedfishConnection_V1_1_0_GenZConnectionKey_CS {
    RedfishCS_char    *AccessKey;                   // The Access Key for this
                                                    // connection.
    RedfishCS_bool    *RKeyDomainCheckingEnabled;    // Indicates whether Region Key
                                                    // domain checking is enabled for
                                                    // this connection.
    RedfishCS_char    *RKeyReadOnlyKey;             // The read-only Region Key for
                                                    // this connection.
    RedfishCS_char    *RKeyReadWriteKey;            // The read-write Region Key for
                                                    // this connection.
} RedfishConnection_V1_1_0_GenZConnectionKey_CS;

//
// The links to other resources that are related to this resource.
//
typedef struct _RedfishConnection_V1_1_0_Links_CS {
    RedfishCS_Link            InitiatorEndpointGroups;               // An array of links to the
                                                                     // initiator endpoint groups that
                                                                     // are associated with this
                                                                     // connection.
    RedfishCS_int64           *InitiatorEndpointGroupsodata_count;
    RedfishCS_Link            InitiatorEndpoints;                    // An array of links to the
                                                                     // initiator endpoints that are
                                                                     // associated with this
                                                                     // connection.
    RedfishCS_int64           *InitiatorEndpointsodata_count;    
    RedfishResource_Oem_CS    *Oem;                                  // The OEM extension property.
    RedfishCS_Link            TargetEndpointGroups;                  // An array of links to the
                                                                     // target endpoint groups that
                                                                     // are associated with this
                                                                     // connection.
    RedfishCS_int64           *TargetEndpointGroupsodata_count;  
    RedfishCS_Link            TargetEndpoints;                       // An array of links to the
                                                                     // target endpoints that are
                                                                     // associated with this
                                                                     // connection.
    RedfishCS_int64           *TargetEndpointsodata_count;       
} RedfishConnection_V1_1_0_Links_CS;

//
// The combination of permissions and memory chunk information.
//
typedef struct _RedfishConnection_V1_1_0_MemoryChunkInfo_CS {
    RedfishCS_char_Array    *AccessCapabilities;    // Supported IO access
                                                   // capabilities.
    RedfishCS_char          *AccessState;          // The access state for this
                                                   // connection.
    RedfishCS_Link          MemoryChunk;           // The specified memory chunk.
} RedfishConnection_V1_1_0_MemoryChunkInfo_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishConnection_V1_1_0_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishConnection_V1_1_0_OemActions_CS;

//
// The combination of permissions and volume information.
//
typedef struct _RedfishConnection_V1_1_0_VolumeInfo_CS {
    RedfishCS_char_Array    *AccessCapabilities;    // Supported IO access
                                                   // capabilities.
    RedfishCS_char          *AccessState;          // The access state for this
                                                   // connection.
    RedfishCS_Link          Volume;                // The specified volume.
} RedfishConnection_V1_1_0_VolumeInfo_CS;

//
// A condition that requires attention.
//
#ifndef RedfishResource_Condition_CS_
#define RedfishResource_Condition_CS_
typedef struct _RedfishResource_Condition_CS {
    RedfishCS_Link             LogEntry;             // The link to the log entry
                                                     // created for this condition.
    RedfishCS_char             *Message;             // The human-readable message for
                                                     // this condition.
    RedfishCS_char_Array       *MessageArgs;         // An array of message arguments
                                                     // that are substituted for the
                                                     // arguments in the message when
                                                     // looked up in the message
                                                     // registry.
    RedfishCS_char             *MessageId;           // The identifier for the
                                                     // message.
    Redfishodatav4_idRef_CS    *OriginOfCondition;    // A link to the resource or
                                                     // object that originated the
                                                     // condition.
    RedfishCS_char             *Resolution;          // Suggestions on how to resolve
                                                     // the condition.
    RedfishCS_char             *Severity;            // The severity of the condition.
    RedfishCS_char             *Timestamp;           // The time the condition
                                                     // occurred.
} RedfishResource_Condition_CS;
#endif

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
// The status and health of a resource and its children.
//
#ifndef RedfishResource_Status_CS_
#define RedfishResource_Status_CS_
typedef struct _RedfishResource_Status_CS {
    RedfishResource_Condition_Array_CS    *Conditions;     // Conditions in this resource
                                                           // that require attention.
    RedfishCS_char                        *Health;         // The health state of this
                                                           // resource in the absence of its
                                                           // dependent resources.
    RedfishCS_char                        *HealthRollup;    // The overall health state from
                                                           // the view of this resource.
    RedfishResource_Oem_CS                *Oem;            // The OEM extension property.
    RedfishCS_char                        *State;          // The known state of the
                                                           // resource, such as, enabled.
} RedfishResource_Status_CS;
#endif

//
// A reference to a resource.
//
#ifndef Redfishodatav4_idRef_CS_
#define Redfishodatav4_idRef_CS_
typedef struct _Redfishodatav4_idRef_CS {
    RedfishCS_char    *odata_id;
} Redfishodatav4_idRef_CS;
#endif

//
// The Connection schema describes the access permissions endpoints, or groups of
// endpoints, have with other resources in the service.
//
typedef struct _RedfishConnection_V1_1_0_Connection_CS {
    RedfishCS_Header                                     Header;
    RedfishCS_char                                       *odata_context; 
    RedfishCS_char                                       *odata_etag;    
    RedfishCS_char                                       *odata_id;      
    RedfishCS_char                                       *odata_type;    
    RedfishConnection_V1_1_0_Actions_CS                  *Actions;           // The available actions for this
                                                                             // resource.
    RedfishConnection_V1_1_0_ConnectionKey_CS            *ConnectionKeys;    // The permission keys required
                                                                             // to access the specified
                                                                             // resources for this connection.
    RedfishCS_char                                       *ConnectionType;    // The type of resources this
                                                                             // connection specifies.
    RedfishCS_char                                       *Description;   
    RedfishCS_char                                       *Id;            
    RedfishConnection_V1_1_0_Links_CS                    *Links;             // The links to other resources
                                                                             // that are related to this
                                                                             // resource.
    RedfishConnection_V1_1_0_MemoryChunkInfo_Array_CS    *MemoryChunkInfo;    // The set of memory chunks and
                                                                             // access capabilities specified
                                                                             // for this connection.
    RedfishCS_char                                       *Name;          
    RedfishResource_Oem_CS                               *Oem;               // The OEM extension property.
    RedfishResource_Status_CS                            *Status;            // The status and health of the
                                                                             // resource and its subordinate
                                                                             // or dependent resources.
    RedfishConnection_V1_1_0_VolumeInfo_Array_CS         *VolumeInfo;        // The set of volumes and access
                                                                             // capabilities specified for
                                                                             // this connection.
} RedfishConnection_V1_1_0_Connection_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

typedef struct _RedfishConnection_V1_1_0_MemoryChunkInfo_Array_CS  {
    RedfishConnection_V1_1_0_MemoryChunkInfo_Array_CS    *Next;
    RedfishConnection_V1_1_0_MemoryChunkInfo_CS    *ArrayValue;
} RedfishConnection_V1_1_0_MemoryChunkInfo_Array_CS;

typedef struct _RedfishConnection_V1_1_0_VolumeInfo_Array_CS  {
    RedfishConnection_V1_1_0_VolumeInfo_Array_CS    *Next;
    RedfishConnection_V1_1_0_VolumeInfo_CS    *ArrayValue;
} RedfishConnection_V1_1_0_VolumeInfo_Array_CS;

RedfishCS_status
Json_Connection_V1_1_0_To_CS (char *JsonRawText, RedfishConnection_V1_1_0_Connection_CS **ReturnedCS);

RedfishCS_status
CS_To_Connection_V1_1_0_JSON (RedfishConnection_V1_1_0_Connection_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyConnection_V1_1_0_CS (RedfishConnection_V1_1_0_Connection_CS *CSPtr);

RedfishCS_status
DestroyConnection_V1_1_0_Json (RedfishCS_char *JsonText);

#endif

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

#ifndef RedfishLogentry_V1_9_0_CSTRUCT_H_
#define RedfishLogentry_V1_9_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishLogEntry_V1_9_0_Actions_CS RedfishLogEntry_V1_9_0_Actions_CS;
typedef struct _RedfishLogEntry_V1_9_0_Links_CS RedfishLogEntry_V1_9_0_Links_CS;
typedef struct _RedfishLogEntry_V1_9_0_LogEntry_CS RedfishLogEntry_V1_9_0_LogEntry_CS;
typedef struct _RedfishLogEntry_V1_9_0_OemActions_CS RedfishLogEntry_V1_9_0_OemActions_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

#ifndef Redfishodatav4_idRef_CS_
typedef struct _Redfishodatav4_idRef_CS Redfishodatav4_idRef_CS;
#endif

//
// The available actions for this resource.
//
typedef struct _RedfishLogEntry_V1_9_0_Actions_CS {
    RedfishLogEntry_V1_9_0_OemActions_CS    *Oem;    // The available OEM-specific
                                                    // actions for this resource.
} RedfishLogEntry_V1_9_0_Actions_CS;

//
// The links to other resources that are related to this resource.
//
typedef struct _RedfishLogEntry_V1_9_0_Links_CS {
    RedfishResource_Oem_CS     *Oem;                 // The OEM extension property.
    Redfishodatav4_idRef_CS    *OriginOfCondition;    // The link to the resource that
                                                     // caused the log entry.
} RedfishLogEntry_V1_9_0_Links_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishLogEntry_V1_9_0_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishLogEntry_V1_9_0_OemActions_CS;

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
// A reference to a resource.
//
#ifndef Redfishodatav4_idRef_CS_
#define Redfishodatav4_idRef_CS_
typedef struct _Redfishodatav4_idRef_CS {
    RedfishCS_char    *odata_id;
} Redfishodatav4_idRef_CS;
#endif

//
// The LogEntry schema defines the record format for a log.  It is designed for
// Redfish event logs, OEM-specific log formats, and the IPMI System Event Log
// (SEL).  The EntryType field indicates the type of log and the resource includes
// several additional properties dependent on the EntryType.
//
typedef struct _RedfishLogEntry_V1_9_0_LogEntry_CS {
    RedfishCS_Header                     Header;
    RedfishCS_char                       *odata_context;         
    RedfishCS_char                       *odata_etag;            
    RedfishCS_char                       *odata_id;              
    RedfishCS_char                       *odata_type;            
    RedfishLogEntry_V1_9_0_Actions_CS    *Actions;                   // The available actions for this
                                                                     // resource.
    RedfishCS_int64                      *AdditionalDataSizeBytes;    // The size of the additional
                                                                     // data for the log entry.
    RedfishCS_char                       *AdditionalDataURI;         // The URI at which to access the
                                                                     // additional data for the log
                                                                     // entry, such as diagnostic
                                                                     // data, image captures, or other
                                                                     // files.
    RedfishCS_char                       *Created;                   // The date and time when the log
                                                                     // entry was created.
    RedfishCS_char                       *Description;           
    RedfishCS_char                       *DiagnosticDataType;        // The type of diagnostic data.
    RedfishCS_char                       *EntryCode;                 // The entry code for the log
                                                                     // entry if the entry type is
                                                                     // `SEL`.
    RedfishCS_char                       *EntryType;                 // The type of log entry.
    RedfishCS_int64                      *EventGroupId;              // An identifier that correlates
                                                                     // events with the same cause.
    RedfishCS_char                       *EventId;                   // The unique instance identifier
                                                                     // for an event.
    RedfishCS_char                       *EventTimestamp;            // The date and time when the
                                                                     // event occurred.
    RedfishCS_char                       *EventType;                 // The type of event recorded in
                                                                     // this log.
    RedfishCS_char                       *GeneratorId;               // An identifier of the device
                                                                     // that has generated the IPMI
                                                                     // SEL Event Record.
    RedfishCS_char                       *Id;                    
    RedfishLogEntry_V1_9_0_Links_CS      *Links;                     // The links to other resources
                                                                     // that are related to this
                                                                     // resource.
    RedfishCS_char                       *Message;                   // The message of the log entry.
                                                                     // This property decodes from the
                                                                     // entry type.  If the entry type
                                                                     // is `Event`, this property
                                                                     // contains a message.  If the
                                                                     // entry type is `SEL`, this
                                                                     // property contains an SEL-
                                                                     // specific message.  Otherwise,
                                                                     // this property contains an OEM-
                                                                     // specific log entry.  In most
                                                                     // cases, this property contains
                                                                     // the actual log entry.
    RedfishCS_char_Array                 *MessageArgs;               // The arguments for the message.
    RedfishCS_char                       *MessageId;                 // The MessageId, event data, or
                                                                     // OEM-specific information.
                                                                     // This property decodes from the
                                                                     // entry type.  If the entry type
                                                                     // is `Event`, this property
                                                                     // contains a Redfish
                                                                     // Specification-defined
                                                                     // MessageId.  If the entry type
                                                                     // is `SEL`, this property
                                                                     // contains the Event Data.
                                                                     // Otherwise, this property
                                                                     // contains OEM-specific
                                                                     // information.
    RedfishCS_char                       *Modified;                  // The date and time when the log
                                                                     // entry was last modified.
    RedfishCS_char                       *Name;                  
    RedfishCS_char                       *OEMDiagnosticDataType;     // The OEM-defined type of
                                                                     // diagnostic data.
    RedfishResource_Oem_CS               *Oem;                       // The OEM extension property.
    RedfishCS_char                       *OemLogEntryCode;           // The OEM-specific entry code,
                                                                     // if the LogEntryCode type is
                                                                     // `OEM`.
    RedfishCS_char                       *OemRecordFormat;           // The OEM-specific format of the
                                                                     // entry.  If the entry type is
                                                                     // `Oem`, this property contains
                                                                     // more information about the
                                                                     // record format from the OEM.
    RedfishCS_char                       *OemSensorType;             // The OEM-specific sensor type
                                                                     // if the sensor type is `OEM`.
    RedfishCS_char                       *Resolution;                // Used to provide suggestions on
                                                                     // how to resolve the situation
                                                                     // that caused the log entry.
    RedfishCS_bool                       *Resolved;                  // Indicates if the cause of the
                                                                     // log entry has been resolved or
                                                                     // repaired.
    RedfishCS_int64                      *SensorNumber;              // The IPMI-defined sensor
                                                                     // number.
    RedfishCS_char                       *SensorType;                // The sensor type to which the
                                                                     // log entry pertains if the
                                                                     // entry type is `SEL`.
    RedfishCS_bool                       *ServiceProviderNotified;    // Indicates if the log entry has
                                                                     // been sent to the service
                                                                     // provider.
    RedfishCS_char                       *Severity;                  // The severity of the log entry.
} RedfishLogEntry_V1_9_0_LogEntry_CS;

RedfishCS_status
Json_LogEntry_V1_9_0_To_CS (char *JsonRawText, RedfishLogEntry_V1_9_0_LogEntry_CS **ReturnedCS);

RedfishCS_status
CS_To_LogEntry_V1_9_0_JSON (RedfishLogEntry_V1_9_0_LogEntry_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyLogEntry_V1_9_0_CS (RedfishLogEntry_V1_9_0_LogEntry_CS *CSPtr);

RedfishCS_status
DestroyLogEntry_V1_9_0_Json (RedfishCS_char *JsonText);

#endif

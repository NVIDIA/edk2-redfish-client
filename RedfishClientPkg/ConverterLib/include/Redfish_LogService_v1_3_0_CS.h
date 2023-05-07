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

#ifndef RedfishLogservice_V1_3_0_CSTRUCT_H_
#define RedfishLogservice_V1_3_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishLogService_V1_3_0_SyslogFilter_Array_CS RedfishLogService_V1_3_0_SyslogFilter_Array_CS;
typedef struct _RedfishLogService_V1_3_0_Actions_CS RedfishLogService_V1_3_0_Actions_CS;
typedef struct _RedfishLogService_V1_3_0_ClearLog_CS RedfishLogService_V1_3_0_ClearLog_CS;
typedef struct _RedfishLogService_V1_3_0_CollectDiagnosticData_CS RedfishLogService_V1_3_0_CollectDiagnosticData_CS;
typedef struct _RedfishLogService_V1_3_0_LogService_CS RedfishLogService_V1_3_0_LogService_CS;
typedef struct _RedfishLogService_V1_3_0_OemActions_CS RedfishLogService_V1_3_0_OemActions_CS;
typedef struct _RedfishLogService_V1_3_0_SyslogFilter_CS RedfishLogService_V1_3_0_SyslogFilter_CS;
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
typedef struct _RedfishLogService_V1_3_0_Actions_CS {
    RedfishLogService_V1_3_0_ClearLog_CS                 *LogService_ClearLog;            
    RedfishLogService_V1_3_0_CollectDiagnosticData_CS    *LogService_CollectDiagnosticData;
    RedfishLogService_V1_3_0_OemActions_CS               *Oem;                                // The available OEM-specific
                                                                                              // actions for this resource.
} RedfishLogService_V1_3_0_Actions_CS;

//
// The action to clear the log for this log service.
//
typedef struct _RedfishLogService_V1_3_0_ClearLog_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishLogService_V1_3_0_ClearLog_CS;

//
// The action to collect the diagnostic data for the given type.
//
typedef struct _RedfishLogService_V1_3_0_CollectDiagnosticData_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishLogService_V1_3_0_CollectDiagnosticData_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishLogService_V1_3_0_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishLogService_V1_3_0_OemActions_CS;

//
// A syslog filter.
//
typedef struct _RedfishLogService_V1_3_0_SyslogFilter_CS {
    RedfishCS_char_Array    *LogFacilities;    // The types of programs that can
                                               // log messages.
    RedfishCS_char          *LowestSeverity;    // The lowest severity level
                                               // message that will be logged.
} RedfishLogService_V1_3_0_SyslogFilter_CS;

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
// The LogService schema contains properties for monitoring and configuring a log
// service.  When the Id property contains `DeviceLog`, the log contains device-
// resident log entries that follow the physical device when moved from system-to-
// system, and not a replication or subset of a system event log.
//
typedef struct _RedfishLogService_V1_3_0_LogService_CS {
    RedfishCS_Header                                  Header;
    RedfishCS_char                                    *odata_context;     
    RedfishCS_char                                    *odata_etag;        
    RedfishCS_char                                    *odata_id;          
    RedfishCS_char                                    *odata_type;        
    RedfishLogService_V1_3_0_Actions_CS               *Actions;               // The available actions for this
                                                                              // resource.
    RedfishCS_bool                                    *AutoDSTEnabled;        // An indication of whether the
                                                                              // log service is configured for
                                                                              // automatic Daylight Saving Time
                                                                              // (DST) adjustment.
    RedfishCS_char                                    *DateTime;              // The current date and time with
                                                                              // UTC offset of the log service.
    RedfishCS_char                                    *DateTimeLocalOffset;    // The time offset from UTC that
                                                                              // the DateTime property is in
                                                                              // `+HH:MM` format.
    RedfishCS_char                                    *Description;       
    RedfishCS_Link                                    Entries;                // The link to the log entry
                                                                              // collection.
    RedfishCS_char                                    *Id;                
    RedfishCS_char                                    *LogEntryType;          // The format of the log entries.
    RedfishCS_int64                                   *MaxNumberOfRecords;    // The maximum number of log
                                                                              // entries that this service can
                                                                              // have.
    RedfishCS_char                                    *Name;              
    RedfishResource_Oem_CS                            *Oem;                   // The OEM extension property.
    RedfishCS_char                                    *OverWritePolicy;       // The overwrite policy for this
                                                                              // service that takes place when
                                                                              // the log is full.
    RedfishCS_bool                                    *ServiceEnabled;        // An indication of whether this
                                                                              // service is enabled.
    RedfishResource_Status_CS                         *Status;                // The status and health of the
                                                                              // resource and its subordinate
                                                                              // or dependent resources.
    RedfishLogService_V1_3_0_SyslogFilter_Array_CS    *SyslogFilters;         // A list of syslog message
                                                                              // filters to be logged locally.
} RedfishLogService_V1_3_0_LogService_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

typedef struct _RedfishLogService_V1_3_0_SyslogFilter_Array_CS  {
    RedfishLogService_V1_3_0_SyslogFilter_Array_CS    *Next;
    RedfishLogService_V1_3_0_SyslogFilter_CS    *ArrayValue;
} RedfishLogService_V1_3_0_SyslogFilter_Array_CS;

RedfishCS_status
Json_LogService_V1_3_0_To_CS (char *JsonRawText, RedfishLogService_V1_3_0_LogService_CS **ReturnedCS);

RedfishCS_status
CS_To_LogService_V1_3_0_JSON (RedfishLogService_V1_3_0_LogService_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyLogService_V1_3_0_CS (RedfishLogService_V1_3_0_LogService_CS *CSPtr);

RedfishCS_status
DestroyLogService_V1_3_0_Json (RedfishCS_char *JsonText);

#endif

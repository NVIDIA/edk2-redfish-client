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

#ifndef RedfishJob_V1_0_7_CSTRUCT_H_
#define RedfishJob_V1_0_7_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishJob_V1_0_7_Actions_CS RedfishJob_V1_0_7_Actions_CS;
typedef struct _RedfishJob_V1_0_7_Job_CS RedfishJob_V1_0_7_Job_CS;
typedef struct _RedfishJob_V1_0_7_OemActions_CS RedfishJob_V1_0_7_OemActions_CS;
typedef struct _RedfishJob_V1_0_7_Payload_CS RedfishJob_V1_0_7_Payload_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

//
// The available actions for this resource.
//
typedef struct _RedfishJob_V1_0_7_Actions_CS {
    RedfishJob_V1_0_7_OemActions_CS    *Oem;    // The available OEM-specific
                                               // actions for this resource.
} RedfishJob_V1_0_7_Actions_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishJob_V1_0_7_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishJob_V1_0_7_OemActions_CS;

//
// The HTTP and JSON payload details for this job.
//
typedef struct _RedfishJob_V1_0_7_Payload_CS {
    RedfishCS_char_Array    *HttpHeaders;     // An array of HTTP headers in
                                              // this job.
    RedfishCS_char          *HttpOperation;    // The HTTP operation that
                                              // executes this job.
    RedfishCS_char          *JsonBody;        // The JSON payload to use in the
                                              // execution of this job.
    RedfishCS_char          *TargetUri;       // The link to the target for
                                              // this job.
} RedfishJob_V1_0_7_Payload_CS;

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
// The Job schema contains information about a job that a Redfish job service
// schedules or executes.  Clients create jobs to describe a series of operations
// that occur at periodic intervals.
//
typedef struct _RedfishJob_V1_0_7_Job_CS {
    RedfishCS_Header                Header;
    RedfishCS_char                  *odata_context;  
    RedfishCS_char                  *odata_etag;     
    RedfishCS_char                  *odata_id;       
    RedfishCS_char                  *odata_type;     
    RedfishJob_V1_0_7_Actions_CS    *Actions;            // The available actions for this
                                                         // resource.
    RedfishCS_char                  *CreatedBy;          // The person or program that
                                                         // created this job entry.
    RedfishCS_char                  *Description;    
    RedfishCS_char                  *EndTime;            // The date and time when the job
                                                         // was completed.
    RedfishCS_bool                  *HidePayload;        // An indication of whether the
                                                         // contents of the payload should
                                                         // be hidden from view after the
                                                         // job has been created.  If
                                                         // `true`, responses do not
                                                         // return the payload.  If
                                                         // `false`, responses return the
                                                         // payload.  If this property is
                                                         // not present when the job is
                                                         // created, the default is
                                                         // `false`.
    RedfishCS_char                  *Id;             
    RedfishCS_char                  *JobState;           // The state of the job.
    RedfishCS_char                  *JobStatus;          // The status of the job.
    RedfishCS_char                  *MaxExecutionTime;    // The maximum amount of time the
                                                         // job is allowed to execute.
    RedfishCS_Link                  Messages;            // An array of messages
                                                         // associated with the job.
    RedfishCS_char                  *Name;           
    RedfishResource_Oem_CS          *Oem;                // The OEM extension property.
    RedfishJob_V1_0_7_Payload_CS    *Payload;            // The HTTP and JSON payload
                                                         // details for this job.
    RedfishCS_int64                 *PercentComplete;    // The completion percentage of
                                                         // this job.
    RedfishCS_Link                  Schedule;            // The schedule settings for this
                                                         // job.
    RedfishCS_char                  *StartTime;          // The date and time when the job
                                                         // was started or is scheduled to
                                                         // start.
    RedfishCS_char_Array            *StepOrder;          // The serialized execution order
                                                         // of the job steps.
    RedfishCS_Link                  Steps;               // The link to a collection of
                                                         // steps for this job.
} RedfishJob_V1_0_7_Job_CS;

RedfishCS_status
Json_Job_V1_0_7_To_CS (char *JsonRawText, RedfishJob_V1_0_7_Job_CS **ReturnedCS);

RedfishCS_status
CS_To_Job_V1_0_7_JSON (RedfishJob_V1_0_7_Job_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyJob_V1_0_7_CS (RedfishJob_V1_0_7_Job_CS *CSPtr);

RedfishCS_status
DestroyJob_V1_0_7_Json (RedfishCS_char *JsonText);

#endif

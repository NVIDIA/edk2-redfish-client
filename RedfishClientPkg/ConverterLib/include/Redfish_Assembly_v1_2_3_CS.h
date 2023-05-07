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

#ifndef RedfishAssembly_V1_2_3_CSTRUCT_H_
#define RedfishAssembly_V1_2_3_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishAssembly_V1_2_3_AssemblyData_Array_CS RedfishAssembly_V1_2_3_AssemblyData_Array_CS;
typedef struct _RedfishAssembly_V1_2_3_Actions_CS RedfishAssembly_V1_2_3_Actions_CS;
typedef struct _RedfishAssembly_V1_2_3_Assembly_CS RedfishAssembly_V1_2_3_Assembly_CS;
typedef struct _RedfishAssembly_V1_2_3_AssemblyData_CS RedfishAssembly_V1_2_3_AssemblyData_CS;
typedef struct _RedfishAssembly_V1_2_3_AssemblyDataActions_CS RedfishAssembly_V1_2_3_AssemblyDataActions_CS;
typedef struct _RedfishAssembly_V1_2_3_AssemblyDataOemActions_CS RedfishAssembly_V1_2_3_AssemblyDataOemActions_CS;
typedef struct _RedfishAssembly_V1_2_3_OemActions_CS RedfishAssembly_V1_2_3_OemActions_CS;
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
// The available actions for this Resource.
//
typedef struct _RedfishAssembly_V1_2_3_Actions_CS {
    RedfishAssembly_V1_2_3_OemActions_CS    *Oem;    // The available OEM-specific
                                                    // actions for this Resource.
} RedfishAssembly_V1_2_3_Actions_CS;

typedef struct _RedfishAssembly_V1_2_3_AssemblyData_CS {
    RedfishCS_char                                   *odata_id;             
    RedfishAssembly_V1_2_3_AssemblyDataActions_CS    *Actions;                  // The available actions for this
                                                                                // Resource.
    RedfishCS_char                                   *BinaryDataURI;            // The URI at which to access an
                                                                                // image of the assembly
                                                                                // information.
    RedfishCS_char                                   *Description;              // The description of the
                                                                                // assembly.
    RedfishCS_char                                   *EngineeringChangeLevel;    // The engineering change level
                                                                                // of the assembly.
    RedfishCS_char                                   *MemberId;                 // The identifier for the member
                                                                                // within the collection.
    RedfishCS_char                                   *Model;                    // The model number of the
                                                                                // assembly.
    RedfishCS_char                                   *Name;                     // The name of the assembly.
    RedfishResource_Oem_CS                           *Oem;                      // The OEM extension property.
    RedfishCS_char                                   *PartNumber;               // The part number of the
                                                                                // assembly.
    RedfishCS_char                                   *PhysicalContext;          // The area or device to which
                                                                                // the assembly data applies.
    RedfishCS_char                                   *Producer;                 // The producer or manufacturer
                                                                                // of the assembly.
    RedfishCS_char                                   *ProductionDate;           // The production date of the
                                                                                // assembly.
    RedfishCS_char                                   *SKU;                      // The SKU of the assembly.
    RedfishCS_char                                   *SerialNumber;             // The serial number of the
                                                                                // assembly.
    RedfishCS_char                                   *SparePartNumber;          // The spare part number of the
                                                                                // assembly.
    RedfishResource_Status_CS                        *Status;                   // The status and health of the
                                                                                // Resource and its subordinate
                                                                                // or dependent Resources.
    RedfishCS_char                                   *Vendor;                   // The vendor of the assembly.
    RedfishCS_char                                   *Version;                  // The hardware version of the
                                                                                // assembly.
} RedfishAssembly_V1_2_3_AssemblyData_CS;

//
// The available actions for this Resource.
//
typedef struct _RedfishAssembly_V1_2_3_AssemblyDataActions_CS {
    RedfishAssembly_V1_2_3_AssemblyDataOemActions_CS    *Oem;    // The available OEM-specific
                                                                // actions for this Resource.
} RedfishAssembly_V1_2_3_AssemblyDataActions_CS;

//
// The available OEM-specific actions for this Resource.
//
typedef struct _RedfishAssembly_V1_2_3_AssemblyDataOemActions_CS {
    RedfishCS_Link    Prop;
} RedfishAssembly_V1_2_3_AssemblyDataOemActions_CS;

//
// The available OEM-specific actions for this Resource.
//
typedef struct _RedfishAssembly_V1_2_3_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishAssembly_V1_2_3_OemActions_CS;

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
// The Assembly schema defines an assembly.  Assembly information contains details
// about a device, such as part number, serial number, manufacturer, and
// production date.  It also provides access to the original data for the
// assembly.
//
typedef struct _RedfishAssembly_V1_2_3_Assembly_CS {
    RedfishCS_Header                                Header;
    RedfishCS_char                                  *odata_context;       
    RedfishCS_char                                  *odata_etag;          
    RedfishCS_char                                  *odata_id;            
    RedfishCS_char                                  *odata_type;          
    RedfishAssembly_V1_2_3_Actions_CS               *Actions;                 // The available actions for this
                                                                              // Resource.
    RedfishAssembly_V1_2_3_AssemblyData_Array_CS    *Assemblies;              // The assembly records.
    RedfishCS_int64                                 *Assembliesodata_count;
    RedfishCS_char                                  *Description;         
    RedfishCS_char                                  *Id;                  
    RedfishCS_char                                  *Name;                
    RedfishResource_Oem_CS                          *Oem;                     // The OEM extension property.
} RedfishAssembly_V1_2_3_Assembly_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

typedef struct _RedfishAssembly_V1_2_3_AssemblyData_Array_CS  {
    RedfishAssembly_V1_2_3_AssemblyData_Array_CS    *Next;
    RedfishAssembly_V1_2_3_AssemblyData_CS    *ArrayValue;
} RedfishAssembly_V1_2_3_AssemblyData_Array_CS;

RedfishCS_status
Json_Assembly_V1_2_3_To_CS (char *JsonRawText, RedfishAssembly_V1_2_3_Assembly_CS **ReturnedCS);

RedfishCS_status
CS_To_Assembly_V1_2_3_JSON (RedfishAssembly_V1_2_3_Assembly_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyAssembly_V1_2_3_CS (RedfishAssembly_V1_2_3_Assembly_CS *CSPtr);

RedfishCS_status
DestroyAssembly_V1_2_3_Json (RedfishCS_char *JsonText);

#endif

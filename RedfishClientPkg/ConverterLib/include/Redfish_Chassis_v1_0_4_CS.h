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

#ifndef RedfishChassis_V1_0_4_CSTRUCT_H_
#define RedfishChassis_V1_0_4_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef Redfishodata_V4_0_0_idRef_Array_CS_
typedef struct _Redfishodata_V4_0_0_idRef_Array_CS Redfishodata_V4_0_0_idRef_Array_CS;
#endif
#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishChassis_V1_0_4_Chassis_CS RedfishChassis_V1_0_4_Chassis_CS;
typedef struct _RedfishChassis_V1_0_4_Chassis_Actions_CS RedfishChassis_V1_0_4_Chassis_Actions_CS;
typedef struct _RedfishChassis_V1_0_4_Chassis_Actions_Oem_CS RedfishChassis_V1_0_4_Chassis_Actions_Oem_CS;
typedef struct _RedfishChassis_V1_0_4_Chassis_Links_CS RedfishChassis_V1_0_4_Chassis_Links_CS;
typedef struct _RedfishChassis_V1_0_4_Reset_CS RedfishChassis_V1_0_4_Reset_CS;
#ifndef RedfishResource_Condition_CS_
typedef struct _RedfishResource_Condition_CS RedfishResource_Condition_CS;
#endif

#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

#ifndef RedfishResource_Status_CS_
typedef struct _RedfishResource_Status_CS RedfishResource_Status_CS;
#endif

#ifndef Redfishodata_V4_0_0_idRef_CS_
typedef struct _Redfishodata_V4_0_0_idRef_CS Redfishodata_V4_0_0_idRef_CS;
#endif

#ifndef Redfishodatav4_idRef_CS_
typedef struct _Redfishodatav4_idRef_CS Redfishodatav4_idRef_CS;
#endif

//
// The available actions for this resource.
//
typedef struct _RedfishChassis_V1_0_4_Chassis_Actions_CS {
    RedfishChassis_V1_0_4_Reset_CS                  *Chassis_Reset;
    RedfishChassis_V1_0_4_Chassis_Actions_Oem_CS    *Oem;             // The available OEM specific
                                                                      // actions for this resource.
} RedfishChassis_V1_0_4_Chassis_Actions_CS;

//
// The available OEM specific actions for this resource.
//
typedef struct _RedfishChassis_V1_0_4_Chassis_Actions_Oem_CS {
    RedfishCS_Link    Prop;
} RedfishChassis_V1_0_4_Chassis_Actions_Oem_CS;

//
// Contains references to other resources that are related to this resource.
//
typedef struct _RedfishChassis_V1_0_4_Chassis_Links_CS {
    RedfishCS_Link                        ComputerSystems;                        // An array of references to the
                                                                                  // computer systems contained in
                                                                                  // this chassis.  This will only
                                                                                  // reference ComputerSystems that
                                                                                  // are directly and wholly
                                                                                  // contained in this chassis.
    RedfishCS_int64                       *ComputerSystemsodata_count;        
    RedfishCS_char                        *ComputerSystemsodata_navigationLink;
    RedfishCS_Link                        ContainedBy;                            // A reference to the chassis
                                                                                  // that this chassis is contained
                                                                                  // by.
    RedfishCS_Link                        Contains;                               // An array of references to any
                                                                                  // other chassis that this
                                                                                  // chassis has in it.
    RedfishCS_int64                       *Containsodata_count;               
    RedfishCS_char                        *Containsodata_navigationLink;      
    Redfishodata_V4_0_0_idRef_Array_CS    *CooledBy;                              // An array of ID[s] of resources
                                                                                  // that cool this chassis.
                                                                                  // Normally the ID will be a
                                                                                  // chassis or a specific set of
                                                                                  // fans.
    RedfishCS_int64                       *CooledByodata_count;               
    RedfishCS_char                        *CooledByodata_navigationLink;      
    RedfishCS_Link                        ManagedBy;                              // An array of references to the
                                                                                  // Managers responsible for
                                                                                  // managing this chassis.
    RedfishCS_int64                       *ManagedByodata_count;              
    RedfishCS_char                        *ManagedByodata_navigationLink;     
    RedfishResource_Oem_CS                *Oem;                                   // Oem extension object.
    Redfishodata_V4_0_0_idRef_Array_CS    *PoweredBy;                             // An array of ID[s] of resources
                                                                                  // that power this chassis.
                                                                                  // Normally the ID will be a
                                                                                  // chassis or a specific set of
                                                                                  // Power Supplies.
    RedfishCS_int64                       *PoweredByodata_count;              
    RedfishCS_char                        *PoweredByodata_navigationLink;     
} RedfishChassis_V1_0_4_Chassis_Links_CS;

//
// This action is used to reset the chassis. This action resets the chassis, not
// Systems or other contained resources, although side effects may occur which
// affect those resources.
//
typedef struct _RedfishChassis_V1_0_4_Reset_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishChassis_V1_0_4_Reset_CS;

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
#ifndef Redfishodata_V4_0_0_idRef_CS_
#define Redfishodata_V4_0_0_idRef_CS_
typedef struct _Redfishodata_V4_0_0_idRef_CS {
    RedfishCS_char    *odata_id;
} Redfishodata_V4_0_0_idRef_CS;
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
// A Chassis represents the physical components for any system.  This resource
// represents the sheet-metal confined spaces and logical zones like racks,
// enclosures, chassis and all other containers. Subsystems (like sensors), which
// operate outside of a system's data plane (meaning the resources are not
// accessible to software running on the system) are linked either directly or
// indirectly through this resource.
//
typedef struct _RedfishChassis_V1_0_4_Chassis_CS {
    RedfishCS_Header                            Header;
    RedfishCS_char                              *odata_context;
    RedfishCS_char                              *odata_id;    
    RedfishCS_char                              *odata_type;  
    RedfishChassis_V1_0_4_Chassis_Actions_CS    *Actions;         // The available actions for this
                                                                  // resource.
    RedfishCS_char                              *AssetTag;        // The user assigned asset tag
                                                                  // for this chassis.
    RedfishCS_char                              *ChassisType;     // This property indicates the
                                                                  // type of physical form factor
                                                                  // of this resource.
    RedfishCS_char                              *Description; 
    RedfishCS_char                              *Id;          
    RedfishCS_char                              *IndicatorLED;    // The state of the indicator
                                                                  // LED, used to identify the
                                                                  // chassis.
    RedfishChassis_V1_0_4_Chassis_Links_CS      *Links;           // Contains references to other
                                                                  // resources that are related to
                                                                  // this resource.
    RedfishCS_Link                              LogServices;      // A reference to the logs for
                                                                  // this chassis.
    RedfishCS_char                              *Manufacturer;    // This is the manufacturer of
                                                                  // this chassis.
    RedfishCS_char                              *Model;           // This is the model number for
                                                                  // the chassis.
    RedfishCS_char                              *Name;        
    RedfishResource_Oem_CS                      *Oem;             // This is the
                                                                  // manufacturer/provider specific
                                                                  // extension moniker used to
                                                                  // divide the Oem object into
                                                                  // sections.
    RedfishCS_char                              *PartNumber;      // The part number for this
                                                                  // chassis.
    RedfishCS_Link                              Power;            // A reference to the power
                                                                  // properties (power supplies,
                                                                  // power policies, sensors) for
                                                                  // this chassis.
    RedfishCS_char                              *PowerState;      // This is the current power
                                                                  // state of the chassis.
    RedfishCS_char                              *SKU;             // This is the SKU for this
                                                                  // chassis.
    RedfishCS_char                              *SerialNumber;    // The serial number for this
                                                                  // chassis.
    RedfishResource_Status_CS                   *Status;      
    RedfishCS_Link                              Thermal;          // A reference to the thermal
                                                                  // properties (fans, cooling,
                                                                  // sensors) for this chassis.
} RedfishChassis_V1_0_4_Chassis_CS;

#ifndef Redfishodata_V4_0_0_idRef_Array_CS_
#define Redfishodata_V4_0_0_idRef_Array_CS_
typedef struct _Redfishodata_V4_0_0_idRef_Array_CS  {
    Redfishodata_V4_0_0_idRef_Array_CS    *Next;
    Redfishodata_V4_0_0_idRef_CS    *ArrayValue;
} Redfishodata_V4_0_0_idRef_Array_CS;
#endif

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_Chassis_V1_0_4_To_CS (char *JsonRawText, RedfishChassis_V1_0_4_Chassis_CS **ReturnedCS);

RedfishCS_status
CS_To_Chassis_V1_0_4_JSON (RedfishChassis_V1_0_4_Chassis_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyChassis_V1_0_4_CS (RedfishChassis_V1_0_4_Chassis_CS *CSPtr);

RedfishCS_status
DestroyChassis_V1_0_4_Json (RedfishCS_char *JsonText);

#endif

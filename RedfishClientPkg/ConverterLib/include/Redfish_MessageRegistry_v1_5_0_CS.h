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

#ifndef RedfishMessageregistry_V1_5_0_CSTRUCT_H_
#define RedfishMessageregistry_V1_5_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishMessageRegistry_V1_5_0_Actions_CS RedfishMessageRegistry_V1_5_0_Actions_CS;
typedef struct _RedfishMessageRegistry_V1_5_0_ClearingLogic_CS RedfishMessageRegistry_V1_5_0_ClearingLogic_CS;
typedef struct _RedfishMessageRegistry_V1_5_0_Message_CS RedfishMessageRegistry_V1_5_0_Message_CS;
typedef struct _RedfishMessageRegistry_V1_5_0_MessageProperty_CS RedfishMessageRegistry_V1_5_0_MessageProperty_CS;
typedef struct _RedfishMessageRegistry_V1_5_0_MessageRegistry_CS RedfishMessageRegistry_V1_5_0_MessageRegistry_CS;
typedef struct _RedfishMessageRegistry_V1_5_0_OemActions_CS RedfishMessageRegistry_V1_5_0_OemActions_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

//
// The available actions for this resource.
//
typedef struct _RedfishMessageRegistry_V1_5_0_Actions_CS {
    RedfishMessageRegistry_V1_5_0_OemActions_CS    *Oem;    // The available OEM-specific
                                                           // actions for this resource.
} RedfishMessageRegistry_V1_5_0_Actions_CS;

//
// The clearing logic associated with this message.  The properties within
// indicate that what messages are cleared by this message as well as under what
// conditions.
//
typedef struct _RedfishMessageRegistry_V1_5_0_ClearingLogic_CS {
    RedfishCS_bool          *ClearsAll;       // An indication of whether all
                                              // prior conditions and messages
                                              // are cleared, provided the
                                              // ClearsIf condition is met.
    RedfishCS_char          *ClearsIf;        // The condition when the event
                                              // is cleared.
    RedfishCS_char_Array    *ClearsMessage;    // The array of MessageIds that
                                              // this message clears when the
                                              // other conditions are met.
} RedfishMessageRegistry_V1_5_0_ClearingLogic_CS;

//
// This type represents how a message is defined within the message registry.
//
typedef struct _RedfishMessageRegistry_V1_5_0_Message_CS {
    RedfishCS_char_Array                              *ArgDescriptions;       // The MessageArg descriptions,
                                                                              // in order, used for this
                                                                              // message.
    RedfishCS_char_Array                              *ArgLongDescriptions;    // The MessageArg normative
                                                                              // descriptions, in order, used
                                                                              // for this message.
    RedfishMessageRegistry_V1_5_0_ClearingLogic_CS    *ClearingLogic;         // The clearing logic associated
                                                                              // with this message.  The
                                                                              // properties within indicate
                                                                              // that what messages are cleared
                                                                              // by this message as well as
                                                                              // under what conditions.
    RedfishCS_char                                    *Deprecated;            // The reason the message has
                                                                              // been deprecated.
    RedfishCS_char                                    *Description;           // A short description of how and
                                                                              // when to use this message.
    RedfishCS_char                                    *LongDescription;       // The normative language that
                                                                              // describes this message's
                                                                              // usage.
    RedfishCS_char                                    *Message;               // The actual message.
    RedfishCS_char                                    *MessageSeverity;       // The severity of the message.
    RedfishCS_int64                                   *NumberOfArgs;          // The number of arguments in the
                                                                              // message.
    RedfishResource_Oem_CS                            *Oem;                   // The OEM extension property.
    RedfishCS_char_Array                              *ParamTypes;            // The MessageArg types, in
                                                                              // order, for the message.
    RedfishCS_char                                    *Resolution;            // Used to provide suggestions on
                                                                              // how to resolve the situation
                                                                              // that caused the error.
    RedfishCS_char                                    *Severity;              // The severity of the message.
    RedfishCS_char                                    *VersionAdded;          // The registry version which
                                                                              // added this message.
    RedfishCS_char                                    *VersionDeprecated;     // The registry version when the
                                                                              // the message was deprecated.
} RedfishMessageRegistry_V1_5_0_Message_CS;

//
// The message keys contained in the message registry.
//
typedef struct _RedfishMessageRegistry_V1_5_0_MessageProperty_CS {
    RedfishCS_Link    Prop;
} RedfishMessageRegistry_V1_5_0_MessageProperty_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishMessageRegistry_V1_5_0_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishMessageRegistry_V1_5_0_OemActions_CS;

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
// The MessageRegistry schema describes all message registries.  It represents the
// properties for the message registries themselves.
//
typedef struct _RedfishMessageRegistry_V1_5_0_MessageRegistry_CS {
    RedfishCS_Header                                    Header;
    RedfishCS_char                                      *odata_type;    
    RedfishMessageRegistry_V1_5_0_Actions_CS            *Actions;           // The available actions for this
                                                                            // resource.
    RedfishCS_char                                      *Description;   
    RedfishCS_char                                      *Id;            
    RedfishCS_char                                      *Language;          // The RFC5646-conformant
                                                                            // language code for the message
                                                                            // registry.
    RedfishMessageRegistry_V1_5_0_MessageProperty_CS    *Messages;          // The message keys contained in
                                                                            // the message registry.
    RedfishCS_char                                      *Name;          
    RedfishResource_Oem_CS                              *Oem;               // The OEM extension property.
    RedfishCS_char                                      *OwningEntity;      // The organization or company
                                                                            // that publishes this message
                                                                            // registry.
    RedfishCS_char                                      *RegistryPrefix;    // The single-word prefix that is
                                                                            // used in forming and decoding
                                                                            // MessageIds.
    RedfishCS_char                                      *RegistryVersion;    // The message registry version
                                                                            // in the middle portion of a
                                                                            // MessageId.
} RedfishMessageRegistry_V1_5_0_MessageRegistry_CS;

RedfishCS_status
Json_MessageRegistry_V1_5_0_To_CS (char *JsonRawText, RedfishMessageRegistry_V1_5_0_MessageRegistry_CS **ReturnedCS);

RedfishCS_status
CS_To_MessageRegistry_V1_5_0_JSON (RedfishMessageRegistry_V1_5_0_MessageRegistry_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyMessageRegistry_V1_5_0_CS (RedfishMessageRegistry_V1_5_0_MessageRegistry_CS *CSPtr);

RedfishCS_status
DestroyMessageRegistry_V1_5_0_Json (RedfishCS_char *JsonText);

#endif

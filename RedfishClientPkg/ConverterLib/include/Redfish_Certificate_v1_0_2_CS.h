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

#ifndef RedfishCertificate_V1_0_2_CSTRUCT_H_
#define RedfishCertificate_V1_0_2_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishCertificate_V1_0_2_Actions_CS RedfishCertificate_V1_0_2_Actions_CS;
typedef struct _RedfishCertificate_V1_0_2_Certificate_CS RedfishCertificate_V1_0_2_Certificate_CS;
typedef struct _RedfishCertificate_V1_0_2_Identifier_CS RedfishCertificate_V1_0_2_Identifier_CS;
typedef struct _RedfishCertificate_V1_0_2_OemActions_CS RedfishCertificate_V1_0_2_OemActions_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

//
// The available actions for this Resource.
//
typedef struct _RedfishCertificate_V1_0_2_Actions_CS {
    RedfishCertificate_V1_0_2_OemActions_CS    *Oem;    // The available OEM-specific
                                                       // actions for this Resource.
} RedfishCertificate_V1_0_2_Actions_CS;

//
// The identifier information about a certificate.
//
typedef struct _RedfishCertificate_V1_0_2_Identifier_CS {
    RedfishCS_char    *City;                 // The city or locality of the
                                             // organization of the entity.
    RedfishCS_char    *CommonName;           // The fully qualified domain
                                             // name of the entity.
    RedfishCS_char    *Country;              // The country of the
                                             // organization of the entity.
    RedfishCS_char    *Email;                // The email address of the
                                             // contact within the
                                             // organization of the entity.
    RedfishCS_char    *Organization;         // The name of the organization
                                             // of the entity.
    RedfishCS_char    *OrganizationalUnit;    // The name of the unit or
                                             // division of the organization
                                             // of the entity.
    RedfishCS_char    *State;                // The state, province, or region
                                             // of the organization of the
                                             // entity.
} RedfishCertificate_V1_0_2_Identifier_CS;

//
// The available OEM-specific actions for this Resource.
//
typedef struct _RedfishCertificate_V1_0_2_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishCertificate_V1_0_2_OemActions_CS;

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
// The Certificate schema describes a certificate that proves the identify of a
// component, account, or service.
//
typedef struct _RedfishCertificate_V1_0_2_Certificate_CS {
    RedfishCS_Header                           Header;
    RedfishCS_char                             *odata_context;   
    RedfishCS_char                             *odata_etag;      
    RedfishCS_char                             *odata_id;        
    RedfishCS_char                             *odata_type;      
    RedfishCertificate_V1_0_2_Actions_CS       *Actions;             // The available actions for this
                                                                     // Resource.
    RedfishCS_char                             *CertificateString;    // The string for the
                                                                     // certificate.
    RedfishCS_char                             *CertificateType;     // The format of the certificate.
    RedfishCS_char                             *Description;     
    RedfishCS_char                             *Id;              
    RedfishCertificate_V1_0_2_Identifier_CS    *Issuer;              // The issuer of the certificate.
    RedfishCS_char_Array                       *KeyUsage;            // The key usage extension, which
                                                                     // defines the purpose of the
                                                                     // public keys in this
                                                                     // certificate.
    RedfishCS_char                             *Name;            
    RedfishResource_Oem_CS                     *Oem;                 // The OEM extension property.
    RedfishCertificate_V1_0_2_Identifier_CS    *Subject;             // The subject of the
                                                                     // certificate.
    RedfishCS_char                             *ValidNotAfter;       // The date when the certificate
                                                                     // is no longer valid.
    RedfishCS_char                             *ValidNotBefore;      // The date when the certificate
                                                                     // becomes valid.
} RedfishCertificate_V1_0_2_Certificate_CS;

RedfishCS_status
Json_Certificate_V1_0_2_To_CS (char *JsonRawText, RedfishCertificate_V1_0_2_Certificate_CS **ReturnedCS);

RedfishCS_status
CS_To_Certificate_V1_0_2_JSON (RedfishCertificate_V1_0_2_Certificate_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyCertificate_V1_0_2_CS (RedfishCertificate_V1_0_2_Certificate_CS *CSPtr);

RedfishCS_status
DestroyCertificate_V1_0_2_Json (RedfishCS_char *JsonText);

#endif

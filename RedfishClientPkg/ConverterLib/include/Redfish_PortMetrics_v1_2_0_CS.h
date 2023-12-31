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

#ifndef RedfishPortmetrics_V1_2_0_CSTRUCT_H_
#define RedfishPortmetrics_V1_2_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishPortMetrics_V1_2_0_SAS_Array_CS RedfishPortMetrics_V1_2_0_SAS_Array_CS;
typedef struct _RedfishPortMetrics_V1_2_0_Transceiver_Array_CS RedfishPortMetrics_V1_2_0_Transceiver_Array_CS;
typedef struct _RedfishPortMetrics_V1_2_0_Actions_CS RedfishPortMetrics_V1_2_0_Actions_CS;
typedef struct _RedfishPortMetrics_V1_2_0_FibreChannel_CS RedfishPortMetrics_V1_2_0_FibreChannel_CS;
typedef struct _RedfishPortMetrics_V1_2_0_GenZ_CS RedfishPortMetrics_V1_2_0_GenZ_CS;
typedef struct _RedfishPortMetrics_V1_2_0_Networking_CS RedfishPortMetrics_V1_2_0_Networking_CS;
typedef struct _RedfishPortMetrics_V1_2_0_OemActions_CS RedfishPortMetrics_V1_2_0_OemActions_CS;
typedef struct _RedfishPortMetrics_V1_2_0_PortMetrics_CS RedfishPortMetrics_V1_2_0_PortMetrics_CS;
typedef struct _RedfishPortMetrics_V1_2_0_SAS_CS RedfishPortMetrics_V1_2_0_SAS_CS;
typedef struct _RedfishPortMetrics_V1_2_0_Transceiver_CS RedfishPortMetrics_V1_2_0_Transceiver_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

//
// The available actions for this resource.
//
typedef struct _RedfishPortMetrics_V1_2_0_Actions_CS {
    RedfishPortMetrics_V1_2_0_OemActions_CS    *Oem;    // The available OEM-specific
                                                       // actions for this resource.
} RedfishPortMetrics_V1_2_0_Actions_CS;

//
// The Fibre Channel-specific port metrics for network ports.
//
typedef struct _RedfishPortMetrics_V1_2_0_FibreChannel_CS {
    RedfishCS_int64    *CorrectableFECErrors;                 // The total number of
                                                              // correctable forward error
                                                              // correction (FEC) errors.
    RedfishCS_int64    *InvalidCRCs;                          // The total number of invalid
                                                              // cyclic redundancy checks
                                                              // (CRCs).
    RedfishCS_int64    *InvalidTXWords;                       // The total number of invalid
                                                              // transmission words.
    RedfishCS_int64    *LinkFailures;                         // The total number of link
                                                              // failures.
    RedfishCS_int64    *LossesOfSignal;                       // The total number of losses of
                                                              // signal.
    RedfishCS_int64    *LossesOfSync;                         // The total number of losses of
                                                              // sync.
    RedfishCS_int64    *RXBBCreditZero;                       // The number of times the
                                                              // receive buffer-to-buffer
                                                              // credit count transitioned to
                                                              // zero.
    RedfishCS_int64    *RXExchanges;                          // The total number of Fibre
                                                              // Channel exchanges received.
    RedfishCS_int64    *RXSequences;                          // The total number of Fibre
                                                              // Channel sequences received.
    RedfishCS_int64    *TXBBCreditZero;                       // The number of times the
                                                              // transmit buffer-to-buffer
                                                              // credit count transitioned to
                                                              // zero.
    RedfishCS_int64    *TXBBCreditZeroDurationMilliseconds;    // The total amount of time the
                                                              // port has been blocked from
                                                              // transmitting due to lack of
                                                              // buffer credits.
    RedfishCS_int64    *TXBBCredits;                          // The number of transmit buffer-
                                                              // to-buffer credits the port is
                                                              // configured to use.
    RedfishCS_int64    *TXExchanges;                          // The total number of Fibre
                                                              // Channel exchanges transmitted.
    RedfishCS_int64    *TXSequences;                          // The total number of Fibre
                                                              // Channel sequences transmitted.
    RedfishCS_int64    *UncorrectableFECErrors;               // The total number of
                                                              // uncorrectable forward error
                                                              // correction (FEC) errors.
} RedfishPortMetrics_V1_2_0_FibreChannel_CS;

//
// The port metrics for a Gen-Z interface.
//
typedef struct _RedfishPortMetrics_V1_2_0_GenZ_CS {
    RedfishCS_int64    *AccessKeyViolations;      // The total number of Access Key
                                                  // Violations detected.
    RedfishCS_int64    *EndToEndCRCErrors;        // The total number of ECRC
                                                  // transient errors detected.
    RedfishCS_int64    *LLRRecovery;              // The total number of times
                                                  // Link-Level Reliability (LLR)
                                                  // recovery has been initiated.
    RedfishCS_int64    *LinkNTE;                  // The total number of link-local
                                                  // non-transient errors detected.
    RedfishCS_int64    *MarkedECN;                // The number of packets with the
                                                  // Congestion ECN bit set.
    RedfishCS_int64    *NonCRCTransientErrors;    // The total number transient
                                                  // errors detected that are
                                                  // unrelated to CRC validation.
    RedfishCS_int64    *PacketCRCErrors;          // The total number of PCRC
                                                  // transient errors detected.
    RedfishCS_int64    *PacketDeadlineDiscards;    // The number of packets
                                                  // discarded due to the
                                                  // Congestion Deadline sub-field
                                                  // reaching zero.
    RedfishCS_int64    *RXStompedECRC;            // The total number of packets
                                                  // received with a stomped ECRC
                                                  // field.
    RedfishCS_int64    *ReceivedECN;              // The number of packets received
                                                  // on this interface with the
                                                  // Congestion ECN bit set.
    RedfishCS_int64    *TXStompedECRC;            // The total number of packets
                                                  // that this interface stomped
                                                  // the ECRC field.
} RedfishPortMetrics_V1_2_0_GenZ_CS;

//
// The port metrics for network ports, including Ethernet, Fibre Channel, and
// InfiniBand, that are not specific to one of these protocols.
//
typedef struct _RedfishPortMetrics_V1_2_0_Networking_CS {
    RedfishCS_int64    *RDMAProtectionErrors;     // The total number of RDMA
                                                  // protection errors.
    RedfishCS_int64    *RDMAProtocolErrors;       // The total number of RDMA
                                                  // protocol errors.
    RedfishCS_int64    *RDMARXBytes;              // The total number of RDMA bytes
                                                  // received on a port since
                                                  // reset.
    RedfishCS_int64    *RDMARXRequests;           // The total number of RDMA
                                                  // requests received on a port
                                                  // since reset.
    RedfishCS_int64    *RDMATXBytes;              // The total number of RDMA bytes
                                                  // transmitted on a port since
                                                  // reset.
    RedfishCS_int64    *RDMATXReadRequests;       // The total number of RDMA read
                                                  // requests transmitted on a port
                                                  // since reset.
    RedfishCS_int64    *RDMATXRequests;           // The total number of RDMA
                                                  // requests transmitted on a port
                                                  // since reset.
    RedfishCS_int64    *RDMATXSendRequests;       // The total number of RDMA send
                                                  // requests transmitted on a port
                                                  // since reset.
    RedfishCS_int64    *RDMATXWriteRequests;      // The total number of RDMA write
                                                  // requests transmitted on a port
                                                  // since reset.
    RedfishCS_int64    *RXBroadcastFrames;        // The total number of valid
                                                  // broadcast frames received on a
                                                  // port since reset.
    RedfishCS_int64    *RXDiscards;               // The total number of frames
                                                  // discarded in a port's receive
                                                  // path since reset.
    RedfishCS_int64    *RXFCSErrors;              // The total number of frames
                                                  // received with frame check
                                                  // sequence (FCS) errors on a
                                                  // port since reset.
    RedfishCS_int64    *RXFalseCarrierErrors;     // The total number of false
                                                  // carrier errors received from
                                                  // phy on a port since reset.
    RedfishCS_int64    *RXFrameAlignmentErrors;    // The total number of frames
                                                  // received with alignment errors
                                                  // on a port since reset.
    RedfishCS_int64    *RXFrames;                 // The total number of frames
                                                  // received on a port since
                                                  // reset.
    RedfishCS_int64    *RXMulticastFrames;        // The total number of valid
                                                  // multicast frames received on a
                                                  // port since reset.
    RedfishCS_int64    *RXOversizeFrames;         // The total number of frames
                                                  // that exceed the maximum frame
                                                  // size.
    RedfishCS_int64    *RXPFCFrames;              // The total number of priority
                                                  // flow control (PFC) frames
                                                  // received on a port since
                                                  // reset.
    RedfishCS_int64    *RXPauseXOFFFrames;        // The total number of flow
                                                  // control frames from the
                                                  // network to pause transmission.
    RedfishCS_int64    *RXPauseXONFrames;         // The total number of flow
                                                  // control frames from the
                                                  // network to resume
                                                  // transmission.
    RedfishCS_int64    *RXUndersizeFrames;        // The total number of frames
                                                  // that are smaller than the
                                                  // minimum frame size of 64
                                                  // bytes.
    RedfishCS_int64    *RXUnicastFrames;          // The total number of valid
                                                  // unicast frames received on a
                                                  // port since reset.
    RedfishCS_int64    *TXBroadcastFrames;        // The total number of good
                                                  // broadcast frames transmitted
                                                  // on a port since reset.
    RedfishCS_int64    *TXDiscards;               // The total number of frames
                                                  // discarded in a port's transmit
                                                  // path since reset.
    RedfishCS_int64    *TXExcessiveCollisions;    // The number of times a single
                                                  // transmitted frame encountered
                                                  // more than 15 collisions.
    RedfishCS_int64    *TXFrames;                 // The total number of frames
                                                  // transmitted on a port since
                                                  // reset.
    RedfishCS_int64    *TXLateCollisions;         // The total number of collisions
                                                  // that occurred after one slot
                                                  // time as defined by IEEE 802.3.
    RedfishCS_int64    *TXMulticastFrames;        // The total number of good
                                                  // multicast frames transmitted
                                                  // on a port since reset.
    RedfishCS_int64    *TXMultipleCollisions;     // The times that a transmitted
                                                  // frame encountered 2-15
                                                  // collisions.
    RedfishCS_int64    *TXPFCFrames;              // The total number of priority
                                                  // flow control (PFC) frames sent
                                                  // on a port since reset.
    RedfishCS_int64    *TXPauseXOFFFrames;        // The total number of XOFF
                                                  // frames transmitted to the
                                                  // network.
    RedfishCS_int64    *TXPauseXONFrames;         // The total number of XON frames
                                                  // transmitted to the network.
    RedfishCS_int64    *TXSingleCollisions;       // The times that a successfully
                                                  // transmitted frame encountered
                                                  // a single collision.
    RedfishCS_int64    *TXUnicastFrames;          // The total number of good
                                                  // unicast frames transmitted on
                                                  // a port since reset.
} RedfishPortMetrics_V1_2_0_Networking_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishPortMetrics_V1_2_0_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishPortMetrics_V1_2_0_OemActions_CS;

//
// The physical metrics for Serial Attached SCSI (SAS).
//
typedef struct _RedfishPortMetrics_V1_2_0_SAS_CS {
    RedfishCS_int64    *InvalidDwordCount;                 // The number of invalid dwords
                                                           // that have been received by the
                                                           // phy outside of phy reset
                                                           // sequences.
    RedfishCS_int64    *LossOfDwordSynchronizationCount;    // The number of times the phy
                                                           // has restarted the link reset
                                                           // sequence because it lost dword
                                                           // synchronization.
    RedfishCS_int64    *RunningDisparityErrorCount;        // The number of dwords
                                                           // containing running disparity
                                                           // errors that have been received
                                                           // by the phy outside of phy
                                                           // reset sequences.
} RedfishPortMetrics_V1_2_0_SAS_CS;

//
// The transceiver metrics.
//
typedef struct _RedfishPortMetrics_V1_2_0_Transceiver_CS {
    RedfishCS_int64    *RXInputPowerMilliWatts;    // The RX input power value of a
                                                   // small form-factor pluggable
                                                   // (SFP) transceiver.
    RedfishCS_int64    *SupplyVoltage;             // The supply voltage of a small
                                                   // form-factor pluggable (SFP)
                                                   // transceiver.
    RedfishCS_int64    *TXBiasCurrentMilliAmps;    // The TX bias current value of a
                                                   // small form-factor pluggable
                                                   // (SFP) transceiver.
    RedfishCS_int64    *TXOutputPowerMilliWatts;    // The TX output power value of a
                                                   // small form-factor pluggable
                                                   // (SFP) transceiver.
} RedfishPortMetrics_V1_2_0_Transceiver_CS;

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
// The PortMetrics schema contains usage and health statistics for a switch device
// or component port summary.
//
typedef struct _RedfishPortMetrics_V1_2_0_PortMetrics_CS {
    RedfishCS_Header                                  Header;
    RedfishCS_char                                    *odata_context;
    RedfishCS_char                                    *odata_etag;  
    RedfishCS_char                                    *odata_id;    
    RedfishCS_char                                    *odata_type;  
    RedfishPortMetrics_V1_2_0_Actions_CS              *Actions;         // The available actions for this
                                                                        // resource.
    RedfishCS_char                                    *Description; 
    RedfishPortMetrics_V1_2_0_FibreChannel_CS         *FibreChannel;    // The Fibre Channel-specific
                                                                        // port metrics for network
                                                                        // ports.
    RedfishPortMetrics_V1_2_0_GenZ_CS                 *GenZ;            // The port metrics specific to
                                                                        // Gen-Z ports.
    RedfishCS_char                                    *Id;          
    RedfishCS_char                                    *Name;        
    RedfishPortMetrics_V1_2_0_Networking_CS           *Networking;      // The port metrics for network
                                                                        // ports, including Ethernet,
                                                                        // Fibre Channel, and InfiniBand,
                                                                        // that are not specific to one
                                                                        // of these protocols.
    RedfishResource_Oem_CS                            *Oem;             // The OEM extension property.
    RedfishCS_int64                                   *RXBytes;         // The total number of bytes
                                                                        // received on a port since
                                                                        // reset.
    RedfishCS_int64                                   *RXErrors;        // The total number of received
                                                                        // errors on a port since reset.
    RedfishPortMetrics_V1_2_0_SAS_Array_CS            *SAS;             // The physical (phy) metrics for
                                                                        // Serial Attached SCSI (SAS).
                                                                        // Each member represents a
                                                                        // single phy.
    RedfishCS_int64                                   *TXBytes;         // The total number of bytes
                                                                        // transmitted on a port since
                                                                        // reset.
    RedfishCS_int64                                   *TXErrors;        // The total number of
                                                                        // transmission errors on a port
                                                                        // since reset.
    RedfishPortMetrics_V1_2_0_Transceiver_Array_CS    *Transceivers;    // The metrics for the
                                                                        // transceivers in this port.
                                                                        // Each member represents a
                                                                        // single transceiver.
} RedfishPortMetrics_V1_2_0_PortMetrics_CS;

typedef struct _RedfishPortMetrics_V1_2_0_SAS_Array_CS  {
    RedfishPortMetrics_V1_2_0_SAS_Array_CS    *Next;
    RedfishPortMetrics_V1_2_0_SAS_CS    *ArrayValue;
} RedfishPortMetrics_V1_2_0_SAS_Array_CS;

typedef struct _RedfishPortMetrics_V1_2_0_Transceiver_Array_CS  {
    RedfishPortMetrics_V1_2_0_Transceiver_Array_CS    *Next;
    RedfishPortMetrics_V1_2_0_Transceiver_CS    *ArrayValue;
} RedfishPortMetrics_V1_2_0_Transceiver_Array_CS;

RedfishCS_status
Json_PortMetrics_V1_2_0_To_CS (char *JsonRawText, RedfishPortMetrics_V1_2_0_PortMetrics_CS **ReturnedCS);

RedfishCS_status
CS_To_PortMetrics_V1_2_0_JSON (RedfishPortMetrics_V1_2_0_PortMetrics_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyPortMetrics_V1_2_0_CS (RedfishPortMetrics_V1_2_0_PortMetrics_CS *CSPtr);

RedfishCS_status
DestroyPortMetrics_V1_2_0_Json (RedfishCS_char *JsonText);

#endif

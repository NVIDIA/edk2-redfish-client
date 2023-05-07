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

#ifndef RedfishSensor_V1_3_0_CSTRUCT_H_
#define RedfishSensor_V1_3_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_CS_
#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
#ifndef Redfishodatav4_idRef_Array_CS_
typedef struct _Redfishodatav4_idRef_Array_CS Redfishodatav4_idRef_Array_CS;
#endif
typedef struct _RedfishResource_Condition_CS RedfishResource_Condition_CS;
#endif

#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

#ifndef RedfishResource_Status_CS_
typedef struct _RedfishResource_Status_CS RedfishResource_Status_CS;
#endif

typedef struct _RedfishSensor_V1_3_0_Actions_CS RedfishSensor_V1_3_0_Actions_CS;
typedef struct _RedfishSensor_V1_3_0_Links_CS RedfishSensor_V1_3_0_Links_CS;
typedef struct _RedfishSensor_V1_3_0_OemActions_CS RedfishSensor_V1_3_0_OemActions_CS;
typedef struct _RedfishSensor_V1_3_0_ResetMetrics_CS RedfishSensor_V1_3_0_ResetMetrics_CS;
typedef struct _RedfishSensor_V1_3_0_Sensor_CS RedfishSensor_V1_3_0_Sensor_CS;
typedef struct _RedfishSensor_V1_3_0_SensorArrayExcerpt_CS RedfishSensor_V1_3_0_SensorArrayExcerpt_CS;
typedef struct _RedfishSensor_V1_3_0_SensorCurrentExcerpt_CS RedfishSensor_V1_3_0_SensorCurrentExcerpt_CS;
typedef struct _RedfishSensor_V1_3_0_SensorEnergykWhExcerpt_CS RedfishSensor_V1_3_0_SensorEnergykWhExcerpt_CS;
typedef struct _RedfishSensor_V1_3_0_SensorExcerpt_CS RedfishSensor_V1_3_0_SensorExcerpt_CS;
typedef struct _RedfishSensor_V1_3_0_SensorFanArrayExcerpt_CS RedfishSensor_V1_3_0_SensorFanArrayExcerpt_CS;
typedef struct _RedfishSensor_V1_3_0_SensorFanExcerpt_CS RedfishSensor_V1_3_0_SensorFanExcerpt_CS;
typedef struct _RedfishSensor_V1_3_0_SensorPowerArrayExcerpt_CS RedfishSensor_V1_3_0_SensorPowerArrayExcerpt_CS;
typedef struct _RedfishSensor_V1_3_0_SensorPowerExcerpt_CS RedfishSensor_V1_3_0_SensorPowerExcerpt_CS;
typedef struct _RedfishSensor_V1_3_0_SensorVoltageExcerpt_CS RedfishSensor_V1_3_0_SensorVoltageExcerpt_CS;
typedef struct _RedfishSensor_V1_3_0_Threshold_CS RedfishSensor_V1_3_0_Threshold_CS;
typedef struct _RedfishSensor_V1_3_0_Thresholds_CS RedfishSensor_V1_3_0_Thresholds_CS;
#ifndef Redfishodatav4_idRef_CS_
typedef struct _Redfishodatav4_idRef_CS Redfishodatav4_idRef_CS;
#endif

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
// The available actions for this resource.
//
typedef struct _RedfishSensor_V1_3_0_Actions_CS {
    RedfishSensor_V1_3_0_ResetMetrics_CS    *Sensor_ResetMetrics;
    RedfishSensor_V1_3_0_OemActions_CS      *Oem;                   // The available OEM-specific
                                                                    // actions for this resource.
} RedfishSensor_V1_3_0_Actions_CS;

//
// The links to other resources that are related to this resource.
//
typedef struct _RedfishSensor_V1_3_0_Links_CS {
    RedfishResource_Oem_CS    *Oem;    // The OEM extension property.
} RedfishSensor_V1_3_0_Links_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishSensor_V1_3_0_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishSensor_V1_3_0_OemActions_CS;

//
// Resets metrics related to this sensor.
//
typedef struct _RedfishSensor_V1_3_0_ResetMetrics_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishSensor_V1_3_0_ResetMetrics_CS;

//
// The Sensor schema describes a sensor and its properties.
//
typedef struct _RedfishSensor_V1_3_0_SensorArrayExcerpt_CS {
    RedfishCS_char     *DataSourceUri;        // The link to the resource that
                                              // provides the data for this
                                              // sensor.
    RedfishCS_char     *DeviceName;           // The name of the device.
    RedfishCS_char     *PhysicalContext;      // The area or device to which
                                              // this sensor measurement
                                              // applies.
    RedfishCS_char     *PhysicalSubContext;    // The usage or location within a
                                              // device to which this sensor
                                              // measurement applies.
    RedfishCS_int64    *Reading;              // The sensor value.
} RedfishSensor_V1_3_0_SensorArrayExcerpt_CS;

//
// The Sensor schema describes a sensor and its properties.
//
typedef struct _RedfishSensor_V1_3_0_SensorCurrentExcerpt_CS {
    RedfishCS_int64    *CrestFactor;     // The crest factor for this
                                         // sensor.
    RedfishCS_char     *DataSourceUri;    // The link to the resource that
                                         // provides the data for this
                                         // sensor.
    RedfishCS_int64    *Reading;         // The sensor value.
    RedfishCS_int64    *THDPercent;      // The total harmonic distortion
                                         // (THD).
} RedfishSensor_V1_3_0_SensorCurrentExcerpt_CS;

//
// The Sensor schema describes a sensor and its properties.
//
typedef struct _RedfishSensor_V1_3_0_SensorEnergykWhExcerpt_CS {
    RedfishCS_char     *DataSourceUri;     // The link to the resource that
                                           // provides the data for this
                                           // sensor.
    RedfishCS_int64    *LifetimeReading;    // The total accumulation value
                                           // for this sensor.
    RedfishCS_int64    *Reading;           // The sensor value.
    RedfishCS_char     *SensorResetTime;    // The date and time when the
                                           // time-based properties were
                                           // last reset.
} RedfishSensor_V1_3_0_SensorEnergykWhExcerpt_CS;

//
// The Sensor schema describes a sensor and its properties.
//
typedef struct _RedfishSensor_V1_3_0_SensorExcerpt_CS {
    RedfishCS_char     *DataSourceUri;    // The link to the resource that
                                         // provides the data for this
                                         // sensor.
    RedfishCS_int64    *Reading;         // The sensor value.
} RedfishSensor_V1_3_0_SensorExcerpt_CS;

//
// The Sensor schema describes a sensor and its properties.
//
typedef struct _RedfishSensor_V1_3_0_SensorFanArrayExcerpt_CS {
    RedfishCS_char     *DataSourceUri;        // The link to the resource that
                                              // provides the data for this
                                              // sensor.
    RedfishCS_char     *DeviceName;           // The name of the device.
    RedfishCS_char     *PhysicalContext;      // The area or device to which
                                              // this sensor measurement
                                              // applies.
    RedfishCS_char     *PhysicalSubContext;    // The usage or location within a
                                              // device to which this sensor
                                              // measurement applies.
    RedfishCS_int64    *Reading;              // The sensor value.
    RedfishCS_int64    *SpeedRPM;             // The rotational speed.
} RedfishSensor_V1_3_0_SensorFanArrayExcerpt_CS;

//
// The Sensor schema describes a sensor and its properties.
//
typedef struct _RedfishSensor_V1_3_0_SensorFanExcerpt_CS {
    RedfishCS_char     *DataSourceUri;    // The link to the resource that
                                         // provides the data for this
                                         // sensor.
    RedfishCS_int64    *Reading;         // The sensor value.
    RedfishCS_int64    *SpeedRPM;        // The rotational speed.
} RedfishSensor_V1_3_0_SensorFanExcerpt_CS;

//
// The Sensor schema describes a sensor and its properties.
//
typedef struct _RedfishSensor_V1_3_0_SensorPowerArrayExcerpt_CS {
    RedfishCS_int64    *ApparentVA;           // The product of voltage and
                                              // current for an AC circuit, in
                                              // Volt-Ampere units.
    RedfishCS_char     *DataSourceUri;        // The link to the resource that
                                              // provides the data for this
                                              // sensor.
    RedfishCS_char     *PhysicalContext;      // The area or device to which
                                              // this sensor measurement
                                              // applies.
    RedfishCS_char     *PhysicalSubContext;    // The usage or location within a
                                              // device to which this sensor
                                              // measurement applies.
    RedfishCS_int64    *PowerFactor;          // The power factor for this
                                              // sensor.
    RedfishCS_int64    *ReactiveVAR;          // The square root of the
                                              // difference term of squared
                                              // ApparentVA and squared Power
                                              // (Reading) for a circuit, in
                                              // var units.
    RedfishCS_int64    *Reading;              // The sensor value.
} RedfishSensor_V1_3_0_SensorPowerArrayExcerpt_CS;

//
// The Sensor schema describes a sensor and its properties.
//
typedef struct _RedfishSensor_V1_3_0_SensorPowerExcerpt_CS {
    RedfishCS_int64    *ApparentVA;      // The product of voltage and
                                         // current for an AC circuit, in
                                         // Volt-Ampere units.
    RedfishCS_char     *DataSourceUri;    // The link to the resource that
                                         // provides the data for this
                                         // sensor.
    RedfishCS_int64    *PowerFactor;     // The power factor for this
                                         // sensor.
    RedfishCS_int64    *ReactiveVAR;     // The square root of the
                                         // difference term of squared
                                         // ApparentVA and squared Power
                                         // (Reading) for a circuit, in
                                         // var units.
    RedfishCS_int64    *Reading;         // The sensor value.
} RedfishSensor_V1_3_0_SensorPowerExcerpt_CS;

//
// The Sensor schema describes a sensor and its properties.
//
typedef struct _RedfishSensor_V1_3_0_SensorVoltageExcerpt_CS {
    RedfishCS_int64    *CrestFactor;     // The crest factor for this
                                         // sensor.
    RedfishCS_char     *DataSourceUri;    // The link to the resource that
                                         // provides the data for this
                                         // sensor.
    RedfishCS_int64    *Reading;         // The sensor value.
    RedfishCS_int64    *THDPercent;      // The total harmonic distortion
                                         // (THD).
} RedfishSensor_V1_3_0_SensorVoltageExcerpt_CS;

//
// The threshold definition for a sensor.
//
typedef struct _RedfishSensor_V1_3_0_Threshold_CS {
    RedfishCS_char     *Activation;    // The direction of crossing that
                                      // activates this threshold.
    RedfishCS_char     *DwellTime;    // The duration the sensor value
                                      // must violate the threshold
                                      // before the threshold is
                                      // activated.
    RedfishCS_int64    *Reading;      // The threshold value.
} RedfishSensor_V1_3_0_Threshold_CS;

//
// The set of thresholds defined for a sensor.
//
typedef struct _RedfishSensor_V1_3_0_Thresholds_CS {
    RedfishSensor_V1_3_0_Threshold_CS    *LowerCaution;        // The value at which the reading
                                                               // is below normal range.
    RedfishSensor_V1_3_0_Threshold_CS    *LowerCautionUser;    // The value at which the reading
                                                               // is below normal range.
    RedfishSensor_V1_3_0_Threshold_CS    *LowerCritical;       // The value at which the reading
                                                               // is below normal range but not
                                                               // yet fatal.
    RedfishSensor_V1_3_0_Threshold_CS    *LowerCriticalUser;    // The value at which the reading
                                                               // is below normal range but not
                                                               // yet fatal.
    RedfishSensor_V1_3_0_Threshold_CS    *LowerFatal;          // The value at which the reading
                                                               // is below normal range and
                                                               // fatal.
    RedfishSensor_V1_3_0_Threshold_CS    *UpperCaution;        // The value at which the reading
                                                               // is above normal range.
    RedfishSensor_V1_3_0_Threshold_CS    *UpperCautionUser;    // The value at which the reading
                                                               // is above normal range.
    RedfishSensor_V1_3_0_Threshold_CS    *UpperCritical;       // The value at which the reading
                                                               // is above normal range but not
                                                               // yet fatal.
    RedfishSensor_V1_3_0_Threshold_CS    *UpperCriticalUser;    // The value at which the reading
                                                               // is above normal range but not
                                                               // yet fatal.
    RedfishSensor_V1_3_0_Threshold_CS    *UpperFatal;          // The value at which the reading
                                                               // is above normal range and
                                                               // fatal.
} RedfishSensor_V1_3_0_Thresholds_CS;

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
// The Sensor schema describes a sensor and its properties.
//
typedef struct _RedfishSensor_V1_3_0_Sensor_CS {
    RedfishCS_Header                      Header;
    RedfishCS_char                        *odata_context;                    
    RedfishCS_char                        *odata_etag;                       
    RedfishCS_char                        *odata_id;                         
    RedfishCS_char                        *odata_type;                       
    RedfishCS_int64                       *Accuracy;                             // The estimated percent error of
                                                                                 // measured versus actual values.
    RedfishSensor_V1_3_0_Actions_CS       *Actions;                              // The available actions for this
                                                                                 // resource.
    RedfishCS_int64                       *AdjustedMaxAllowableOperatingValue;    // The adjusted maximum allowable
                                                                                 // operating value for this
                                                                                 // equipment based on the
                                                                                 // environmental conditions.
    RedfishCS_int64                       *AdjustedMinAllowableOperatingValue;    // The adjusted minimum allowable
                                                                                 // operating value for this
                                                                                 // equipment based on the
                                                                                 // environmental conditions.
    RedfishCS_int64                       *ApparentVA;                           // The product of voltage and
                                                                                 // current for an AC circuit, in
                                                                                 // Volt-Ampere units.
    RedfishCS_int64                       *CrestFactor;                          // The crest factor for this
                                                                                 // sensor.
    RedfishCS_char                        *Description;                      
    RedfishCS_char                        *ElectricalContext;                    // The combination of current-
                                                                                 // carrying conductors.
    RedfishCS_char                        *Id;                               
    RedfishCS_char                        *Implementation;                       // The implementation of the
                                                                                 // sensor.
    RedfishCS_int64                       *LifetimeReading;                      // The total accumulation value
                                                                                 // for this sensor.
    RedfishSensor_V1_3_0_Links_CS         *Links;                                // The links to other resources
                                                                                 // that are related to this
                                                                                 // resource.
    RedfishCS_int64                       *LoadPercent;                          // The power load utilization for
                                                                                 // this sensor.
    RedfishCS_Link                        Location;                              // The location information for
                                                                                 // this sensor.
    RedfishCS_int64                       *MaxAllowableOperatingValue;           // The maximum allowable
                                                                                 // operating value for this
                                                                                 // equipment.
    RedfishCS_int64                       *MinAllowableOperatingValue;           // The minimum allowable
                                                                                 // operating value for this
                                                                                 // equipment.
    RedfishCS_char                        *Name;                             
    RedfishResource_Oem_CS                *Oem;                                  // The OEM extension property.
    RedfishCS_int64                       *PeakReading;                          // The peak sensor value.
    RedfishCS_char                        *PeakReadingTime;                      // The time when the peak sensor
                                                                                 // value occurred.
    RedfishCS_char                        *PhysicalContext;                      // The area or device to which
                                                                                 // this sensor measurement
                                                                                 // applies.
    RedfishCS_char                        *PhysicalSubContext;                   // The usage or location within a
                                                                                 // device to which this sensor
                                                                                 // measurement applies.
    RedfishCS_int64                       *PowerFactor;                          // The power factor for this
                                                                                 // sensor.
    RedfishCS_int64                       *Precision;                            // The number of significant
                                                                                 // digits in the reading.
    RedfishCS_int64                       *ReactiveVAR;                          // The square root of the
                                                                                 // difference term of squared
                                                                                 // ApparentVA and squared Power
                                                                                 // (Reading) for a circuit, in
                                                                                 // var units.
    RedfishCS_int64                       *Reading;                              // The sensor value.
    RedfishCS_int64                       *ReadingRangeMax;                      // The maximum possible value for
                                                                                 // this sensor.
    RedfishCS_int64                       *ReadingRangeMin;                      // The minimum possible value for
                                                                                 // this sensor.
    RedfishCS_char                        *ReadingTime;                          // The date and time that the
                                                                                 // reading was acquired from the
                                                                                 // sensor.
    RedfishCS_char                        *ReadingType;                          // The type of sensor.
    RedfishCS_char                        *ReadingUnits;                         // The units of the reading and
                                                                                 // thresholds.
    Redfishodatav4_idRef_Array_CS         *RelatedItem;                          // An array of links to resources
                                                                                 // or objects that this sensor
                                                                                 // services.
    RedfishCS_int64                       *RelatedItemodata_count;           
    RedfishCS_int64                       *SensingFrequency;                     // The time interval between
                                                                                 // readings of the physical
                                                                                 // sensor.
    RedfishCS_char                        *SensingInterval;                      // The time interval between
                                                                                 // readings of the sensor.
    RedfishCS_char                        *SensorResetTime;                      // The date and time when the
                                                                                 // time-based properties were
                                                                                 // last reset.
    RedfishCS_int64                       *SpeedRPM;                             // The rotational speed.
    RedfishResource_Status_CS             *Status;                               // The status and health of the
                                                                                 // resource and its subordinate
                                                                                 // or dependent resources.
    RedfishCS_int64                       *THDPercent;                           // The total harmonic distortion
                                                                                 // (THD).
    RedfishSensor_V1_3_0_Thresholds_CS    *Thresholds;                           // The set of thresholds defined
                                                                                 // for this sensor.
    RedfishCS_char                        *VoltageType;                          // The voltage type for this
                                                                                 // sensor.
} RedfishSensor_V1_3_0_Sensor_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

#ifndef Redfishodatav4_idRef_Array_CS_
#define Redfishodatav4_idRef_Array_CS_
typedef struct _Redfishodatav4_idRef_Array_CS  {
    Redfishodatav4_idRef_Array_CS    *Next;
    Redfishodatav4_idRef_CS    *ArrayValue;
} Redfishodatav4_idRef_Array_CS;
#endif

RedfishCS_status
Json_Sensor_V1_3_0_To_CS (char *JsonRawText, RedfishSensor_V1_3_0_Sensor_CS **ReturnedCS);

RedfishCS_status
CS_To_Sensor_V1_3_0_JSON (RedfishSensor_V1_3_0_Sensor_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroySensor_V1_3_0_CS (RedfishSensor_V1_3_0_Sensor_CS *CSPtr);

RedfishCS_status
DestroySensor_V1_3_0_Json (RedfishCS_char *JsonText);

#endif

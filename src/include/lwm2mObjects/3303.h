#pragma once
// Automatically generated header file

#include "lwm2m/objects.h"
namespace KnownObjects {
namespace id3303 {
// Custom, overrideable types for Opaque and String resources

    #ifndef SensorUnits3303
    class SensorUnitsType : public PreallocString<30> {};
    #endif
    
    #ifndef ResetMinandMaxMeasuredValues3303
    class ResetMinandMaxMeasuredValuesType : public PreallocString<30> {};
    #endif
    

/* \brief Class for object 3303 - Temperature
 *  Description: This IPSO object should be used with a temperature sensor to report a temperature
 *  measurement. It also provides resources for minimum/maximum measured values and
 *  the minimum/maximum range that can be measured by the temperature sensor. An example
 *  measurement unit is degrees Celsius (ucum:Cel).
 */
class instance : public Lwm2mObjectInstance {
public:

    // 5700 - Last or Current Measured Value from the Sensor
    float SensorValue;
    
    // Optional resource
    // 5601 - The minimum value measured by the sensor since power ON or reset
    float MinMeasuredValue;
    
    // Optional resource
    // 5602 - The maximum value measured by the sensor since power ON or reset
    float MaxMeasuredValue;
    
    // Optional resource
    // 5603 - The minimum value that can be measured by the sensor
    float MinRangeValue;
    
    // Optional resource
    // 5604 - The maximum value that can be measured by the sensor
    float MaxRangeValue;
    
    // Optional resource
    // 5701 - Measurement Units Definition e.g. “Cel” for Temperature in Celsius.
    SensorUnitsType SensorUnits;
    
    // Optional resource
    // 5605 - Reset the Min and Max Measured Values to Current Value
    Executable ResetMinandMaxMeasuredValues;

};

enum class RESID {
    SensorValue = 5700,
    MinMeasuredValue = 5601,
    MaxMeasuredValue = 5602,
    MinRangeValue = 5603,
    MaxRangeValue = 5604,
    SensorUnits = 5701,
    ResetMinandMaxMeasuredValues = 5605,
    
};

/* \brief Class for object 3303 - Temperature
 *  Description: This IPSO object should be used with a temperature sensor to report a temperature
 *  measurement. It also provides resources for minimum/maximum measured values and
 *  the minimum/maximum range that can be measured by the temperature sensor. An example
 *  measurement unit is degrees Celsius (ucum:Cel).
 */
class object : public Lwm2mObject<3303, object, instance> {
public:

    // 5700 - Last or Current Measured Value from the Sensor
    Resource(5700, &instance::SensorValue, O_RES_R) SensorValue;
    
    // Optional resource
    // 5601 - The minimum value measured by the sensor since power ON or reset
    Resource(5601, &instance::MinMeasuredValue, O_RES_R) MinMeasuredValue;
    
    // Optional resource
    // 5602 - The maximum value measured by the sensor since power ON or reset
    Resource(5602, &instance::MaxMeasuredValue, O_RES_R) MaxMeasuredValue;
    
    // Optional resource
    // 5603 - The minimum value that can be measured by the sensor
    Resource(5603, &instance::MinRangeValue, O_RES_R) MinRangeValue;
    
    // Optional resource
    // 5604 - The maximum value that can be measured by the sensor
    Resource(5604, &instance::MaxRangeValue, O_RES_R) MaxRangeValue;
    
    // Optional resource
    // 5701 - Measurement Units Definition e.g. “Cel” for Temperature in Celsius.
    Resource(5701, &instance::SensorUnits, O_RES_R) SensorUnits;
    
    // Optional resource
    // 5605 - Reset the Min and Max Measured Values to Current Value
    Resource(5605, &instance::ResetMinandMaxMeasuredValues) ResetMinandMaxMeasuredValues;
    
};

} // end of id namespace
} // end of KnownObjects namespace
inline bool operator== (KnownObjects::id3303::RESID c1, uint16_t c2) { return (uint16_t) c1 == c2; }
inline bool operator== (uint16_t c2, KnownObjects::id3303::RESID c1) { return (uint16_t) c1 == c2; }
	
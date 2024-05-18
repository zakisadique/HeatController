/*
 * AirQualitySensor.h
 *
 *  Created on: Nov 18, 2023
 *      Author: zakis
 */

/**
 * @file AirQualitySensor.h
 * @brief Definition of the AirQualitySensor class, derived from the Sensor
 * class.
 */

#ifndef AIRQUALITYSENSOR_H_
#define AIRQUALITYSENSOR_H_

#include "Sensor.h"

/**
 * @brief The AirQualitySensor class represents an air quality sensor,
 * inheriting from the Sensor class.
 */
class AirQualitySensor : public Sensor {
public:
    /**
     * @brief Constructor for the AirQualitySensor class with a specified
     * initial current value.
     * @param currentValue The initial value measured by the air
     * quality sensor.
     */
    AirQualitySensor(double currentValue);

    /**
     * @brief Destructor for the AirQualitySensor class (pure virtual in the
     * base class).
     */
    ~AirQualitySensor() = 0;

    /**
     * @brief Virtual function to get the current value measured by the sensor.
     * @return The current value measured by the air quality sensor.
     */
    double getCurrentValue() const override;

    /**
     * @brief Virtual function to set the current value measured by the sensor.
     * @param currentValue The new value of the sensor.
     */
    void setCurrentValue(double currentValue) override;

};

#endif /* AIRQUALITYSENSOR_H_ */

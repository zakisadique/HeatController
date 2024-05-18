/*
 * Sensor.h
 *
 *  Created on: Nov 18, 2023
 *      Author: zakis
 */

/**
 * @file Sensor.h
 * @brief Definition of the Sensor class and SensorType enumeration.
 */

#ifndef SENSOR_H_
#define SENSOR_H_

/**
 * @brief Enumeration representing different types of sensors.
 */
enum SensorType {
    TEMPERATURE, ///< Temperature sensor type.
    HUMIDITY,    ///< Humidity sensor type.
    AIR_QUALITY,  ///< Air quality sensor type.
	INVALID ///< Invalid sensor type
};

/**
 * @brief The Sensor class serves as a base class for various sensor types.
 */
class Sensor {
protected:
    SensorType type; ///< The type of the sensor.
    double currentValue; ///< The current value measured by the sensor.

public:
    /**
     * @brief Virtual destructor for the Sensor class.
     */
    virtual ~Sensor() = 0;

    /**
     * @brief Pure virtual function to get the current value measured by the
     * sensor.
     * @return The current value measured by the sensor.
     */
    virtual double getCurrentValue() const = 0;


    /**
     * @brief Pure virtual function to set the current value measured by the
     * sensor.
     * @param currentValue The new value of the sensor.
     */
    virtual void setCurrentValue(double currentValue) = 0;
};

#endif /* SENSOR_H_ */


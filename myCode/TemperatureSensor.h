/*
 * TemperatureSensor.h
 *
 *  Created on: Nov 18, 2023
 *      Author: zakis
 */

/**
 * @file TemperatureSensor.h
 * @brief Definition of the TemperatureSensor class, inheriting from the
 * Sensor class.
 */

#ifndef TEMPERATURESENSOR_H_
#define TEMPERATURESENSOR_H_

#include "Sensor.h"

/**
 * @brief The TemperatureSensor class represents a temperature sensor,
 * inheriting from the Sensor class.
 */
class TemperatureSensor : public Sensor {
public:
    /**
     * @brief Constructor for the TemperatureSensor class with initial current
     * value.
     * @param currentValue The initial value measured by the
     * temperature sensor.
     */
    TemperatureSensor(double currentValue);

    /**
     * @brief Destructor for the TemperatureSensor class
     * (pure virtual in the base class).
     */
    ~TemperatureSensor() = 0;

    /**
     * @brief Pure virtual function to get the current value measured by the
     * sensor.
     * @return The current value measured by the temperature sensor.
     */
    double getCurrentValue() const override;

    /**
     * @brief Pure virtual function to set the current value measured by the
     * sensor.
     * @param currentValue The new value of the sensor.
     */
    void setCurrentValue(double currentValue) override;

};

#endif /* TEMPERATURESENSOR_H_ */


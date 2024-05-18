/*
 * HumiditySensor.h
 *
 *  Created on: Nov 18, 2023
 *      Author: zakis
 */

/**
 * @file HumiditySensor.h
 * @brief Definition of the HumiditySensor class, derived from the Sensor class.
 */

#ifndef HUMIDITYSENSOR_H_
#define HUMIDITYSENSOR_H_

#include "Sensor.h"

/**
 * @brief The HumiditySensor class represents a humidity sensor, inheriting from
 * the Sensor class.
 */
class HumiditySensor : public Sensor {
public:
    /**
     * @brief Constructor for the HumiditySensor class with a specified initial
     * current value.
     * @param currentValue The initial value measured by the humidity
     * sensor.
     */
    HumiditySensor(double currentValue);

    /**
     * @brief Destructor for the HumiditySensor class (pure virtual in the base
     * class) (pure virtual in the base class).
     */
    ~HumiditySensor() = 0;

    /**
     * @brief Pure virtual function to get the current value measured by the
     * sensor.
     * @return The current value measured by the humidity sensor.
     */
    double getCurrentValue() const override;

    /**
     * @brief Pure virtual function to set the current value measured by the
     * sensor.
     * @param currentValue The new value of the sensor.
     */
    void setCurrentValue(double currentValue) override;
};

#endif /* HUMIDITYSENSOR_H_ */


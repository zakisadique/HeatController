/*
 * PowerSupply.h
 *
 *  Created on: Nov 18, 2023
 *      Author: zakis
 */

/**
 * @file PowerSupply.h
 * @brief Definition of the PowerSupply class.
 */

#ifndef POWERSUPPLY_H_
#define POWERSUPPLY_H_

/**
 * @brief The PowerSupply class represents a power supply with a specific
 * voltage
 */
class PowerSupply {
private:
    int currentVoltage; ///< The current voltage of the power supply.

public:
    /**
     * @brief Default constructor for the Power Supply class.
     */
    PowerSupply();

    /**
     * @brief Destructor for the PowerSupply class.
     */
    ~PowerSupply();

    /**
     * @brief Gets the current voltage of the power supply.
     * @return The current voltage of the power supply
     */
    int getCurrentVoltage() const;

    /**
     * @brief Sets the current state of the power supply.
     * @param currentVoltage The new voltage of the power supply.
     */
    void setCurrentVoltage(int currentVoltage);
};

#endif /* POWERSUPPLY_H_ */


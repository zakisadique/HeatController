/*
 * HeatSource.h
 *
 *  Created on: Nov 18, 2023
 *      Author: zakis
 */

/**
 * @file HeatSource.h
 * @brief Definition of the HeatSource class.
 */

#ifndef HEATSOURCE_H_
#define HEATSOURCE_H_

/**
 * @brief The HeatSource class represents a heat source with a specific state
 * (true for On, false for Off).
 */
class HeatSource {
private:
    bool currentState; ///< The current state of the heat source.

public:
    /**
     * @brief Default constructor for the HeatSource class.
     */
    HeatSource();

    /**
     * @brief Destructor for the HeatSource class.
     */
    ~HeatSource();

    /**
     * @brief Gets the current state of the heat source.
     * @return The current state of the heat source..
     */
    bool getCurrentState() const;

    /**
     * @brief Sets the current state of the heat source.
     * @param currentState The new state of the heat source.
     */
    void setCurrentState(bool currentState);
};

#endif /* HEATSOURCE_H_ */


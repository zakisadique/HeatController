/*
 * HeatController.h
 *
 *  Created on: Nov 18, 2023
 *      Author: zakis
 */

/**
 * @file HeatController.h
 * @brief Definition of the HeatController class.
 */

#ifndef HEATCONTROLLER_H_
#define HEATCONTROLLER_H_

#include "InputKnob.h"
#include "Timer.h"
#include "PowerSupply.h"
#include "HeatSource.h"
#include "Sensor.h"
#include "Display.h"
#include "Logger.h"

/**
 * @brief The HeatController class manages various components for optimal
 * heating in a room.
 */
class HeatController {

private:
private:
    InputKnob* inputKnob; ///< Interface for interacting with the system
    Timer* timer;         ///< Manages scheduling of heating operations
    PowerSupply* powerSupply; ///< Provides the energy necessary for the system
    HeatSource* heatSource;  ///< Physical heating device attached to the system
    Sensor* temperatureSensor; ///< Monitors temperature levels
    Sensor* humiditySensor;    ///< Monitors humidity levels
    Sensor* airQualitySensor;  ///< Monitors air quality levels
    Display* display;          ///< Displays information
    Logger* logger;            ///< Records events for reference




public:
    /**
     * @brief Default constructor for the HeatController class.
     */
    HeatController();

    /**
     * @brief Runs the HeatController, allowing it to respond to user inputs
     *        and manage the heating system.
     */
    void run();

    /**
     * @brief Destructor for the HeatController class.
     */
    ~HeatController();
};

#endif /* HEATCONTROLLER_H_ */

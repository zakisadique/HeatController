/*! \mainpage Heat Controller
 *
 *	The heat controller checks for any change in the knob position using
 *	getPosition() function of the InputKnob class. It also checks the current
 *	temperature by invoking the getCurrentValue() function of TemperatureSensor
 *	class.
 *
 *	If there is a difference between the desired and actual temperatures,
 *	the heat controller fetches the current state of the heat source using
 *	getCurrentState().
 *
 *	If the heat source is off, the controller gets the power supply voltage by
 *	invoking the getCurrentVoltage() function of the PowerSupply class.
 *
 *	If the power is not sufficient, the controller invokes the setDisplaySlots()
 *	function of the Display class and prints a message for the user to check the
 *	power supply.
 *
 *	If the voltage is sufficient, the controller switches on the physical heat
 *	source by invoking the setCurrentState() function of the HeatSource class.

 *	Once the heat source is up and running, the controller gets the current
 *	temperature of the room using getCurrentValue() of the TemperatureSensor
 *  class, and prints on the display by calling setDisplaySlots() function of
 *  the Display class. The heat controller uses the getCurrentValue()
 *  functions of HumiditySensor and AirQualitySensor to fetch data about
 *  humidity and air quality and displays on the screen using setDisplaySlots()
 *  of the Display class.
 *
 *  Meanwhile, the controller also invokes the writeLogs() function of Logger
 *  class after every step to write logs, which may be useful in case of any
 *  malfunction.
 */

/**
 * @file main.cpp
 * @brief Entry point for the Heat Controller application.
 */

#include <iostream>
using namespace std;

#include "HeatController.h"

// Main program
int main ()
{
	cout << "HeatController started." << endl << endl;

	return 0;
}

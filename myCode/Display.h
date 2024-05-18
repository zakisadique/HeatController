/*
 * Display.h
 *
 *  Created on: Nov 18, 2023
 *      Author: zakis
 */

/**
 * @file Display.h
 * @brief Definition of the Display class.
 */

#ifndef DISPLAY_H_
#define DISPLAY_H_

#define DISPLAY_SLOTS 3

#include <string>
using namespace std;

/**
 * @brief The Display class represents a display with multiple slots for
 * content.
 */
class Display {
private:
    /**
     * @brief The number of display slots in the Display class.
     */

    string displaySlots[DISPLAY_SLOTS]; ///< Array to store content.

public:
    /**
     * @brief Default constructor for the Display class.
     */
    Display();

    /**
     * @brief Constructor for the Display class with initial content for each
     * display slot.
     * @param displaySlot An array of strings representing the initial content
     * for each display slot.
     */
    Display(string displaySlot[]);

    /**
     * @brief Destructor for the Display class.
     */
    ~Display();

    /**
     * @brief Sets the content for a specific display slot.
     * @param slotNum The slot number for which the content should be set.
     * @param content The content to set in the specified display slot.
     */
    void setDisplaySlots(int slotNum, string content);
};

#endif /* DISPLAY_H_ */

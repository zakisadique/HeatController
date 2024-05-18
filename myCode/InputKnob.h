/*
 * InputKnob.h
 *
 *  Created on: Nov 18, 2023
 *      Author: zakis
 */

/**
 * @file InputKnob.h
 * @brief Definition of the InputKnob class.
 */

#ifndef INPUTKNOB_H_
#define INPUTKNOB_H_

/**
 * @brief The InputKnob class represents an input knob to provide the user to
 * set a specific temperature
 */
class InputKnob {
private:
    int desiredTemperature; ///< The current position of the input knob.

public:
    /**
     * @brief Default constructor for the InputKnob class.
     */
    InputKnob();

    /**
     * @brief Destructor for the InputKnob class.
     */
    ~InputKnob();

    /**
     * @brief Gets the current position of the input knob.
     * @return The current position of the input knob.
     */
    int getPosition() const;

    /**
     * @brief Sets the position of the input knob.
     * @param position The new position of the input knob.
     */
    void setPosition(int position);
};

#endif /* INPUTKNOB_H_ */


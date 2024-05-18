/*
 * Timer.h
 *
 *  Created on: Nov 18, 2023
 *      Author: zakis
 */
/**
 * @file Timer.h
 * @brief Definition of the Timer class.
 */

#ifndef TIMER_H_
#define TIMER_H_

/**
 * @brief The Timer class represents a timer with a specified state
 * (true for On, false for Off) and remaining time.
 */
class Timer {
private:
    bool currentState; ///< Current state of the timer.
    int timeRemainingMins; ///< Remaining time on the timer in minutes.

public:

    /**
     * @brief Default constructor for the timer class.
     */
    Timer();

    /**
     * @brief Constructs a Timer object with the given initial state and
     * remaining time.
     * @param currentState The initial state of the timer.
     * @param timeMins The initial remaining time on the timer in minutes.
     */
    Timer(bool currentState, int timeMins);

    /**
     * @brief Destructor for the Timer class.
     */
    ~Timer();

    /**
     * @brief Gets the current state of the timer.
     * @return The current state of the timer.
     */
    bool getCurrentState() const;

    /**
     * @brief Sets the current state of the timer.
     * @param currentState The new state of the timer.
     */
    void setCurrentState(bool currentState);

    /**
     * @brief Gets the remaining time on the timer.
     * @return The remaining time on the timer in minutes.
     */
    int getTimeRemainingMins() const;

    /**
     * @brief Sets the remaining time on the timer.
     * @param timeRemainingMins The new remaining time on the timer in minutes.
     */
    void setTimeRemainingMins(int timeRemainingMins);
};

#endif /* TIMER_H_ */

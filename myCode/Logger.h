/*
 * Logger.h
 *
 *  Created on: Nov 18, 2023
 *      Author: zakis
 */

/**
 * @file Logger.h
 * @brief Definition of the Logger class.
 */

#ifndef LOGGER_H_
#define LOGGER_H_

#include <string>
#include <vector>
using namespace std;

/**
 * @brief The Logger class represents a logging mechanism to help debug in case
 * of malfunction.
 */
class Logger {
private:
    vector<string> logs; ///< A string to store logs.

public:
    /**
     * @brief Default constructor for the Logger class.
     */
    Logger();

    /**
     * @brief Destructor for the Logger class.
     */
    ~Logger();

    /**
     * @brief Writes a log entry to the logger.
     * @param log The log entry to be written.
     */
    void writeLogs(string log);

    /**
     * @brief Gets the accumulated logs.
     * @return A string containing the accumulated logs.
     */
    vector<string> getLogs() const;
};

#endif /* LOGGER_H_ */


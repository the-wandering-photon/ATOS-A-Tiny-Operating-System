//
//  system_time.cpp
//  ATOS
//
//  Created by Ian G on 03/07/2022.
//

#include "system_time.hpp"

/**
 *  @brief This function will calculate the current system time (based off of the host's system)
 *  @return Returns a std::string with the current data time
 */
const std::string getSystemDateTimeNow() {
    time_t     timeNow = time(0);
    struct tm  timeStruct;
    char       charBuffer[80];
    timeStruct = *localtime(&timeNow);
    strftime(charBuffer, sizeof(charBuffer), "%X hrs, %d/%m/%Y", &timeStruct);

    return charBuffer;
}

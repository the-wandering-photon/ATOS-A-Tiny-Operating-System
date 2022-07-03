//
//  Event.cpp
//  ATOS
//
//  Created by Ian G on 03/07/2022.
//

#include "Event.hpp"

void Event::setEventName(std::string input_eventName){
    eventName = input_eventName;
}

std::string Event::getEventName(){
    return eventName;
}

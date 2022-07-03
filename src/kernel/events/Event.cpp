//
//  Event.cpp
//  ATOS
//
//  Created by Ian G on 03/07/2022.
//

#include "Event.hpp"

void Event::setEventNameAndId(std::string input_eventName, int input_id){
    eventName = input_eventName;
    eventId = input_id;
}

std::string Event::getEventName(){
    return eventName;
}

int Event::getEventId(){
    return eventId;
}

//
//  Event.hpp
//  ATOS
//
//  Created by Ian G on 03/07/2022.
//

#ifndef Event_hpp
#define Event_hpp

#include<iostream>

class Event {
    
protected:
    int eventId;
    std::string eventName;

public:    
    void setEventNameAndId(std::string input_eventName, int input_id);
    std::string getEventName();
    int getEventId();
};

#endif /* Event_hpp */

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
    int id;
    std::string eventName;

public:    
    void setEventName(std::string input_eventName);
    std::string getEventName();
    
};

#endif /* Event_hpp */

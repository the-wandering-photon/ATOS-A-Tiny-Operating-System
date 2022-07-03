//
//  Event.hpp
//  ATOS
//
//  Created by Ian G on 03/07/2022.
//

#ifndef Event_hpp
#define Event_hpp

#include<iostream>

class Event{
protected:
    int id;
    std::string eventName;

public:
    
    // constructor
    Event(std::string input_eventName) {
        // id = EventManager->getId
        eventName = input_eventName;
    };
        
};

#endif /* Event_hpp */

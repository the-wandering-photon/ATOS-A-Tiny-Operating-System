//
//  KernelEvent.hpp
//  ATOS
//
//  Created by Ian G on 03/07/2022.
//

#ifndef KernelEvent_hpp
#define KernelEvent_hpp

#include <stdio.h>
#include "Event.hpp"

class KernelEvent : public Event{
    
private:
    int kernel_event_id;
    
public:
    KernelEvent(std::string input_eventName) : Event(){
        // Some constructor stuff tbc
    };
        
};

#endif /* KernelEvent_hpp */

//
//  EventManager.hpp
//  ATOS
//
//  Created by Ian G on 03/07/2022.
//

#ifndef EventManager_hpp
#define EventManager_hpp

#import <chrono>
#import <ctime>
#import <stdio.h>
#include<iostream>

#include "../../utils/system_time.hpp"
#include "../../utils/data_structures/LinkedList.hpp"
#include "Event.hpp"


/**
 * @brief A class to manage all events active in the system controlled by the kernel but events can be added by system and user.
 *
 */
class EventManager {
    
public:
    
    EventManager(){
        // get the start time of the event manager, which is the first event to take place on the system.
        startTime = getSystemDateTimeNow();
        printf("Info - Event manager stated at: %s\n", startTime.c_str());
        
        eventIdCounter = 0;
    };
    
    void addEvent(std::string input_eventName);
    void getEventByEid(int eid);
    void printActiveEvents();
    void setEventId(int input_id);
    int getEventId();


protected:
    std::string startTime;
    LinkedList linkedList;
    int eventIdCounter;
    
};

#endif /* EventManager_hpp */

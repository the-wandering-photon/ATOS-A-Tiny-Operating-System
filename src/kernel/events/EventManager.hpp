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
#include "Event.hpp"


// A structure for a traversable double linked list
struct Node{
    Event event;
    Node* prevNode;
    Node* nextNode;
};

/**
 * @brief A class to manage all events active in the system controlled by the kernel but events can be added by system and user.
 *
 */
class EventManager {
    
public:
    Node* head; // head node for linked list
    
    EventManager(){
        head = NULL; // when intialised spawn with no head
        
        // get the start time of the event manager, which is the first event to take place on the system.
        startTime = getSystemDateTimeNow();
        printf("Info - Event manager stated at: %s\n", startTime.c_str());
    };
    
    void registerEvent();
    void getEventByEid(int eid);
    void printActiveEvents();

protected:
    std::string startTime;
    
};

#endif /* EventManager_hpp */

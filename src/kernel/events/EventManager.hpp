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

class EventManager{
public:
    EventManager(){
        startTime = getSystemDateTimeNow();
        printf("Info - Event manager stated at: %s\n", startTime.c_str());
    };
    
    void registerEvent();
    void getEventByEid(int eid);

private:
    void grantEid();
    std::string startTime;
    
};

#endif /* EventManager_hpp */

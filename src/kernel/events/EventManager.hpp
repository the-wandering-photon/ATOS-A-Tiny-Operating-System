//
//  EventManager.hpp
//  ATOS
//
//  Created by Ian G on 03/07/2022.
//

#ifndef EventManager_hpp
#define EventManager_hpp

class EventManager{
    public:
        void registerEvent();
        void getEventByEid(int eid);

    private:
        void grantEid();
        
};

#endif /* EventManager_hpp */

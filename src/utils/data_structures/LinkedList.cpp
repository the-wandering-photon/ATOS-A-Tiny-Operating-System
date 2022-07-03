//
//  LinkedList.cpp
//  ATOS
//
//  Created by Ian G on 03/07/2022.
//

#include "LinkedList.hpp"


void LinkedList::printListItems(){
    Node* nodeIterator = head;
    
    // if the head isnt empty
    if(nodeIterator != NULL){
        printf("The following events are running at %s: \n", getSystemDateTimeNow().c_str());
        
        while (nodeIterator != NULL) {
            //std::cout << nodeIterator->printEventName() << "\n";
            printf("Event ID: %d, name: %s\n", nodeIterator->event.getEventId(), nodeIterator->event.getEventName().c_str());
            nodeIterator = nodeIterator->nextNode;
        }
        
        printf("End of current events.");
        
    } else{
        printf("No events registered");
    }
}

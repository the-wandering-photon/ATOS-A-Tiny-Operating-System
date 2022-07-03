//
//  LinkedList.hpp
//  ATOS
//
//  Created by Ian G on 03/07/2022.
//

#ifndef LinkedList_hpp
#define LinkedList_hpp

#include <stdio.h>

#include "../../../src/kernel/events/Event.hpp"
#include "../system_time.hpp"

// A structure for a traversable double linked list
struct Node{
    int id;
    Event event;
    Node* prevNode;
    Node* nextNode;
};

class LinkedList{
    
public:
    Node* head; // head node for linked list
    
    LinkedList(){
        head = NULL; // when intialised spawn with no head
    };
    
    void printListItems();
};


#endif /* LinkedList_hpp */

//
//  EventManager.cpp
//  ATOS
//
//  Created by Ian G on 03/07/2022.
//

#include "EventManager.hpp"


/**
 * @brief A method to add an event to the event manager double linked list
 * @param input_eventName - std::string - The name of the event
 */
void EventManager::addEvent(std::string input_eventName){
        
    // if the head is null, i.e. we are adding the first event to the list then add the event here at the head
    if (linkedList.head == NULL) {
        Event e;
        e.setEventNameAndId(input_eventName, eventIdCounter);
        
        // create a node at the head of the list
        Node* node = new Node();
        node->event = e;
        node->nextNode = NULL;
        node->prevNode = NULL;
        node->id = eventIdCounter;
        
        // Add this node as the head of the list
        linkedList.head = node;
    }
    
    // if the head is not null, i.e. there is a list in existance
    else{
        Event e;
        e.setEventNameAndId(input_eventName, eventIdCounter);
        
        // create the node basics
        Node* node = new Node();
        node->event = e;
        node->id = eventIdCounter;
        node->nextNode = NULL;
        
        // Iterate through the list until we reach the last item in the list
        Node* previousNode = linkedList.head;
        
        while(previousNode->nextNode != NULL){
            previousNode = previousNode->nextNode;
        }
        
        // Now we have the last node, so add the current node as the next in sequence.
        previousNode->nextNode = node;
        // Set the link backwards from current node to the last node
        node->prevNode = previousNode;
    }
    
    // increment the id counter
    eventIdCounter++;

}

void EventManager::printActiveEvents(){
    linkedList.printListItems();
}

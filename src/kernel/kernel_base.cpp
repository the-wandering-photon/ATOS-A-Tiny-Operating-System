//
//  kernel_base.cpp
//  ATOS
//
//  Created by Ian G on 03/07/2022.
//

#include "kernel_base.hpp"

/**
 * @brief The entrypoint to the software, called from the main file.
 *
 * @todo create abstraction so that the kernel is safe from software running on it.
 */

int boot_entry_point(){
    // FUNCTION VARIABLE DEFINITIONS HERE:
    // Instanciate the event manager, which should be the first object to run
    EventManager eventManager;
    
    Event e;
    e.setEventName("Event 1");
    Event e1;
    e1.setEventName("Event 2");
    Event e2;
    e2.setEventName("Event 3");
    
    Node* first = new Node();
    first->event = e;
    first->nextNode = NULL;
    first->prevNode = NULL;
    
    // Add this node as the head of the list
    eventManager.head = first;
    
    Node* second = new Node();
    second->event = e1;
    second->nextNode = NULL;
    second->prevNode = first;
    first->nextNode = second;
    
    Node* third = new Node();
    third->event = e2;
    third->nextNode = NULL;
    third->prevNode = second;
    second->nextNode = third;
    
    eventManager.printActiveEvents();

    // boolean to control whether the operating system is running.
    bool is_os_running = true;
    

    // OS RUNNING LOOP

    while(is_os_running){
        // managment
        
    }
    
    // if the OS flag is set to not running then something bad has happened
    // perform some emergency data saving and logging before shutdown
    if(!is_os_running){
        
    }

    // cleanup before shutdown

    // Goodbye message
    printf("Thank you for using ATOS! The system is now shut down - see you next time!\n");

    return 0;
}

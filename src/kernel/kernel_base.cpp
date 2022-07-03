//
//  kernel_base.cpp
//  ATOS
//
//  Created by Ian G on 03/07/2022.
//

#include "kernel_base.hpp"
#include<stdio.h>
#include<string>

#include "events/EventManager.hpp"
#include "events/Event.hpp"
#include "events/KernelEvent.hpp"

/**
 * @brief The entrypoint to the software, called from the main file.
 *
 * @todo create abstraction so that the kernel is safe from software running on it.
 */

int boot_entry_point(){
    // FUNCTION VARIABLE DEFINITIONS HERE:

    // boolean to control whether the operating system is running.
    bool is_os_running = true;

    // Event manager
    EventManager* eventManager = new EventManager();
    
    eventManager->registerEvent(); // for a test case

    // PRE-OS LOOP ACTIONS - a place to load in any data required, or set up datastructures etc.
    // consider classes for: RAM, main memory, internal communication etc.


    // OS RUNNING LOOP

    while(is_os_running){
        // managment
        
    }

    // cleanup
    delete eventManager;

    // Goodbye message
    printf("Thank you for using ATOS! The system is now shut down - see you next time!\n");

    return 0;
}

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
    
    eventManager.addEvent("Event one");
    eventManager.addEvent("Event two");
    eventManager.addEvent("Event three");
    eventManager.addEvent("Event four");
    
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

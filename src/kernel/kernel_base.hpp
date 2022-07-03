//
//  kernel_base.hpp
//  ATOS
//
//  Created by Ian G on 03/07/2022.
//

#ifndef kernel_base_hpp
#define kernel_base_hpp

#include <stdio.h>
#include <string>

#include "events/EventManager.hpp"
#include "events/Event.hpp"
#include "events/EventKernel.hpp"

int boot_entry_point(); // entry point into the program

#endif /* kernel_base_hpp */

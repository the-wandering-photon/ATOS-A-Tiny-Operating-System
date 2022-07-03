
# Introduction!

This will be a slowburn project I work on in my free time as and when I can!

I am going to build a virtualised operating system called 'ATOS' (A Tiny Operating System) that runs vitually within windows / mac / linux.

I'll use this readme as a good way to lay down my thoughts, features I wish to implement, roadmaps etc.

It will run on c++, but I'd like it to be able to execute, or run deamons of other languages (for instance a python script) as a deamon service. I am not planning on runing any bytecode, or building an assembler / registers as that would require far more work than I have time to commit to! Though, I may build an emulator that can run simple bytecode within this project, which is a more realistic scope.

## Core OS features & Roadmap:

- [ ] The Kernel:
    - [x] Basic implementation
    - [ ] Error handling
- [ ] Event system:
    - [x] Basic event manager class
    - [x] Add id properties for events in the event manager
    - [ ] Add an event destructor which can be called natively from an event as opposed the event manager (which will be the below task).
    - [ ] Remove an event from the list
    - [ ] Any action which want's to take place on the system must be called as an event and go into the event manager
    - [ ] Any events and their updates will go through the logger class
- [ ] Logger:
    - [ ] Events
    - [ ] Errors
    - [ ] Log in attempts / other security logs
- [ ] RAM emulation 
- [ ] Main memory emulation - (thought: how do I save the state of the machine and how is the data ordered?)
- [ ] Internal communication corridors
- [ ] Bootup
- [ ] Database system
- [ ] Terminal system
- [ ] Event queue system and thredding
- [ ] Filesystem - reading / writing
    - [ ] Should files be stored as binary?
- [ ] User acount system:
    - [ ] Privilages (system, admin, guest)
    - [ ] Profile information - username, password
    - [ ] Login
    - [ ] Logout
    - [ ] Session manager
- [ ] File editing (i.e. creating a .txt file)
    - [ ] A file editing program which turns a binary into text, then you can edit it, and re-save as a binary?
- [ ] Deamons / running tasks / background tasks / !!program execution!!
- [ ] Networking
    - [ ] Sockets
    - [ ] Communication protocols and make my own standard
    - [ ] Peer to peer conversation
    - [ ] Port :80 / :8080
- [ ] Execute other languages
- [ ] GUI
- [ ] Security and file scanning

## Blog!

### Blog post 1 - 03/07/2022.

This is only going to be a short post, as I wanted to write down my thoughts whilst I was out shopping today! I'm going to start the build process with an events manager class which will have the following inheritance:

Event Manager (master) ->     Event Manager Kernel | Event Manager System | Event Manager User

This will allow the Kernel to control certain things which the system or the user cannot, in an attempt to correctly implement privilage control. As such, I'll build (first) a very simple account system which only implements a kernel user, and the system will check that the user trying to do x is the kernel user, and not another type of user.

This presents the first security problem of this architecture - what would be to stop somebody using say, an overflow, ROP (return oriented programming), or any other attack vector, to escelate privlages to kernel or to present as the kernel to the system? The architecture of this may be something which changes over time, and before I commit any hard code to paper I will have a good think about the safest and best way to implement a kernel user who, ultimatley, can do what they like in the system.

This also presents another problem - how do I safely store credentials? The kernel and system user wont have 'credentials' in the same way the user does, however it will still need some form of check to take place to make sure it isnt a bad actor `posing` as the kernel.

Things to consider:

- [ ] How to store data
- [ ] How to create & authenticate kernel user trying to do actions
- [x] How to prevent somebody posing as the kernel - what checks or fingerprints can I add to validate the kernel that a user wouldn't have access to? How can this be done even if the code was reverse engineered (presuming it is a closed source operating system)

Re point 3 of the above - having thought about it briefly, there doesn't need to be any validation for kernel actions because of the class inheritance of the event manager - kernel actions can only be completed by the kernel manager class. I'll keep this in mind whilst developing. A user can perform a system function through sudo, but a user shouldn't be able to perform a kernel action -> at the moment I don't know what actions will be kernel vs system vs user, so it will be interesting to see how that pans out through development!

I have also implemented a double linked list class (which I will turn more generic soon as at the moment it only accepts Events, so I will use templating for this) which allows the event manager to keep a list of events.

## Research Log!

### The Kernel:

I already have some knowledge of what a kernel is, and how it operates from things I have played around with in linux in the past. This however, is going to dive much deeper than the knowledge I have!

#### From Wikipedia:

The kernel is a computer program at the core of a computer's operating system and generally has complete control over everything in the system. It is the portion of the operating system code that is always resident in memory and facilitates interactions between hardware and software components. A full kernel controls all hardware resources (e.g. I/O, memory, cryptography) via device drivers, arbitrates conflicts between processes concerning such resources, and optimizes the utilization of common resources e.g. CPU & cache usage, file systems, and network sockets. On most systems, the kernel is one of the first programs loaded on startup (after the bootloader). It handles the rest of startup as well as memory, peripherals, and input/output (I/O) requests from software, translating them into data-processing instructions for the central processing unit.

The critical code of the kernel is usually loaded into a separate area of memory, which is protected from access by application software or other less critical parts of the operating system. The kernel performs its tasks, such as running processes, managing hardware devices such as the hard disk, and handling interrupts, in this protected kernel space. In contrast, application programs such as browsers, word processors, or audio or video players use a separate area of memory, user space. This separation prevents user data and kernel data from interfering with each other and causing instability and slowness,[1] as well as preventing malfunctioning applications from affecting other applications or crashing the entire operating system. Even in systems where the kernel is included in application address spaces, memory protection is used to prevent unauthorized applications from modifying the kernel. 

The kernel's interface is a low-level abstraction layer. When a process requests a service from the kernel, it must invoke a system call, usually through a wrapper function.

There are different kernel architecture designs. Monolithic kernels run entirely in a single address space with the CPU executing in supervisor mode, mainly for speed. Microkernels run most but not all of their services in user space,[3] like user processes do, mainly for resilience and modularity.[4] MINIX 3 is a notable example of microkernel design. Instead, the Linux kernel is monolithic, although it is also modular, for it can insert and remove loadable kernel modules at runtime.

This central component of a computer system is responsible for executing programs. The kernel takes responsibility for deciding at any time which of the many running programs should be allocated to the processor or processors. 

### Networking:

TBC..

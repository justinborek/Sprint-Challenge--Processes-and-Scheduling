1. Still working on this one...it's got me stumped.


2. The possible states of a process are as follows:
    1. Ready or Waiting - This state is when the process has
    been loaded into main memory and is waiting for execution
    by the CPU.
    2. Running - The process moves to this state when the CPU
    chooses it for execution. The process instructions are then
    executed by one of the system's cores, either in kernel or
    user mode.
    3. Blocked - When a process cannot carry on without an 
    external change in state or an event occuring. 
    4. Terminated - A process can be terminated by either 
    completing it's execution or by being killed. The process
    is no longer running, but it remains in the process table
    as a zombie process until it's parent calls the wait system call. 

3. On my system, tested with 1000 calls, printf took 2ms,         write took 45ms. 


4. The reason printf can be faster than write in some cases(despite the fact that printf calls write under the hood) is
that printf doesn't necessarily call write EVERY time it runs.
printf actually stores it's result in a memory buffer, and it only calls write in certain circumstances. 
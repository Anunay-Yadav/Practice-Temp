#include <stdlib.h> 
#include <stdio.h>
#include <iostream>


class task{
    public :
        void (*heap_f)(void*);
        void* arguments;


        task(void func(void*),void* arguments);
        task(task && a);
        task(task &a);
        bool execute();
        void operator()();
        ~task();
};
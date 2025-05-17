
#pragma once
#include "process.hpp"
#include "processdata.hpp"

class scheduler{
    int cpu_cycle;
    public:
        scheduler(int cpu_cycle_);


        virtual void add_process(process)=0;
        virtual void  run()=0;
        virtual ProcessData get_processes_data() =0;

};
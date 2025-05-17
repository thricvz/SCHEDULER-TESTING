#pragma once

struct process{
    private:
        int duration;
    //time the process entered the process list
        int entry_point; 
        int id;
    public:
    process(int duration,int entry_point,int id);
    int get_id();
    int get_entry_point();
    int get_duration();
};
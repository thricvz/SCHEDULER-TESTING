#include "process.hpp"




process::process(int duration_,int entry_point_,int id_){
    duration = duration_;
    entry_point = entry_point_;
    id = id_;
};
int process::get_id(){
    return id;
};
int process::get_entry_point(){
    return entry_point;
};
int process::get_duration(){
    return duration;
};
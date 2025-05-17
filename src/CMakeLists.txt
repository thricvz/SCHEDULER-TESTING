cmake_minimum_required(VERSION 3.2)

project("Scheduler testing")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)



include_directories(include)

set(CHOSEN_SCHEDULER "MLFQ")

add_executable(main main.cpp scheduler.cpp process.cpp)


add_library(
    chosen_scheduler 
    $<$<STREQUAL:${CHOSEN_SCHEDULER},"MLFQ">:mlfq.cpp>

)


target_link_libraries(main chosen_scheduler)
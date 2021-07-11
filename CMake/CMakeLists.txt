cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(Chamelion LANGUAGES CXX)
set(BIN_PATH "../")
add_library(GrumpySNMPLibs
    STATIC
        "../src/source/init.cpp"
        "../src/source/snmp.cpp"
        "../src/header/init.h"
        "../src/header/snmp.h"
        "../src/header/logger.h"
        "../src/header/timer.h"
)

add_executable(GrumpySNMP ../src/source/main.cpp)

target_link_libraries(GrumpySNMP GrumpySNMPLibs)
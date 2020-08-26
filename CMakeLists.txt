cmake_minimum_required(VERSION 3.16)
project(FOMOSv2-CLtest C)

set(CMAKE_C_STANDARD 11)

add_executable(FOMOSv2-CLtest CL/main.c CL/usrLogin.c startup/startFOMOSCL.c startup/kernal.c startup/multiboot.h power/powerOff.c power/restart.c helpFiles/help.c iwi/iwi.c)
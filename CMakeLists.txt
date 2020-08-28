cmake_minimum_required(VERSION 3.16)
project(FOMOSv2-CLtest C)

set(CMAKE_C_STANDARD 11)

add_executable(FOMOSv2-CLtest FOMOSCL/CL/main.c usrNam/usrNam.c headerFiles/usrNam.h FOMOSCL/CL/usrLogin.c startup/startFOMOSCL.c power/powerOff.c power/restart.c helpFiles/help.c iwi/iwi.c netConnect/netConnect.c headerFiles/openFile.h testBIOS/main.c)
cmake_minimum_required(VERSION 3.16)
project(FOMOSv2-CLtest C)

set(CMAKE_C_STANDARD 11)

add_executable(FOMOSv2-CLtest FOMOSCL/CL/main.c FOMOSCL/usrNam/usrNam.c FOMOSCL/headerFiles/usrNam.h FOMOSCL/CL/usrLogin.c FOMOSCL/startup/startFOMOSCL.c FOMOSCL/power/powerOff.c FOMOSCL/power/restart.c FOMOSCL/helpFiles/help.c FOMOSCL/iwi/iwi.c FOMOSCL/netConnect/netConnect.c FOMOSCL/headerFiles/openFile.h testBIOS/main.c)
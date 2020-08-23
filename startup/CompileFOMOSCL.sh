#!/usr/bin/env bash

echo "Compiling Files"
gcc -Wall CL/usrLogin.c -o CL/usrLogin
gcc -Wall CL/main.c -o CL/main
gcc -Wall helpFiles/help.c -o helpFiles/help
gcc -Wall power/powerOff.c -o power/powerOff
gcc -Wall power/restart.c -o power/restart

sh startup/StartCL.sh

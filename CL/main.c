#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int powerOff = 1;

void CL() {

    char command[50];
    printf("Enter command: ");
    scanf("%s", command);
    if(!strcmp(command, "help")) {
        system("cat helpFiles/FOMOSCL.txt");
    } else if (!strcmp(command, "powerOff")) {
        system("gcc -Wall ../power/powerOff.c -o ../power/powerOff");
        system("../power/powerOff");
        powerOff = 0;
    } else if (!strcmp(command, "restart")) {
        system("gcc -Wall ../power/restart.c -o ../power/restart");
        printf("Enter your password \n");
        system("sudo ../power/restart");
        powerOff = 0;
    }
    else {
        printf("Unknown command \n");
    }

}

int main() {
    printf("______________ \n");
    printf("| FOMOSv2-CL | \n");
    printf("-------------- \n");

    for (;;) {
        CL();
        if (powerOff == 0) {
            printf("Goodbye \n");
            exit(0);
        }
    }
}

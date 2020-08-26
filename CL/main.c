#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int powerOff = 1;

void CL() {

    char command[50];

    char time[10] = "time";
    /* char hr12[10] = " 12hr";
    char hr24[10] = " 24hr"; */

    printf("Enter command: ");
    scanf("%s", command);
    if(!strcmp(command, "help")) {
        system("gcc -Wall helpFiles/help.c -o helpFiles/help");
        system("./helpFiles/help");
    } else if (!strcmp(command, "powerOff")) {
        system("gcc -Wall power/powerOff.c -o power/powerOff");
        system("sudo ./power/powerOff");
        powerOff = 0;
    } else if (!strcmp(command, "restart")) {
        system("gcc -Wall ower/restart.c -o power/restart");
        printf("Enter your password \n");
        system("sudo ./power/restart");
        powerOff = 0;
    } else if (!strcmp(command, "iwi")) {
        system("gcc -Wall iwi/iwi.c -o iwi/iwi");
        system("iwi/iwi");
    } else if (!strcmp(command, "usrNam")) {
        system("gcc -Wall usrNam/usrNam.c -o usrNam/usrNam");
        system("./usrNam/usrNam");
    }
    /*else if (!strcmp(command, time && hr12)) {
        system("gcc -Wall time/12hrTime.c -o time/12hrTime");
        system("./time/12hrTime");
    } else if (!strcmp(command, time && hr24)) {
        system("gcc -Wall time/24hrTime.c -o time/12hrTime");
        system("./time/24hrTime");
    }*/
    else {
        printf("Unknown command \n");
    }

}

void printTime() {
    time_t rawtime;
    struct tm *timeinfo;
    time(&rawtime);
    timeinfo = localtime(&rawtime);

    char *currentTime = asctime(timeinfo);

    printf("%s", currentTime);
}


int main() {
    printf("______________ \n");
    printf("| FOMOSv2-CL | \n");
    printf("-------------- \n");

    printTime();

    for (;;) {
        CL();
        if (powerOff == 0) {
            printf("Goodbye \n");
            exit(0);
        }
    }
}

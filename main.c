#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void CL() {

    char command[50];
    printf("Enter command: ");
    scanf("%s", command);
    if(!strcmp(command, "help")) {
        system("cat helpFiles/FOMOSCL.txt");
    }
    else {
        printf("Unknown command \n");
    }

}

int main() {
    printf("FOMOSv2-CL \n");

    for (;;) {
        CL();
    }

    return 0;
}

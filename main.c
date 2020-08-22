#include <stdio.h>
#include <stdlib.h>

void CL() {
    char *command;

    printf("Enter a command: ");
    scanf(" %c", &command);

    if ((command = "help")) {
        system("cat helpFiles/FOMOSCL.txt");
    } else {
        printf("Uknown");
    }
    exit(0);
}

int main() {
    printf("FOMOSv2-CL \n");

    CL();

    return 0;
}

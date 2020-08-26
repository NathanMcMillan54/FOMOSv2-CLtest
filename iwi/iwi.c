#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int exitInstall = 1;

void option() {
    printf("I ) Install\n");
    printf("U ) Update\n");

    char input[4];
    printf("Enter I or U: ");
    scanf("%s", input);
    if(!strcmp(input, "help")) {
        system("cat helpFiles/iwi.txt");
    } else if (!strcmp(input, "exit")) {
        printf("Exiting iwi...\n");
        exitInstall = 0;
    } else if (!strcmp(input, "I")) {
        system("sh iwi/iwiInstall.sh");
    } else if (!strcmp(input, "U")) {
        system("sh iwi/iwiUpdate.sh");
    }
    else {
        printf("Enter I or U \n");
    }

}

int main() {
    for (;;) {
        option();
        if (exitInstall == 0) {
            exit(0);
        }
    }
}

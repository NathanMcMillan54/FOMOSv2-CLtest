#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int option;

    printf("1) FOMOSCL \n");
    printf("2) Commands \n");
    printf("3) Problems \n");
    printf("4) iwi \n");

    printf("Enter a number: ");
    scanf("%d", &option);

    switch(option) {
        case 1 :
            system("cat helpFiles/FOMOSCL.txt");
            break;
        case 2 :
            system("cat helpFiles/commands.txt");
            break;
        case 3 :
            system("cat helpFiles/problems.txt");
            break;
        case 4:
            system("cat helpFiles/iwi.txt");
        default :
            printf("NaN \n" );
            printf("Exiting help menu... \n");
    }

    return 0;
}

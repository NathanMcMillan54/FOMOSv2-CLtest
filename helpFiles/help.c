#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int option;

    printf("1) FOMOSCL");
    printf("2) Commands");

    printf("Enter a number: ");
    scanf("%d", &option);

    switch(option) {
        case 1 :
            system("cat ../textFiles/FOMOSCL.txt");
            break;
        case 2 :
            system("cat ../textFiles/commands.txt");
            break;
        case 3 :
            printf("ok \n" );
            break;
        case 4 :
            printf("ok \n" );
            break;
        default :
            printf("NaN \n" );
    }

    return 0;
}

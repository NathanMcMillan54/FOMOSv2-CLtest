#include <stdio.h>

void CL() {
    char command[50];

    printf("Enter a command: ");
    scanf("%[^\n]", command);

    printf("%s \n", command);

}

int main() {
    printf("FOMOSv2-CL \n");
    CL();

    return 0;
}

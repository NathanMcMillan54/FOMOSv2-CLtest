#include <stdio.h>
#include "../headerFiles/openFile.h"

int main() {
    FILE *fp;
    char str[MAXCHAR];
    // this is just a test for now
    // this file will be used for tests for arguments in commands
    char *fileName = "CL/usrFiles/test.txt";

    fp = fopen(fileName, "r");
    if (fp == NULL){
        printf("Could not open this help file %s", fileName);
        return 1;
    }
    while (fgets(str, MAXCHAR, fp) != NULL)
        printf("%s", str);
    fclose(fp);
    return 0;
}

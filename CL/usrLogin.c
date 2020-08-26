#include <stdio.h>
#include <stdlib.h>

void login() {
    system("echo $USER");
    system("sudo ./CL/main");
}

int main() {
    printf("Login to\n");
    login();
}

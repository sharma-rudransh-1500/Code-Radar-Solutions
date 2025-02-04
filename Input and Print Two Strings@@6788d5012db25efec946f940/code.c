#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char c[100];
    scanf("%s",&c);
    printf("You entered: %s",c);
    return 0;
}
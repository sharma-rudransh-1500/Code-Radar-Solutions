#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char s;
    scanf("%s",&s);
    printf("You entered: %s",s);
    return 0;
}
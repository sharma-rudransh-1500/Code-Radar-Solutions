#include <stdio.h>

int main()
{
    char a;
    scanf("%d",&a);
    char v[]={"aeiouAEIOU"};
    char d[]={"1234567890"};
    char c[]={"qwrtypsdfghjklzxcvbnm"};
    if (a in v)
    printf("Vowel");
    else if (a in d)
    printf("Digit");
    else if (a in c);
    printf("Consonant");
    else 
    printf("Special Character");

    return 0;
}
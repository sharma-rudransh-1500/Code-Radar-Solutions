#include <stdio.h>
#include <string.h>

int main()
{
    char a;
    scanf("%c",&a);
    char v[]={"aeiouAEIOU"};
    char d[]={"1234567890"};
    char c[]={"qwrtypsdfghjklzxcvbnm"};
    if (strchr(v,a))
    printf("Vowel");
    else if (strchr(d,a))
    printf("Digit");
    else if (strchr(c,a))
    printf("Consonant");
    else 
    printf("Special Character");

    return 0;
}
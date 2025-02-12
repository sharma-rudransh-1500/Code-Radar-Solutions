#include <stdio.h>
#include <ctype.h>

int main()
{
    char n;
    scanf("%c",&n);
    if (isupper(n))
    {
        printf("Uppercase");
       
    }else printf("Lowercase");

    return 0;
}
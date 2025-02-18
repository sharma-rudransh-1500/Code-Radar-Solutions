#include <stdio.h>

int main(){
    int n,p;
    scanf("%d %d",&n,&p);
    int bit = (n >> p )& 1;

    printf("%d",bit);

    return 0;
}
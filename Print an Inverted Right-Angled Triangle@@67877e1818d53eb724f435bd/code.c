#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    for(int i=0;i<=n-1;i++){
        for(int j=i;j>=i;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
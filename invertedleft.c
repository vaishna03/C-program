#include <stdio.h>

int main() {
    int n;
    int i,j,s;
    printf("enter n :");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        for(s=1;s<=i-1;s++){
            printf(" ");
        }
        for(j=1;j<=n-i+1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
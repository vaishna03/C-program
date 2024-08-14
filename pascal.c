#include <stdio.h>

int main() {
    int n;
    int i, j, s, c;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {

        for (s = 0; s < n - i - 1; s++) {
            printf(" ");
        }
        c = 1; 
        for (j = 0; j <= i; j++) {
            printf("%d ", c);
            c = c * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}

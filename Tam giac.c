#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int n, i, j, k;
    scanf("%d", &n);
    printf("\nOutput:\n");
    for (i = 1; i <= n; i++){
        for (j = 1; j <= n-i; j++) printf("  ");
        for (k = 1; k <= 2*i-1; k++) printf("%2d", k);
        printf("\n");
    }
    printf("\n");
    return 0;
}

#include <stdio.h>
#include <math.h>

int main(){
    int n, i; 
    int S = 1;
    do {
        printf("Enter n: ");
        scanf("%d", &n);
        if (n <= 0 || n >= 10) {
            continue;
        }
    } while (n <= 0 || n >= 10);
    for (i = 1; i <= n; i++) {
        S *= i;
    }
    printf("%d! = %d", n, S);
    return 0;
}

#include <stdio.h>

int isFibonacci(int n) {
    int t1 = 1, t2 = 1, f = 1;
    if (n == 1) return 1; 
    while (f < n) { 
        f = t1 + t2;
        t1 = t2;
        t2 = f;
    }
    return n == f;
}

int main() {
    int n;
    do {
        printf("Enter a positive integer: ");
        scanf("%d", &n);
    } while (n < 1);
    if (isFibonacci(n)) {
        printf("%d is a Fibonacci element.", n);
    } else {
        printf("%d is not a Fibonacci element.", n);
    }
    return 0;
}

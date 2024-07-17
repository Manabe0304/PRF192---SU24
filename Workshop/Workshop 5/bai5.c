#include <stdio.h>

int isPrime(int num) {
    int i;
	if (num <= 1) {
        return 0;
    }
    
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    
    return 1;
}

int main() {
    int n, i;
    printf("n = ");
    scanf("%d", &n);
    
    if (n <= 0 || n >= 100) {
        printf("n = %d, invalid input!", n);
        return 0;
    }
    
    int A[n];
    for (i = 0; i < n; i++) {
        printf("A[%d] = ", i);
        scanf("%d", &A[i]);
    }

    int count = 0;
    for (i = 0; i < n; i++) {
        if (isPrime(A[i])) {
            count++;
        }
    }
    
    printf("Prime numbers in array: %d", count);
    return 0;
}

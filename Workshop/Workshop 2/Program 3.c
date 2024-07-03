// Online C compiler to run C program online
#include <stdio.h>

int sumDigits(int n) {
    int sum = 0;
    do
    { int remainder = remainder = n % 10;
        n = n/10;
        sum += remainder;
    }
    while (n > 0); 
    return sum;
}

int main() {
    int n, S;
    do {
        printf("Enter a nonnegative integer (negative to terminate): ");
        scanf("%d", &n);
        if (n >= 0) {
            S = sumDigits(n);
            printf("Sum of digits: %d\n", S); 
        }
    } while (n >= 0);
    return 0;
}

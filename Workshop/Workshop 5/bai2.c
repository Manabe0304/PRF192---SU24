#include <stdio.h>
#include <math.h>
int isPerfectSquare(int num) {
    int root = sqrt(num);
    return (root * root == num);
}

int main() {
    int n, i;
    printf("Enter n = ");
    scanf("%d", &n);
        if (n <= 0) {
            printf("n = %d. Invalid input!", n);
            return 0;
    }

    int A[n];
    for (i = 0; i < n; ++i) {
        printf("A[%d] = ", i);
        scanf("%d", &A[i]);
    }
    printf("\n");
    
    printf("Array in reverse order:");
    for (i = n - 1; i >= 0; --i) {
        printf(" %d", A[i]);
    }
    printf("\n");

    int largestSquare = -1;
    for (i = 0; i < n; ++i) {
        if (isPerfectSquare(A[i]) && A[i] > largestSquare) {
            largestSquare = A[i];
        }
    }

    if (largestSquare != -1) {
        printf("The largest square number: %d", largestSquare);
    } else {
        printf("The array has no square number.");
    }

    return 0;
}


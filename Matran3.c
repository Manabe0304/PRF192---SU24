#include <stdio.h>
const MAX = 100;

void InputMatrix(int A[][MAX], int m, int n){
    int i, j;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++){
            printf("PT[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
}
void OutputMatrix(int A[][MAX], int m, int n){
    int i, j;
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++)
            printf("%4d", A[i][j]);
        printf("\n");
    }    
}
int min(int A[][MAX], int m, int n){
    int i, j, min = A[0][0];
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            if (A[i][j] < min) min = A[i][j];
    return min;
}
int max(int A[][MAX], int m, int n){
    int i, j, max = A[0][0];
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            if (A[i][j] > max) max = A[i][j];
    return max;
}
int isPrime(int n){
    int i;
    for (i =2; i*i <= n; i++)
       if (n%i == 0) return 0;
     return (n > 1);
}
void OutputPrimes(int A[][MAX], int m, int n){
    int i, j;
    printf("\nList of primes in matrix:");
    for (i = 0; i < m; i++)
       for (j = 0; j < n; j++)
          if (isPrime(A[i][j])) printf("%4d", A[i][j]);
}
int main(){
    int A[MAX][MAX], m, n, i, j;
    printf("Nhap m = "); scanf("%d", &m);
    printf("Nhap n = "); scanf("%d", &n);
    puts("Nhap ma tran A:"); InputMatrix(A, m, n);
    puts("Xuat ma tran A:"); OutputMatrix(A, m, n);
    printf("min = %d, max = %d", min(A, m, n), max(A, m, n));
    OutputPrimes(A, m, n);
    return 0;
}


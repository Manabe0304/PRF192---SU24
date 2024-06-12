//Mang 1 chieu
#include <stdio.h>

int main(){
    int B[6] = {2, 1, 3};
    int i;
    printf("Array B at address: %x", &B[6]);
    for (i = 0; i < 6; i++)
        printf("\nB[%d] = %d at address: %x", i, B[i], &B[i]);
    return 0;
}

#include <stdio.h>

int main(){
    int C[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i, j;
    printf("Array C at address: %x", C);
    for (i = 0; i < 3; i++)
           for (j = 0; j < 3; j++)
                printf("\nC[%d][%d] = %d at address: %x", i, j, C[i][j], &C[i][j]);
    return 0;
}

#include <stdio.h>
#define MAX 100

void input1(int a[], int n){
    int i;
    for (i = 0; i < n; i++){
        printf("Enter a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
void input2(int *a, int *pn){
    *pn = 0;
    int x;
    do{
        printf("Enter a integer: ");
        scanf("%d", &x);
        if(x!=0) a[(*pn)++] = x;
    } while (x!=0);
} 
void output(int a[], int n){
    int i;
    for (i = 0; i < n; i++){
        printf("\t%d", a[i]);
    }
}
int main(){
    int a[MAX], n;
    printf("Enter n = "); scanf("%d", &n);
    printf("Enter an array:\n"); input1(a, n);
    printf("Print an array:\n"); output(a, n);
    printf("\nEnter ab array:\n"); input2(a, &n);
    printf("Print an array:\n"); output(a, n);
    return 0;
}

//Get Average
#include <stdio.h>

double getAverage(int arr[], int size){
    int i, sum = 0;
    for (i = 0; i < size; i++){
        sum +=arr[i];
    }
    return sum*1.0/size;
}
int main(){
    int A[1000], n, i;
    printf("Size of A: "); scanf("%d", &n);
    for (i = 0; i < n; i++){
        printf("A[%d] = ", i); scanf("%d", &A[i]);
    }
    printf("Array Elements");
    for (i = 0; i < n; i++){
        printf(" %d", A[i]);
    }
    printf("\nAverage: %g", getAverage(A, n));
    return 0;
}

//Prime Numbers
#include <stdio.h>

void Input(int a[], int n){
    int i;
    for (i = 0; i < n; i++){
        printf("A[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

void Output(const int a[], int n){
    int i;
    printf("Output:");
    for (i = 0; i < n; i++)
       printf(" %d", a[i]);
    printf("\n");
}
 int IsPrime(int n){
     if (n < 2) return 0;
     else{
         int i;
         for (i = 2; i < n; i++)
            if(n%i == 0) return 0;
         return 1;
     }
 }
 void Primes(const int  a[], int n){
     int i;
     printf("The Prime numbers:");
     for (i = 0; i < n; i++)
         if(IsPrime(a[i])) printf(" %d", a[i]);
 }
 int main(){
     int N, A[1000];
     printf("N = "); scanf("%d", &N);
     Input(A,N); Output(A,N);
     Primes(A,N);
     return 0;
 }

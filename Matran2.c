#include <stdio.h>
const MAX = 100;

void InputMatrix(int A[][MAX], int n){
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++){
            printf("PT[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
}
void OutputMatrix(int A[][MAX], int n){
    int i, j;
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++)
            printf("%4d", A[i][j]);
        printf("\n");
    }    
}
void Cong2MT(int A[][MAX], int B[][MAX], int C[MAX][MAX], int n){
    int i, j;
    for (i = 0; i < n; i++)
         for (j = 0; j < n; j++)
            C[i][j] = A[i][j] + B[i][j];
}

void Nhan2MT(int A[][MAX], int B[][MAX], int C[][MAX], int n){
    int i, j, k;
    for (i = 0; i < n; i++){
         for (j = 0; j < n; j++){
             C[i][j] = 0;
             for (k = 0; k < n; k++)
                   C[i][j] += A[i][k]*B[k][j];
         }
    }     
}
int main(){
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX], D[MAX][MAX], n, i, j, k;
    printf("Nhap n = "); scanf("%d", &n);
    puts("Nhap ma tran A:");; InputMatrix(A, n);
    puts("Nhap ma tran B:");; InputMatrix(B, n);
    puts("Ma tran C = A + B:"); Cong2MT(A, B, C, n); OutputMatrix(C, n);
    puts("Ma tran D = A * B:"); Nhan2MT(A, B, D, n); OutputMatrix(D, n);
    return 0;
}


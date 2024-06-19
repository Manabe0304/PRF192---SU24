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
int main(){
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX], m, l, n, i, j, k;
    printf("Nhap m = "); scanf("%d", &m);
    printf("Nhap l = "); scanf("%d", &l);
    printf("Nhap n = "); scanf("%d", &n);
    puts("Nhap ma tran A:");; InputMatrix(A, m, l);
    puts("Nhap ma tran B:");; InputMatrix(B, l, n);
    puts("Ma tran C = A*B:");
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            C[i][j] = 0;
            for (k = 0; k < 1; k++)
               C[i][j] += A[i][k]*B[k][j];
            printf("%4d", C[i][j]);
        }
    printf("\n");
    }
    return 0;
}


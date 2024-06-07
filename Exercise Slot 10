Bai 1: Half Christmas Tree
//Up half Christmas Tree
#include <stdio.h>

int main() {
    int n;
    do {
        printf("Enter n: "); 
        scanf("%d", &n);
    } while (n <= 0 || n >= 10);
    
    for (int i = 0; i <= n; i++)
        for (int j = 0; j < i; j++)
            printf("*");
        printf("\n);
return 0;
}

//Diverted half Christmas Tree
#include <stdio.h>

int main() {
    int n;
    do {
        printf("Enter n: "); 
        scanf("%d", &n);
    } while (n <= 0 || n >= 10);
    
    for (int i = 0; i <= n; i++)
        for (int j = 0; j < n - i; j++)
            printf("*");
        printf("\n");
return 0;
}

//Pascal Trangle
#include <stdio.h>
int Coefficient(int n, int k){
    if (k == 0 || k == n)
         return 1;
    else 
         return Coefficient(n - 1, k - 1) + Coefficient(n - 1, k);
}

int main(){
    int n, i, j;
    do{
        printf("Enter row numbers of Pascal, n = "); scanf("%d", &n);
    }
    while(n <= 0 || n >= 10);
    for (i = 0; i < n; i++){
        for (j = 0; j < n - i - 1; j++)
            printf("  ");
        for (j = 0; j <= i; j++)
            printf("%2d  ", Coefficient(i, j));
        printf("\n");
    }
    return 0;
}

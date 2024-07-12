#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void sortDesc(int a[], int n) {
    int i, j, temp;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main(){
    system("cls");
    int n, i, a[n];
    scanf("%d", &n);
     if(n < 10){
        for (i = 0; i < n; i++) scanf("%d", &a[i]);
    } else {
        return 1;
    }
    int k = 0;
    int s[n];
    for (i = 0; i < n; i++){
        if(a[i] % 2 == 1 && a[i] > 0){
            s[k] = a[i] * a[i];
            k++;
        }
    }
    sortDesc(s, k);
    
    printf("\nOUTPUT\n");
    for (i = 0; i < k; i++) {
        printf("%d ", s[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}

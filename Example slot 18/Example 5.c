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
    }
    int count = 0;
    int s[n];
    for (i = 0; i < n; i++){
        if(a[i] % 2 == 1 && a[i] > 0){
        s[count] = a[i] * a[i];
        count++;
        }
    }
    printf("\nOUTPUT\n");
    if(count > 0) {
        sortDesc(s, count);
        for (i = 0; i < count; i++) {
            printf("%d ", s[i]);
        }
        printf("\n");
    } else {
        return 1;
    }
    system("pause");
    return 0;
}

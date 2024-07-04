#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int findMax(int a[], int n) {
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

int main() {
    system("cls");
    //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
    int n = 7;
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE:
    int b[n]; //mang chua cac so duy nhat co 2 chu so
    int c[n]; //mang chua so cac so duy nhat co 2 chu so
    int sizeOfBC = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 9 && a[i] < 100) {
            int check = -1;
            for (int j = 0; j < sizeOfBC; j++) {
                if (a[i] == b[j]) {
                    check = j;
                    break;
                }
            }
            if (check == -1) {
                b[sizeOfBC] = a[i];
                c[sizeOfBC] = 1;
                sizeOfBC++;
            } else {
                c[check]++;
            }
        }
    }

    int max = findMax(c, sizeOfBC);
    for (int i = 0; i < sizeOfBC; i++) {
        if (c[i] == max) {
            printf("%d ", b[i]);
        }
    }
    
    if (sizeOfBC == 0) {
        printf("no two-digit number");
    }
    
    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return (0);
}

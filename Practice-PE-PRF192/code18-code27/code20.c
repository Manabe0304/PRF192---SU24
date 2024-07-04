#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void swap(float &a, float &b) {
    float tmp = a;
    a = b;
    b = tmp;
}

void sort(float a[], int n) {
    int i = 0;
    for (i = 0; i < n - 1; i++) {
        int j = 0;
        for (j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                swap(a[i], a[j]);
            }
        }
    }
}

int main() {
    system("cls");
    //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
    int n = 5;
    float a[n];
    int i = 0;
    for (i = 0; i < n; i++) {
        scanf("%f", &a[i]);
    }

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE:
    sort(a, n);
    for (i = 0; i < n; i++) {
        printf("%f ", a[i]);
    }

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return (0);
}

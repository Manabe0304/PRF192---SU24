#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortDescending(int arr[], int n) {
    int i, j;
	for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

int main() {
    int n, i, x;
    printf("N = ");
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Mang vua nhap la: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("X = ");
    scanf("%d", &x);

    printf("Cac vi tri cua %d trong mang la: \n", x);
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("%d ", i);
        }
    }
    printf("\n");

    sortDescending(arr, n);

    printf("Mang sau khi sap xep la: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


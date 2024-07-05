#include <stdio.h>
#include <string.h>

void swap(char *a, char *b) {
    char temp[100];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

void sortNames(char names[][100], int n) {
    int i, j; 
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                swap(names[i], names[j]);
            }
        }
    }
}

int main() {
    int n, i;
    printf("Nhap so luong SV: ");
    scanf("%d", &n);

    char names[n][100];
    for (i = 0; i < n; i++) {
        printf("Nhap ten SV %d: ", i + 1);
        scanf("%s", names[i]);
    }

    sortNames(names, n);

    printf("Danh sach SV sau khi sap xep:\n");
    for (i = 0; i < n; i++) {
        printf("Ten SV %d: %s\n", i + 1, names[i]);
    }

    return 0;
}


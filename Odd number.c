#include <stdio.h>

void findOddDuplicates(int arr[], int n) {
    int i, j;
    int found = 0;

    printf("\nOutput:\n");
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) { // Check if the number is odd
            for (j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    printf("%d\n", arr[i]);
                    found = 1;
                    break;
                }
            }
        }
    }
    if (!found) {
        printf("No odd duplicates found.\n");
    }
}

int main() {
    int n, i;

    // Take input from the user
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findOddDuplicates(arr, n);
    printf("\n");

    return 0;
}

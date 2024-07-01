#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char W[100], S[100];
    int i, p, q;
    printf("Nhap W = "); scanf("%s", W);
    printf("Nhap S = "); scanf("%s", S);
    printf("P = "); scanf("%d", &p);
    printf("Q = "); scanf("%d", &q);
    int lenW = strlen(W);
    int lenS = strlen(S);

    // Swap p and q if p is greater than q
    if (p > q) {
        int temp = p;
        p = q;
        q = temp;
    }
    if (p > lenW || q > lenW) {
        return 0; 
    }
    // Create a result array large enough to hold the modified string
    char result[300]; // Ensure this is large enough to hold the new string
    int index = 0;

    // Copy characters from W up to position p into result
    for (i = 0; i < p; i++) {
        result[index++] = W[i];
    }

    // Insert S at position p
    for (i = 0; i < lenS; i++) {
        result[index++] = S[i];
    }

    // Copy characters from W from position p to q into result
    for (i = p; i < q; i++) {
        result[index++] = W[i];
    }

    // Insert S at position q
    for (i = 0; i < lenS; i++) {
        result[index++] = S[i];
    }

    // Copy the remaining characters from W after position q into result
    for (i = q; i < lenW; i++) {
        result[index++] = W[i];
    }

    result[index] = '\0'; // Null-terminate the result string

    printf("Ket qua: %s", result);

    return 0;
}

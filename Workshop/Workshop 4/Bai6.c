#include <stdio.h>
#include <string.h>

int main() {
    char W[100], S[100];
    int p, q;
    printf("Nhap W = "); scanf("%s", W);
    printf("Nhap S = "); scanf("%s", S);
    printf("P = "); scanf("%d", &p);
    printf("Q = "); scanf("%d", &q);
    int lenW = strlen(W);
    int lenS = strlen(S);
    // Swap p and q if p > q
    if (p > q) {
        int temp = p;
        p = q;
        q = temp;
    }
    // Check if p and q are within the bounds of W
    if (p > lenW || q > lenW) {
        return 0; // Exits if p or q is greater than the length of W
    }
    // Create a result array large enough to hold the modified string
    // Ensure that the size of result is sufficient to hold the concatenated string
    char result[300] = "";

    // Copy characters from W up to position p into result
    strncat(result, W, p);

    // Insert S at position p
    strcat(result, S);
    
    // Copy characters from W from position p to q into result
    strncat(result, W + p, q - p);
    
    // Insert S at position q
    strcat(result, S);
    
    // Copy the remaining characters from W after position q into result
    strcat(result, W + q);
    
    printf("Ket qua: %s", result);

    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char W[100], S[100], result[100];
    int p, q;

    printf("Nhap W: ");
    scanf("%s", W);

    printf("Nhap S: ");
    scanf("%s", S);

    printf("Nhap P: ");
    scanf("%d", &p);

    printf("Nhap Q: ");
    scanf("%d", &q);

    if (p >= 0 && p <= strlen(W) && q >= 0 && q <= strlen(W)) {
        strncpy(result, W, p);
        strcat(result, S);
        strcat(result, W + p);

        strncpy(result + q + strlen(S), W + q, strlen(W) - q);
        strncpy(result + q, S, strlen(S));

        printf("Ket qua: %s\n", result);
    } else {
        printf("Invalid positions for insertion.\n");
    }

    return 0;
}


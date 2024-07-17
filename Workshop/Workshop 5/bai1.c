#include <stdio.h>

int main() {
    double a, b;
    printf("a = ");
    scanf("%lf", &a);
    printf("b = ");
    scanf("%lf", &b);
    if (a == 0) {
        if (b == 0) {
            printf("The equation has infinite solutions.");
        } else {
            printf("The equation has no solution.");
        }
    } else {
        // Calculate the solution x = -b/a
        double x = -b / a;
        printf("The equation has one solution, x = %.3lf", x);
    }

    return 0;
}
        

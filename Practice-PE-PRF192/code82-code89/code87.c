#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calSin(double x, double c){
    double term = x; // First term x^1/1!
    double sum = term; // Initialize sum of series
    int n = 1;
    
    while (fabs(term) > c) {
        term *= -x * x / (2 * n * (2 * n + 1)); // Calculate next term in series
        sum += term; // Add term to sum
        n++;
    }
    
    return sum;
}

int main() // DO NOT EDIT THE main FUNCTION
{
    system("cls");
    printf("\nTEST Q5 (2 marks):\n");
    double x, c, s;
    printf("Enter x = "); scanf("%lf", &x);
    printf("Enter c = "); scanf("%lf", &c);
    s = calSin(x, c);
    printf("sin(%.1f) = %.4f\n", x, s);
    printf("\nOUTPUT:\n");
    printf("%.4f\n", s);
    printf("\n");
    system("pause");
    return(0);
}

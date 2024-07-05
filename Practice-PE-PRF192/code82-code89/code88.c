#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double triangleArea(double a, double b, double c) {
    // Check if the sides can form a triangle
    if (a + b > c && a + c > b && b + c > a) {
        // Calculate the semi-perimeter
        double p = (a + b + c) / 2.0;
        // Calculate the area using Heron's formula
        double area = sqrt(p * (p - a) * (p - b) * (p - c));
        return area;
    }
    return 0; // Return 0 if the sides cannot form a triangle
}

int main() // DO NOT EDIT THE main FUNCTION
{
    system("cls");
    printf("\nTEST Q4 (2 marks):\n");
    double a, b, c, s;
    printf("Enter a = "); scanf("%lf", &a);
    printf("Enter b = "); scanf("%lf", &b);
    printf("Enter c = "); scanf("%lf", &c);
    s = triangleArea(a, b, c);
    printf("Area = %.2f\n", s);
    printf("\nOUTPUT:\n");
    printf("%.2f\n", s);
    printf("\n");
    system("pause");
    return(0);
}

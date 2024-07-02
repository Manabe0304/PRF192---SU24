#include <stdio.h>
#include <math.h>

int main(){
     double x;
     printf("Enter x = "); scanf("%lf", &x); 
     printf("f(x) = %.2lf", (2 + exp(x) + x)/(x*x+1));
     return 0;
}

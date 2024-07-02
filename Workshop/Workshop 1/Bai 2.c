#include <stdio.h>
#include <math.h>

int main(){
    float x; double f;
    printf("Enter x = ");
    scanf("%f", &x);
    if ((x > 0) && (x != 2))
    {
        f = (x*x + 2*sqrt(x)) / (x - 2);
        printf("Output f(x) = %f", f);
    } else {
        f = 1;
        printf("Output f(x) = %lf", f);
    }   
    return 0;
}

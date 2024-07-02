#include <stdio.h>
#include <math.h>

int main(){
    double x, f;
    printf("Enter x: ");
    scanf("%lf", &x);
    f = (x*x + exp(x)) / (1 +x*x);
    printf("Output: %lf", f);
    return 0;
}

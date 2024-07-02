#include <stdio.h>
#include <math.h>

int main(){
     int n, i;
     double S = 0;
     do{
          printf("Enter n = ");
          scanf("%d", &n);
          if (n <= 1) {
               continue;
          }
     } while (n <= 1);
     for (i = 1; i <= n; i++) {
        S += 1.0 / i;
    }
    printf("Sum S = %lf", S);
    return 0;
}

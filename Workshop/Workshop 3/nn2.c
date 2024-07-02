#include <stdio.h>
#include <math.h>

int main(){
     int n, i;
     double s = 1;
     printf("Enter a positive number, n = "); scanf("%d", &n); 
     if (n <= 0)
         printf("Invalid input!");
     else{
         for (i = 1; i <= n; i++)
            s += 1.0/(i*(i+1));
         printf("Sum S = %.4lf", s);
     }
     return 0;
}

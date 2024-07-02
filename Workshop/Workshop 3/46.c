#include <stdio.h>
#include <math.h>

int main(){
     int n, min = 10, max = -1;
     printf("Enter n = "); scanf("%d", &n);
     if(n <= 0)
         printf("Invalid input!");
     else{
         while (n > 0){
             int i = n%10;
             if(i < min) min = i;
             if(i > max) max = i;
             n = n/10;
         }
         printf("min digit: %d", min);
         printf("\nmax digit: %d", max);
     }
     return 0;
}

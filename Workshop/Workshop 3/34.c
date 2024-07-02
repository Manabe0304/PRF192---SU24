#include <stdio.h>
#include <math.h>

int main(){
     int n, i, s = 0;
     do{
         printf("Enter n = "); scanf("%d", &n);
         if (n <= 0)
            printf("Invalid input!\n");
     }while(n <= 0);
     
     for(i = 1; i <= n; i++)
     {
        if(sqrt(i) == floor(sqrt(i)))
             s += i;
     }
     printf("Sum of the square numbers: %d", s);
     return 0;
}

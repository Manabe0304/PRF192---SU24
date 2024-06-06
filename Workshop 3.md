Link: https://drive.google.com/drive/folders/1DlJmmxNOUMovbr6Ty3sioQy2rjGueZAA?usp=drive_link

Bài 1 
#include <stdio.h>
#include <math.h>

int main(){
     double x;
     printf("Enter x = "); scanf("%lf", &x); 
     printf("f(x) = %.2lf", (2 + exp(x) + x)/(x*x+1));
     return 0;
}

Bài 2 
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

Bài 3
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

Bài 4 
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

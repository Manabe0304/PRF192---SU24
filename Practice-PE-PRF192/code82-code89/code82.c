#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  	int n;
  	int i,S=0;
  	printf("Nhap n(n > 0):");
  	scanf("%d",&n);
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	for( i = 1; i <= n; i++)
  	{
	    if(n % i == 0)
	    {
	      S = S + i;
	    }
  	}
  	printf("Tong cac uoc cua %d la: %d",n, S);
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

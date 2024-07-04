#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int isPrime(int num)
{
    if (num <= 1) return 0;
    if (num % 2 == 0 && num > 2) return 0;
    for(int i = 3; i < num / 2; i+= 2)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n;
	scanf("%d",&n);  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	if(isPrime(n) == 1) printf("Not Prime");
	else if(isPrime(n) == 0) printf("Prime");

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

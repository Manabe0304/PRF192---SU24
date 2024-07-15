#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
    int n, i, count = 0;
    scanf("%d", &n);
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
    for (i = 1; i <= 100; i++) {
        if (i % n == 0) {
            count++;
        }
    }
    printf("%d", count);
  
    if (count == 0) {
         printf("There is no number divisible by %d", n);
    }
 
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

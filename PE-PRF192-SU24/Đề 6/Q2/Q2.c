#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int a,b; 
  scanf("%d %d", &a, &b);

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  swap(&a, &b);
  printf("%d", (a*(a+1))/2 - (b*(b-1))/2);

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

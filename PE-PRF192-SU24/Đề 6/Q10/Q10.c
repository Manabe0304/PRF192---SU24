#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n, i, j, sum, count = 0;
  scanf("%d", &n);
  int array[n];
  for (i = 0; i < n; i++) {
    scanf("%d", &array[i]);
  }
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for (i = 0; i < n; i++) {
    sum = 1;
    for (j = 2; j <= array[i] / 2; j++) {
      if (array[i] % j == 0) {
        sum += j;
      }
    }
    if (sum == array[i]) {
      count++;
    }
  }
  if (count == 0) {
    printf("There is no perfect number among the %d elements of the array", n);
  } else {
    printf("%d", count);
  }
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

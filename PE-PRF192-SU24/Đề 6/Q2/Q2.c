#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int m, n, temp;
  int i, sum = 0; 
  scanf("%d %d", &m, &n);

  if (m > n) {
    temp = m;
    m = n;
    n = temp;
  }

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for (i = m; i <= n; i++) {
    sum += i;
  }
  printf("%d", sum);

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

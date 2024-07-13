#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int m, n, evenCount = 0, oddCount = 0;
  scanf("%d %d", &m, &n);
  for (int i = m; i <= n; i++) {
    if (i % 2 == 0) {
      evenCount++;
    } else {
      oddCount++;
    }
  }
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf("%d\n", evenCount);
  printf("%d\n", oddCount);
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

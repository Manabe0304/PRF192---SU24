#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  char str[100];
  printf("Enter a string = ");
  fgets(str, 100, stdin);
  str[strlen(str)-1] = '\0';
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  int count = 0;
  for(int i = 0; i < strlen(str); i++) {
    if(isupper(str[i])) {
      count++;
    }
  }
  printf("%d", count);
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

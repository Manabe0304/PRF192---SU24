#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
char s[20];
int i, len;
    scanf("%[^\n]", s);
    len=strlen(s);
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
    if(len>5 && len<20 && len%2==1){
  	   for(i=(len/2)-2; i<=(len/2)+2; i++) printf("%c", s[i]);
    }
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

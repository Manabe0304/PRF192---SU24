#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int i, j;
  char s1[100], s2[100], s3[100];
  fgets(s1, 100, stdin);
  s1[strcspn(s1, "\n")] = 0;
  fgets(s2, 100, stdin);
  s2[strcspn(s2, "\n")] = 0;
  fgets(s3, 100, stdin);
  s3[strcspn(s3, "\n")] = 0;    

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for(i = 0; i<strlen(s1); i++){
    if(s1[i] == s2[0] && s1[i+1] == s2[1]){
      for(j = 0; j<strlen(s3); j++){
        printf("%c", s3[j]);
      }
      i+=1;
    }else{
      printf("%c", s1[i]);
    }
  }
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

//Cach 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int i, j;
  char s1[1000], s2[100], s3[100];
  fgets(s1, 1000, stdin);
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

//Cach 2
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int i, j;
  char s1[1000], s2[100], s3[100];
  scanf(" %[^\n]s", s1);
  scanf("%s", s2);
  scanf("%s", s3);
  int ls1 = strlen(s1);
  int ls2 = strlen(s2);
  int ls3 = strlen(s3);
  
  for (i = 0; i <= ls1 - ls2; ){
      if(strncmp(&s1[i], s2, ls2) == 0){
          for (j = 0; j < ls3; j++){
              s1[i+j] = s3[j];
          }
          for (j = i + ls2; j <= ls1; j++){
              s1[j] = s1[j + ls2 - ls3];
          }
          ls1 -= ls2 - ls3;
      } else {
          i++;
      }  
  }

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf("%s", s1);
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  return(0);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n,i,j,k,m;
  scanf("%d",&n);
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  m = 2*n-1;
  for(i=1;i<m;i++) printf("*");
  printf("*\n");
  i=2;j=m-1;
  while(i<=j) {
    for(k=1;k<j;k++) {
      if(k==i)
       printf("*");
       else
        printf(" ");
     }
    printf("*\n");
    i++;j--;	
  }







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

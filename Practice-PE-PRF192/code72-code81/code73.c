#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n,s,i;
  scanf("%d",&n);
  s=0;
  for(i=1;i<=n;i++)
    if(i%2==0) s += i;
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf("%d",s);







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

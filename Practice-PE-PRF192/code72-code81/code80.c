#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void arrayOfdigits(int n, int a[], int *m) {
  int i,k; i=0;
  while(n>0) {
   k = n%10;
   a[i++]=k;
   n=n/10; 	
  }
  *m=i;
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n,m,i,s; scanf("%d",&n);
  int a[20];
  arrayOfdigits(n,a,&m);
  s = 1;
  for(i=0;i<m;i++) s *= a[i]; 
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf("%d",s);







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

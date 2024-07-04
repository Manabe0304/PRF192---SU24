#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
int n,i,j,t;
scanf("%d",&n);
int a[n];
for(i=0; i<n; i++) scanf("%d",&a[i]);

// sap xep bubble sort
for(j=n-1; j>0; j--)
{
for(i=0; i<j; i++)
	if(a[i]>a[i+1]) {t=a[i]; a[i]=a[i+1]; a[i+1]=t;}
}
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
for(i=0; i<n; i++) printf("%d\n",a[i]);
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

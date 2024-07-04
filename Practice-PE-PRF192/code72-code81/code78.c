#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void calcFreq(int a[], int b[], int n) {
  int i,j,c;
  for(i=0;i<n;i++) {
    if(a[i]==-1) continue; // a[i] value already counted to frequency
    // starting to calculate number of a[j], for which a[j]==a[i]
    c = 1;
    for(j=i+1;j<n;j++) {
      if(a[j]==a[i]) {
        c++;
        a[j]=-1; // Denote that a[j] already counted	
       }	
      }
    b[i]= c; // c is the frequency of element a[i]
  }
 }
int maxValue(int a[], int n) {
  int i,x;
  x=a[0];
  for(i=1;i<n;i++)
    if(a[i]>x) x=a[i];
  return(x);  
 }

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int a[10],b[10],n,i,maxFreq; n=7;
  for(i=0;i<n;i++) scanf("%d",&a[i]);
  for(i=0;i<n;i++) {
    b[i]=-1;	
    if(a[i]%2==1) a[i]=-1;	
  }  
  calcFreq(a,b,n); 
  maxFreq = maxValue(b,n);
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  if(maxFreq==-1)
    printf("Pew!!!");
    else {
	 for(i=0;i<n;i++)
	   if(b[i]==maxFreq)
	     printf("%d ",a[i]);	
    }







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

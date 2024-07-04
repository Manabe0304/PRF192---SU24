#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
int n,i,s; 
// printf("\n%d\n",-5%2); chia 1 so am le cho 2 se du -1
scanf("%d",&n);
int a[n];
for(i=0; i<n; i++) scanf("%d",&a[i]);

// Tinh tong binh phuong so le
s=0;
for(i=0; i<n; i++)
{
	if(a[i]%2!=0) s=s+a[i]*a[i]; // a[i] co the la so am
}

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
printf("%d",s);

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

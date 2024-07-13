
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n;
	scanf("%d",&n);
	int *array = (int*)malloc(n*sizeof(int));
  	for(int i=0;i<n;i++)
  	{
  		scanf("%d",&*(array+i));	
	}
	bool check = true;
  	for(int i=0;i<=n/2;i++)
  	{
  		if(*(array+i) != *(array+n-i-1))
		{
			check = false;
			break;
		}	
	}
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	if(check == true) printf("1");
	else printf("0");  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

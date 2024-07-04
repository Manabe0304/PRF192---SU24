#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  	system("cls");
 	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int *a = (int *)malloc(7*sizeof(int));
	int *b = (int *)calloc(100,sizeof(int));
	int max = 0;
	for(int i = 0; i < 7 ;i++)
	{
		scanf("%d",&*(a+i));
	}
  	for(int i=0; i < 6 ;i++)
  	{
  		for(int j=i+1; j < 7 ; j++)
  		{
  			if(a[i] == a[j] && a[i] >= 10)
  			{
  				(*(b+*(a+i)))++;
			}
		}
	}
	for(int i = 0;i < 100;i++)
	{
		if(max < *(b+i)) max = *(b+i);
	}
  	// Fixed Do not edit anything here.
  	printf("\nOUTPUT:\n");
  	//@STUDENT: WRITE YOUR OUTPUT HERE:
	if(max == 0)
	{
		printf("no two-digit number");
	}
	else
	{
		for(int i = 0;i < 100;i++)
		{
			if(max == *(b+i)) printf("%d ",i);
		}
	}
	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}

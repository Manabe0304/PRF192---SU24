Cách 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
char ArrS[5][30];
int i;
    for (i=0; i<5; i++) scanf("%s", &ArrS[i]);
    
void SortArrS(char A[][30], int size, int opt){
	int i, j;
		for (i=0; i<size; i++)
		    for (j=i+1; j<size; j++)
		        if(strcmp(A[i], A[j])*opt>0){
		        	char temp[30];
		        	strcpy(temp,(A[i]));
		        	strcpy(A[i],A[j]);
		        	strcpy(A[j],temp);
				}
}
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
     SortArrS(ArrS,5,1);
  for (i=0; i<5; i++) printf("%s ", ArrS[i]);
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

Cách 2
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int size = 5;
	char s[size][2000], temp[2000];
	for(int i=0;i<size;i++)
	{
		gets(s[i]);
		fflush(stdin); //Clear cache	
	}  
  	for(int i=0;i<size-1;i++)
  	{
  		for(int j=i+1;j<size;j++)
		{
			if(strcmp(s[i],s[j]) > 0)
			{
				strcpy(temp,s[i]); // temp = s[i];
				strcpy(s[i],s[j]); //s[i] = s[j];
				strcpy(s[j],temp); //s[j] = temp;
			}
		}	
	}
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	for(int i=0;i<size;i++)
	{
		printf("%s ",s[i]);
	}
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

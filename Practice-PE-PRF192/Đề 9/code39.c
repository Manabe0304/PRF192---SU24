#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  	system("cls");
 	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int i, l;
	char s[100];
	gets(s);
	i=0;
	while(s[i]!='\0')
	{
		if(i%2!=0&&s[i]>='a'&&s[i]<'z') s[i]-=32;
		i++;	
	}
  
  	// Fixed Do not edit anything here.
  	printf("\nOUTPUT:\n");
  	//@STUDENT: WRITE YOUR OUTPUT HERE:
	puts(s);
	
	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}


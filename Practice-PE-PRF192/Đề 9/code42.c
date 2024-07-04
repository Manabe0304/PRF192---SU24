#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  	system("cls");
 	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int i,j;
	char s[100],s1[100];
	gets(s);
	
//	i=0; j=0;
//	while(s[i]!='\0')
//	{
//		if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')) {s1[j]=s[i]; j++;} 
//		i++;	
//	}
//  s1[j]='\0';
  
  	// Fixed Do not edit anything here.
  	printf("\nOUTPUT:\n");
  	//@STUDENT: WRITE YOUR OUTPUT HERE:
//	puts(s1);
	i=0;
	while(s[i]!='\0')
	{
		if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')) printf("%c",s[i]);
		i++;	
	}
	printf("\n");
	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}


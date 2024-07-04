#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void Split(char s[], char st[][30], int & n) {
	int i, j, len;
	len = strlen(s);
	n = 0;
	i = 0;
	while(i < len) {
		//tim i la vi tri dau tien trong s, sao cho s[i] # empty
		while(i < len && s[i] == ' ') i++;
		if(i < len) {
			char x[30];
			//sao chep moi ky tu s[i] vao x, cho den khi s[i] = empty
			j = 0;
			while(i < len && s[i] != ' ') {
				x[j] = s[i]; i++; j++;
			}
			x[j] = '\0';
			strcpy(st[n],x);
			n++;
		}
		i++;
	}
}

int main() {
  	system("cls");
 	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n,i,j,l,count, count1;
	char c,s[50], st[50][30], s1[50]="";
	gets(s);

  	Split(s, st, n); 	

//for(i=0; i<n; i++) printf("%s\n",st[i]);
// dem so word co 1 hoac 2 vowels
	
	count=0; // dem so word co 1 hoac 2 nguyen am
	
	count1=0; // dem so nguyen am trong word st[i]
	for(i=0; i<n; i++)
	{
		j=0;
		while(st[i][j]!='\0')
		{
			c=st[i][j];
			if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') count1++;
			j++;
		}
		
		if(count1==1||count1==2) 
		{
		count++;
		// puts(st[i]);
		strcat(s1,st[i]); 
		strcat(s1," ");
		}
	count1=0;	
	}
	l=strlen(s1); //printf("%d\n",l);
	s1[l-1]='\0';
	
//	l=strlen(s1); printf("%d\n",l);
  	// Fixed Do not edit anything here.
  	printf("\nOUTPUT:\n");
  	//@STUDENT: WRITE YOUR OUTPUT HERE:
	printf("%d\n",count);
	puts(s1);
	
	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}


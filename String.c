#include <stdio.h>

int main(){
    char str[100];
    int d = 0, i = 0;
    printf("Enter a string: "); gets(str);
    while(str[i] != '\0'){
        if(str[i] == '*') d++;
        i++;
    }
    printf("Output: %d", d);
    return 0;
}

#include <stdio.h>
int main(){
	char s[100];
	int d = 0, i = 0;
	printf("Enter a string: "); gets(s);
    for(i = 0; s[i] != '\0'; i++)
        if(s[i] != ' ' && s[i+1] == ' ' || s[i] != ' ' && s[i+1] == '\0') 
		    d++;
    printf("Number of words: %d", d);
    return 0;
}

//Check if string is symmetric or not
#include <stdio.h>
#include <string.h>

void symmetricString(char s[]){
	int i, n;
	n = strlen(s);
	for (i = 0; i < n/2; i++)
	   if(s[i] != s[n-1-i])
	      break;
	if (i == n/2)
	    printf("It is a symmetric string!");
	else
	    printf("It is not a symmetric string!");	      
}
int main(){
	char s[100];
	printf("Enter a string: "); gets(s);
	printf("String: %s\n", s);
	symmetricString(s);
	return 0;
}

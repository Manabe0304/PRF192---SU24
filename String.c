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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
    int n;
    scanf("%d", &n);
    
    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    
    //@STUDENT: WRITE YOUR OUTPUT HERE:
    int count = 0;
    for (int num = n; num > 0; num /= 10) {
        int digit = num % 10;
        if(digit %2==0){
        	count++;
		}
    }
    printf("%d", count);
    
    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void reverseString(char p[], char revP[]) {
    int i = 0;
    int len = strlen(p);
    for (i = 0; i < len; i++) {
        revP[len - 1 - i] = p[i];
    }
}

int main() {
    system("cls");
    //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
    char o[256];
    char p[256];
    fflush(stdin);
    gets(o);
    fflush(stdin);
    gets(p);

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE:
    char revP[256];
    reverseString(p, revP);
    for (int i = 0; i < strlen(o); i++) {
        int check = 1;
        for (int j = 0; j < strlen(p); j++) {
            if (p[j] != o[i + j]) {
                check = 0;
                break;
            }
        }
        if (check == 1) {
            // dao p trong o
            for (int j = 0; j < strlen(p); j++) {
                o[i + j] = revP[j];
            }
        }
    }
    puts(o);

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return (0);
}

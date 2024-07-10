#include <stdio.h>
#include <string.h>

void reverse_string(char str[]) {
    int i;
    int len = strlen(str);
    for (i = 0; i < len / 2; ++i) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}
int main() {
    char str[100];
    char ch;
    int i;
    char s;

    do {
        printf("Enter string ended by . : ");
        i = 0;
        while ((ch = getchar()) != '.' && i < sizeof(str) - 1) {
            str[i++] = ch;
        }
        str[i] = '\0';
        
        printf("The original string: %s\n", str);
        reverse_string(str);
        printf("The reverse string: %s\n", str);

        while ((ch = getchar()) != '\n' && ch != EOF) {}

        printf("\nAnother run (y/n)? ");
        s = getchar();
        
        while ((ch = getchar()) != '\n' && ch != EOF) {}

    } while (s == 'y' || s == 'Y');

    return 0;
}

#include <stdio.h>

void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    char ok;
    do {
        char ch, s[100], w[100];
        int i, n = 0;
        printf("Enter string ended by . : ");
        do {
            ch = getchar();
            if (ch != '.') {
                s[n++] = ch;
            }
        } while (ch != '.');
        s[n] = '\0';

        printf("The original string: %s", s);

        for (i = 0; i < n; i++) {
            w[i] = s[n - 1 - i];
        }
        w[n] = '\0';

        printf("\nThe reverse string: %s", w);

        clear_input_buffer();
        printf("\n\nAnother run (y/n)? ");
        scanf("%c", &ok);
        clear_input_buffer();
    } while (ok == 'y' || ok == 'Y');

    return 0;
}

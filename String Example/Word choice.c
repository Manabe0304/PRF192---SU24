#include <stdio.h>
#include <ctype.h>
#include <string.h>

void input_string(char str[], int max_len) {
    printf("Input a string: ");
    fgets(str, max_len, stdin);
    // Remove newline character if present
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}

void split_string_into_words(char str[]) {
    char temp_str[100];
    strcpy(temp_str, str); // Make a copy of the string to preserve the original
    char *token;
    int word_count = 0;

    printf("The original string: %s\n", str);
    token = strtok(temp_str, " ");
    printf("Number of words in the string: ");
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ");
        word_count++;
    }
    printf("\nTotal words: %d\n", word_count);
}

void convert_string_to_proper_form(char str[]) {
    int in_word = 0;
    printf("The original string: %s\n", str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) {
            in_word = 0;
        } else if (!in_word) {
            str[i] = toupper(str[i]);
            in_word = 1;
        } else {
            str[i] = tolower(str[i]);
        }
    }
    printf("The proper form: %s\n", str);
}

void remove_redundant_spaces(char str[]) {
    int i = 0, j = 0;
    int len = strlen(str);
    printf("The original string: %s\n", str);

    while (isspace(str[i])) i++; // skip leading spaces

    for (; i < len; i++) {
        if (!isspace(str[i]) || (i > 0 && !isspace(str[i - 1]))) {
            str[j++] = str[i];
        }
    }

    str[j] = '\0';
    // Remove trailing space if any
    if (j > 0 && isspace(str[j - 1])) {
        str[j - 1] = '\0';
    }

    printf("The cleaned form: %s\n", str);
}

void check_valid_name(char str[]) {
    int valid = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (!isalpha(str[i]) && !isspace(str[i])) {
            valid = 0;
            break;
        }
    }

    if (valid) {
        printf("The string: %s is a valid name\n", str);
    } else {
        printf("The string: %s is not a valid name\n", str);
    }
}

void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
int main() {
    char str[100] = "";
    int choice;

    do {
        printf("Choose one of the following options:\n");
        printf("1. Input a string\n");
        printf("2. Split a string into words\n");
        printf("3. Convert a string into proper form\n");
        printf("4. Remove redundant spaces\n");
        printf("5. Check valid name\n");
        printf("0. Exit\n");
        printf("Your selection (0 -> 6): ");
        scanf("%d", &choice);
        clear_input_buffer(); // clear the input buffer after reading choice

        switch (choice) {
            case 1:
                input_string(str, sizeof(str));
                break;
            case 2:
                split_string_into_words(str);
                break;
            case 3:
                convert_string_to_proper_form(str);
                break;
            case 4:
                remove_redundant_spaces(str);
                break;
            case 5:
                check_valid_name(str);
                break;
            case 0:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid option. Please try again.\n");
                break;
        }
    } while (choice != 0);

    return 0;
}

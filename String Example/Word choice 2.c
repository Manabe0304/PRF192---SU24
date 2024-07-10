#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  char str[100];
  int choice, i, j, count = 0;

  do {
    printf("\nChoose one of the following options:\n");
    printf("1. Input a string\n");
    printf("2. Split a string into words\n");
    printf("3. Convert a string into proper form\n");
    printf("4. Remove redundant spaces\n");
    printf("5. Check valid name\n");
    printf("0. Exit\n");
    printf("Your selection (0 -> 6): ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        printf("Input a string: ");
        scanf(" %[^\n]", str); // Use " %[^\n]" to read the entire line
        break;
      case 2:
        if (strlen(str) == 0) {
          printf("Please input a string first.\n");
          break;
        }
        printf("The original string: %s\n", str);
        count = 1; // Initialize count for number of words
        for (i = 0; str[i] != '\0'; i++) {
          if (isspace(str[i])) {
            count++;
          }
        }
        printf("Number of words in the string: %d, they are\n", count + 1);
        for (i = 0, j = 0; str[i] != '\0'; i++) {
          if (isspace(str[i])) {
            printf("%.*s\n", i - j, &str[j]);
            j = i + 1; // Skip the space character
          }
        }
        if (str[j] != '\0') {
          printf("%s\n", &str[j]); // Print the last word
        }
        break;
      case 3:
        if (strlen(str) == 0) {
          printf("Please input a string first.\n");
          break;
        }
        printf("The original string: %s\n", str);
        str[0] = toupper(str[0]);
        for (i = 1; str[i] != '\0'; i++) {
          if (isspace(str[i - 1])) {
            str[i] = toupper(str[i]);
          } else {
            str[i] = tolower(str[i]);
          }
        }
        printf("The proper form: %s\n", str);
        break;
      case 4:
        if (strlen(str) == 0) {
          printf("Please input a string first.\n");
          break;
        }
        printf("The original string: %s\n", str);
        for (i = 0, j = 0; str[i] != '\0'; i++) {
          if (isspace(str[i]) && isspace(str[i - 1])) {
            continue;
          }
          str[j++] = str[i];
        }
        str[j] = '\0';
        printf("The cleaned form: %s\n", str);
        break;
      case 5:
        if (strlen(str) == 0) {
          printf("Please input a string first.\n");
          break;
        }
        printf("The string: %s", str);
        for (i = 0; str[i] != '\0'; i++) {
          if (isalnum(str[i]) == 0) {
            printf(" is not a valid name\n");
            break;
          }
        }
        if (str[i] == '\0') {
          printf(" is a valid name\n");
        }
        break;
      case 0:
        printf("Exiting the program.\n");
        break;
      default:
        printf("Invalid choice.\n");
    }
  } while (choice != 0);

  return 0;
}

#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void processDate();
void characterData();
int isValidDate(int day, int month, int year);
int isLeapYear(int year);

int main() {
    int choice;

    do {
        // Display the menu
        printf("Menu:\n");
        printf("1- Processing date data\n");
        printf("2- Character data\n");
        printf("3- Quit\n");
        printf("Choose an operation: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                processDate();
                break;
            case 2:
                characterData();
                break;
            case 3:
                printf("Quitting the program.\n");
                break;
            default:
                printf("Invalid choice, please choose again.\n");
        }
    } while(choice != 3);

    return 0;
}

// Function to process date data
void processDate() {
    int day, month, year;

    printf("Enter day: ");
    scanf("%d", &day);
    printf("Enter month: ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);

    if (isValidDate(day, month, year)) {
        printf("The date %02d/%02d/%d is valid.\n", day, month, year);
    } else {
        printf("The date %02d/%02d/%d is invalid.\n", day, month, year);
    }
}

// Function to validate the date
int isValidDate(int day, int month, int year) {
    if (year < 1 || month < 1 || month > 12 || day < 1) {
        return 0;
    }

    int maxDays;
    switch(month) {
        case 2:
            maxDays = isLeapYear(year) ? 29 : 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            maxDays = 30;
            break;
        default:
            maxDays = 31;
    }

    if (day > maxDays) {
        return 0;
    }

    return 1;
}

// Function to check if a year is a leap year
int isLeapYear(int year) {
    if (year % 4 != 0) {
        return 0;
    } else if (year % 100 != 0) {
        return 1;
    } else if (year % 400 != 0) {
        return 0;
    } else {
        return 1;
    }
}

// Function to process character data
void characterData() {
    char char1, char2;

    printf("Enter first character: ");
    getchar(); // To consume the newline left by previous input
    scanf("%c", &char1);
    printf("Enter second character: ");
    getchar(); // To consume the newline left by previous input
    scanf("%c", &char2);

    if (char1 < char2) {
        char temp = char1;
        char1 = char2;
        char2 = temp;
    }

    for (char ch = char1; ch >= char2; ch--) {
        printf("%c: %d, %xh\n", ch, ch, ch);
    }
}

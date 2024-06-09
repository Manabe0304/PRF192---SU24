#include <stdio.h>
#include <math.h>

// Function to solve the quadratic equation
void solveQuadraticEquation() {
    int a, b, c;
    printf("Enter coefficients a, b and c of the quadratic equation (ax^2 + bx + c = 0):\n");

    // Validate input for 'a'
    while (1) {
        printf("a: ");
        if (scanf("%d", &a) != 1) {
            printf("Invalid input. Please enter an integer.\n");
            while (getchar() != '\n'); // clear the input buffer
        } else {
            break;
        }
    }

    // Validate input for 'b'
    while (1) {
        printf("b: ");
        if (scanf("%d", &b) != 1) {
            printf("Invalid input. Please enter an integer.\n");
            while (getchar() != '\n'); // clear the input buffer
        } else {
            break;
        }
    }

    // Validate input for 'c'
    while (1) {
        printf("c: ");
        if (scanf("%d", &c) != 1) {
            printf("Invalid input. Please enter an integer.\n");
            while (getchar() != '\n'); // clear the input buffer
        } else {
            break;
        }
    }

    if (a == 0) {
        // Handle linear equation case (bx + c = 0)
        if (b == 0) {
            if (c == 0) {
                printf("The equation has infinite solutions.\n");
            } else {
                printf("The equation has no solution.\n");
            }
        } else {
            double x = -((double)c / b);
            printf("The equation is linear and its solution is x = %.2f\n", x);
        }
    } else {
        // Calculate the discriminant
        int discriminant = b * b - 4 * a * c;
        if (discriminant > 0) {
            double x1 = (-b + sqrt(discriminant)) / (2 * a);
            double x2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("The equation has two real roots: x1 = %.2f and x2 = %.2f\n", x1, x2);
        } else if (discriminant == 0) {
            double x = -b / (2 * a);
            printf("The equation has one real root: x = %.2f\n", x);
        } else {
            double realPart = -b / (2 * a);
            double imaginaryPart = sqrt(-discriminant) / (2 * a);
            printf("The equation has two complex roots: x1 = %.2f + %.2fi and x2 = %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
        }
    }
}

// Function to calculate the future value of a bank deposit
void calculateBankDeposit() {
    double deposit, monthlyRate;
    int months;

    // Validate deposit amount
    while (1) {
        printf("Enter your deposit amount (positive number): ");
        if (scanf("%lf", &deposit) != 1 || deposit <= 0) {
            printf("Invalid input. Please enter a positive number.\n");
            while (getchar() != '\n'); // clear the input buffer
        } else {
            break;
        }
    }

    // Validate monthly rate
    while (1) {
        printf("Enter the monthly rate (positive number, <= 0.1): ");
        if (scanf("%lf", &monthlyRate) != 1 || monthlyRate <= 0 || monthlyRate > 0.1) {
            printf("Invalid input. Please enter a positive number less than or equal to 0.1.\n");
            while (getchar() != '\n'); // clear the input buffer
        } else {
            break;
        }
    }

    // Validate number of months
    while (1) {
        printf("Enter the number of months (positive integer): ");
        if (scanf("%d", &months) != 1 || months <= 0) {
            printf("Invalid input. Please enter a positive integer.\n");
            while (getchar() != '\n'); // clear the input buffer
        } else {
            break;
        }
    }

    // Calculate the future value
    double futureValue = deposit * pow(1 + monthlyRate, months);
    printf("After %d months, your deposit will grow to: %.2f\n", months, futureValue);
}

int main() {
    int choice;

    do {
        printf("Menu:\n");
        printf("1- Quadratic equation (phuong trinh bac 2)\n");
        printf("2- Bank deposit problem\n");
        printf("3- Quit\n");
        printf("Choose an operation: ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter an integer.\n");
            while (getchar() != '\n'); // clear the input buffer
            continue;
        }

        switch (choice) {
            case 1:
                solveQuadraticEquation();
                break;
            case 2:
                calculateBankDeposit();
                break;
            case 3:
                printf("Quitting the program.\n");
                break;
            default:
                printf("Invalid choice. Please choose a valid option.\n");
                break;
        }
    } while (choice != 3);

    return 0;
}

//Exercise CQ9.4: Write a C program to print out the circumference and area of a circle with radius r where r is entered from the keyboard.
#include <stdio.h>
#define PI 3.14159265358979323846

int main() {
    double radius, circumference, area;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    circumference = 2 * PI * radius;
    area = PI * radius * radius;
    printf("The circumference of the circle is: %.2lf\n", circumference);
    printf("The area of the circle is: %.2lf", area);
    return 0;
}

//Exercise CQ9.5: Write a C program to print out f(x) = log(|x|)+exp(x) +x where the real number x is entered from the keyboard.
#include <stdio.h>
#include <math.h>

int main() {
    double x, f;
    printf("Enter a real number x: ");
    scanf("%lf", &x);
    f = log(fabs(x)) + exp(x) + x;
    printf("f(x) = %.6lf", f);
    return 0;
}

//Exercise CQ9.6: Write a C program to print out list of prime numbers which is smaller than n, where the integer number n is entered from the keyboard.
#include <stdio.h>

int is_prime(int num) {
    int i;
	if (num <= 1) {
        return 0;
    }
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n, i;
    printf("Enter an integer n: ");
    scanf("%d", &n);
    printf("Prime numbers less than %d are: ", n);
    for (i = 2; i < n; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}

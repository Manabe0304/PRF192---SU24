#include <stdio.h>

int gcd(int a, int b) {
  while (a != b) {
    if (a > b) a -= b;
    else b -= a;
  }
  return a;
}

int lcm(int a, int b) {
  return a * b / gcd(a, b);
}

int main() {
  int a, b, d, m;
  printf("Enter two positive integers: ");
  scanf("%d %d", &a, &b);
  while (a <= 0 || b <= 0) {
    printf("Invalid input. Please enter two positive integers: ");
    scanf("%d %d", &a, &b);
  }
  d = gcd(a, b);
  m = lcm(a, b);
  printf("Greatest Common Divisor (GCD) of %d and %d is %d\n", a, b, d);
  printf("Least Common Multiple (LCM) of %d and %d is %d\n", a, b, m);
  return 0;
}

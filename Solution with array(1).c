#include <stdio.h>
#define BITS 16

void binary(int, int[]);
void display(int, int digit[]);

int main(){
    int decimal, digit[BITS];
    printf("Enter a positive integer value: ");
    scanf("%d", &decimal);
    binary(decimal, digit);
    display(decimal, digit);
    return 0;
}
void binary(int decimal, int digit[]){
    int i;
    i = BITS - 1;
    while (decimal != 0 && i >= 0){
        digit[i] = decimal % 2;
        decimal /= 2;
        i--;
    }
    for ( ; i >= 0; i--)
       digit[i] = 0;
}
void display(int decimal, int digit[]){
    int i;
    printf("%d is binary is ", decimal);
    for (i = 0; i < BITS; i++){
        printf("%d", digit[i]);
        if (i % 8 == 7)
             putchar(' ');
    }
}

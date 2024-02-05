#include<stdio.h>

int main() {
    int base, temp_exponent, exponent, result = 1;

    printf("Enter a number and its power: ");
    scanf("%d %d", &base, &exponent);

    temp_exponent = exponent;

    do {
        result *= base;
        temp_exponent--;
    } while (temp_exponent > 0);

    printf("%d^%d = %d", base, exponent, result);

    return 0;
}
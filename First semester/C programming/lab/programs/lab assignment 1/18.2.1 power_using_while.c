#include<stdio.h>

int main() {
    int base, temp_exponent, exponent, result = 1;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    temp_exponent = exponent;

    while (temp_exponent > 0) {
        result *= base;
        temp_exponent--;
    }

    printf("%d^%d = %d", base, exponent, result);

    return 0;
}
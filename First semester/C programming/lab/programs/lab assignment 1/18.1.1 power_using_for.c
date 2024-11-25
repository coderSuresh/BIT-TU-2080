#include<stdio.h>

int main() {
    int power, base, result = 1;

    printf("Enter a number and its power: ");
    scanf("%d %d", &base, &power);

    for (int i = 1; i <= power; i++) {
        result *= base;
    }

    printf("%d ^ %d is %d", base, power, result);
    return 0;
}
#include<stdio.h>

int main() {
    int n, fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    do {
        fact *= n;
        n--;
    } while (n > 0);

    printf("Factorial is %d", fact);
    return 0;
}
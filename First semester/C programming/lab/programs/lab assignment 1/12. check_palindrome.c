#include<stdio.h>

int main() {
    int num, input, rem, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &input);

    num = input;

    while(num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }

    if(input == rev) {
        printf("%d is a palindrome number.", input);
    } else {
        printf("%d is not a palindrome number.", input);
    }

    return 0;
}
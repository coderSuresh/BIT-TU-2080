#include <stdio.h>

int calculate(int a, int b, char choice)
{
    int result;

    switch (choice)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;
    default:
        result = 0;
    }

    return result;
}

int main()
{

    int a, b, result;
    char choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter your choice +, - * or /: ");
    scanf(" %c", &choice);

    result = calculate(a, b, choice);

    printf("Result: %d\n", result);

    return 0;
}
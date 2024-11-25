#include <stdio.h>

int calculate(float a, float b, char op)
{
    switch (op)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        if (b == 0)
        {
            printf("Error: Division by zero\n");
            return 0;
        }
        return a / b;
    default:
        printf("Error: Invalid operator\n");
        return 0;
    }
}

int main()
{
    float num1, num2;
    char op;

    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the operator: ");
    scanf(" %c", &op);
    printf("Enter the second number: ");
    scanf("%f", &num2);

    float result = calculate(num1, num2, op);   

    printf("The result is: %.2f\n", result);

    return 0;
}
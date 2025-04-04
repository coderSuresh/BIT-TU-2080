#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX 50

// Function to perform the arithmetic operations
int performOperation(int a, int b, char op) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
        default: return 0;
    }
}

// Function to evaluate the postfix expression
int evaluatePostfix(char* expr) {
    int stack[MAX];
    int top = -1;
    int i = 0;
    int a, b, result;

    // Loop through each character in the postfix expression
    while (expr[i] != '\0') {
        // Skip spaces
        if (expr[i] == ' ') {
            i++;
            continue;
        }

        // If the character is a digit, handle multi-digit numbers
        if (isdigit(expr[i])) {
            int num = 0;
            // Process full multi-digit number
            while (isdigit(expr[i])) {
                num = num * 10 + (expr[i] - '0');
                i++;
            }
            stack[++top] = num;  // Push the full number onto the stack
        }
        // If the character is an operator
        else if (expr[i] == '+' || expr[i] == '-' || expr[i] == '*' || expr[i] == '/') {
            b = stack[top--];
            a = stack[top--];
            result = performOperation(a, b, expr[i]);
            stack[++top] = result;  // Push the result back to the stack
            i++;
        } else {
            i++;  // Ignore invalid characters (you can add error handling if needed)
        }
    }

    // The result will be the only element left in the stack
    return stack[top];
}

int main() {
    char expr[MAX];
    
    printf("Enter postfix expression: ");
    fgets(expr, MAX, stdin);

    // Remove newline character if present
    if (expr[strlen(expr) - 1] == '\n') {
        expr[strlen(expr) - 1] = '\0';
    }
    
    int result = evaluatePostfix(expr);
    
    printf("Result: %d\n", result);
    
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

// Function to get precedence of operators
int precedence(char op) {
    if (op == '+' || op == '-') 
        return 1;
    else if (op == '*' || op == '/') 
        return 2;
    return 0;  // For any invalid operator
}

// Function to check if the character is an operator
int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

// Function to convert infix to postfix
void infixToPostfix(char* expr, char* result) {
    char stack[MAX];
    int top = -1, k = 0;  // k is for result, top is for stack
    
    for (int i = 0; i < strlen(expr); i++) {
        char c = expr[i];
        
        // If operand, add it to result
        if (isalnum(c)) {
            result[k++] = c;
        }
        // If '(', push it to stack
        else if (c == '(') {
            stack[++top] = c;
        }
        // If ')', pop until '('
        else if (c == ')') {
            while (top != -1 && stack[top] != '(') {
                result[k++] = stack[top--];
            }
            top--;  // Pop '(' from stack
        }
        // If operator, pop from stack to result
        else if (isOperator(c)) {
            while (top != -1 && precedence(stack[top]) >= precedence(c)) {
                result[k++] = stack[top--];
            }
            stack[++top] = c;
        }
    }
    
    // Pop all remaining operators in stack
    while (top != -1) {
        result[k++] = stack[top--];
    }
    
    result[k] = '\0';  // Null-terminate the result
}

int main() {
    char expr[MAX], result[MAX];
    
    // Input infix expression
    printf("Enter infix expression: ");
    fgets(expr, MAX, stdin);
    
    // Remove newline character from input string
    if (expr[strlen(expr) - 1] == '\n') {
        expr[strlen(expr) - 1] = '\0';
    }
    
    // Convert infix to postfix
    infixToPostfix(expr, result);
    
    // Output the postfix expression
    printf("Postfix expression: %s\n", result);
    
    return 0;
}

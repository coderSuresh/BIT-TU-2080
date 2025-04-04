#include <stdio.h>
#include <string.h>
#define MAX 100

char stack[MAX];
int top = -1;

void push(char ch) {
    if (top == MAX - 1) {
        printf("Stack Overflow!\n");
    } else {
        stack[++top] = ch;
    }
}

char pop() {
    if (top == -1) {
        printf("Stack Underflow!\n");
        return '\0';
    } else {
        return stack[top--];
    }
}

void reverseString(char str[]) {
    int len = strlen(str);
    
    // Push all characters onto stack
    for (int i = 0; i < len; i++) {
        push(str[i]);
    }
    
    // Pop characters to get reversed string
    for (int i = 0; i < len; i++) {
        str[i] = pop();
    }
}

int main() {
    char str[MAX];

    printf("Enter a string: ");
    scanf("%s", str);

    reverseString(str);

    printf("Reversed String: %s\n", str);

    return 0;
}

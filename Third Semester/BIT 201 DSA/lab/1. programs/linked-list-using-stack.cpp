#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int value;
    struct Node* next;
} Node;
typedef struct Stack {
    Node* top;
} Stack;
Stack* createStack() {
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->top = NULL;
    return stack;
}
int isEmpty(Stack* stack) {
    return stack->top == NULL;
}
void push(Stack* stack, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->value = value;
    newNode->next = stack->top;
    stack->top = newNode;
    printf("Pushed: %d\n", value);
}
int pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty. Cannot pop.\n");
        return -1; 
    }
    int value = stack->top->value;
    Node* temp = stack->top;
    stack->top = stack->top->next;
    free(temp);
    return value;
}
int peek(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty.\n");
        return -1; 
    }
    return stack->top->value;
}
void display(Stack* stack) {
    Node* current = stack->top;
    if (current == NULL) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack elements: ");
    while (current) {
        printf("%d ", current->value);
        current = current->next;
    }
    printf("\n");
}
int main() {
    Stack* stack = createStack();
    push(stack, 10);
    push(stack, 20);
    push(stack, 30);
    display(stack);  
    printf("Popped: %d\n", pop(stack));  
    display(stack);  
    printf("Peek: %d\n", peek(stack)); 
    return 0;
}

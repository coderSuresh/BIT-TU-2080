#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* front = NULL;
struct Node* rear = NULL;
void enqueue(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    if (rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
    printf("Enqueued %d into queue\n", value);
}
void dequeue() {
    if (front == NULL) {
        printf("Queue Underflow! Cannot dequeue\n");
        return;
    }
    struct Node* temp = front;
    printf("Dequeued %d from queue\n", temp->data);
    front = front->next;
    free(temp);
    if (front == NULL) {
        rear = NULL;
    }
}
void display() {
    if (front == NULL) {
        printf("Queue is empty\n");
        return;
    }
    struct Node* ptr = front;
    printf("Queue elements: ");
    while (ptr) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
int main() {
    enqueue(7);
    enqueue(14);
    enqueue(21);
    dequeue();
    enqueue(28);
    display();
    return 0;
}


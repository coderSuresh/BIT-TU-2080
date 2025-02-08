#include <stdio.h>
#include <stdlib.h>

#define MAX 5

// Declare queue and pointers
int queue[MAX];
int front = -1, rear = -1;

// Function to check if the queue is full
int isFull() {
    return rear == MAX - 1;
}

// Function to check if the queue is empty
int isEmpty() {
    return front == -1 || front > rear;
}

// Function to insert an element into the queue
void enqueue(int value) {
    if (isFull()) {
        printf("Queue is full! Cannot insert.\n");
        return;
    }
    if (front == -1) {
        front = 0;  // First insertion
    }
    queue[++rear] = value;  // Insert element and move rear
    printf("Inserted %d\n", value);
}

// Function to delete an element from the queue
void dequeue() {
    if (isEmpty()) {
        printf("Queue is empty! Cannot delete.\n");
        return;
    }
    printf("Deleted %d\n", queue[front]);
    front++;  // Move front pointer to delete the element
    if (front > rear) {
        front = rear = -1;  // Reset queue when empty
    }
}

// Function to display the queue
void display() {
    if (isEmpty()) {
        printf("Queue is empty!\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    int choice, value;

    while (1) {
        // Menu
        printf("\nMenu:\n");
        printf("1. Enqueue (Insert)\n");
        printf("2. Dequeue (Delete)\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Enqueue
                printf("Enter value to insert: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2: // Dequeue
                dequeue();
                break;
            case 3: // Display
                display();
                break;
            case 4: // Exit
                printf("Exiting the program.\n");
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}

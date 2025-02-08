#include <stdio.h>

#define MAX 5  // Maximum size of the queue

// Declare circular queue and pointers
int queue[MAX];
int front = -1, rear = -1;

// Function to check if the queue is full
int isFull() {
    return (rear + 1) % MAX == front;
}

// Function to check if the queue is empty
int isEmpty() {
    return front == -1;
}

// Function to insert an element into the circular queue
void enqueue(int value) {
    if (isFull()) {
        printf("Queue is full! Cannot insert.\n");
        return;
    }
    if (front == -1) {
        front = 0;  // First insertion
    }
    rear = (rear + 1) % MAX;  // Circular increment
    queue[rear] = value;
    printf("Inserted %d\n", value);
}

// Function to delete an element from the circular queue
void dequeue() {
    if (isEmpty()) {
        printf("Queue is empty! Cannot delete.\n");
        return;
    }
    printf("Deleted %d\n", queue[front]);
    if (front == rear) {
        front = rear = -1;  // Reset the queue when empty
    } else {
        front = (front + 1) % MAX;  // Circular increment
    }
}

// Function to display the queue
void display() {
    if (isEmpty()) {
        printf("Queue is empty!\n");
        return;
    }
    printf("Queue elements: ");
    int i = front;
    while (i != rear) {
        printf("%d ", queue[i]);
        i = (i + 1) % MAX;
    }
    printf("%d\n", queue[rear]);  // Print the last element
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
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Global Head Pointer
struct Node* head = NULL;

void insertAtBeginning(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAtPosition(int value, int position) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;

    if (position == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }

    struct Node* temp = head;
    for (int i = 1; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Invalid Position!\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteByValue(int value) {
    struct Node* temp = head, *prev = NULL;

    if (temp != NULL && temp->data == value) {
        head = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Value not found!\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
}

void deleteAtPosition(int position) {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    struct Node* temp = head;

    if (position == 1) {
        head = head->next;
        free(temp);
        return;
    }

    struct Node* prev = NULL;
    for (int i = 1; temp != NULL && i < position; i++) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Invalid Position!\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
}

void search(int value) {
    struct Node* temp = head;
    int position = 1;

    while (temp != NULL) {
        if (temp->data == value) {
            printf("Value %d found at position %d\n", value, position);
            return;
        }
        temp = temp->next;
        position++;
    }

    printf("Value %d not found!\n", value);
}

void display() {
    struct Node* temp = head;

    if (temp == NULL) {
        printf("List is empty!\n");
        return;
    }

    printf("List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    printf("Performing Insertions...\n");

    insertAtBeginning(10);
    insertAtBeginning(20);
    insertAtBeginning(30);
    display(); 

    insertAtEnd(40);
    insertAtEnd(50);
    display();

    insertAtPosition(25, 3);
    display();

    printf("\nPerforming Deletions...\n");

    deleteByValue(10);
    deleteByValue(30);
    display(); 

    deleteAtPosition(2);
    display();

    printf("\nPerforming Searches...\n");

    search(40); 
    search(100);

    return 0;
}

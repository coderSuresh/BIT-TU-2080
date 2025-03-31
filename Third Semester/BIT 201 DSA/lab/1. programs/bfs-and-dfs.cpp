#include <stdio.h>
#include <stdlib.h>

// Tree Node structure
typedef struct Node {
    int data;
    struct Node *left, *right;
} Node;

// Queue structure for BFS
typedef struct Queue {
    Node **array;
    int front, rear, size;
} Queue;

// Create a new node
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Initialize queue
Queue* createQueue(int size) {
    Queue* q = (Queue*)malloc(sizeof(Queue));
    q->array = (Node**)malloc(size * sizeof(Node*));
    q->front = q->rear = -1;
    q->size = size;
    return q;
}

// Enqueue a node
void enqueue(Queue* q, Node* node) {
    if (q->rear == q->size - 1) return;
    q->array[++q->rear] = node;
    if (q->front == -1) q->front = 0;
}

// Dequeue a node
Node* dequeue(Queue* q) {
    if (q->front == -1) return NULL;
    Node* temp = q->array[q->front];
    if (q->front == q->rear) q->front = q->rear = -1;
    else q->front++;
    return temp;
}

// BFS Traversal
void BFS(Node* root) {
    if (root == NULL) return;
    Queue* q = createQueue(15); // Assuming max 15 nodes
    enqueue(q, root);

    while (q->front != -1) {
        Node* current = dequeue(q);
        printf("%d ", current->data);

        if (current->left != NULL) enqueue(q, current->left);
        if (current->right != NULL) enqueue(q, current->right);
    }
    free(q->array);
    free(q);
}

// DFS Traversal (Recursive)
void DFS(Node* root) {
    if (root == NULL) return;
    printf("%d ", root->data);
    DFS(root->left);
    DFS(root->right);
}

// Build the tree (as per the example)
Node* buildTree() {
    Node* root = createNode(0);
    root->left = createNode(1);
    root->right = createNode(2);
    root->left->left = createNode(3);
    root->left->right = createNode(4);
    root->right->right = createNode(5);
    return root;
}

int main() {
    Node* root = buildTree();
    printf("BFS Traversal: ");
    BFS(root);
    printf("\nDFS Traversal: ");
    DFS(root);
    return 0;
}

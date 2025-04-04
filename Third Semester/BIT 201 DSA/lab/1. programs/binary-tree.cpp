#include <stdio.h>

#include <stdlib.h>

// BST Node structure   
typedef struct Node {
  int data;
  struct Node * left, * right;
}
Node;

// Create a new node   
Node * createNode(int value) {
  Node * newNode = (Node * ) malloc(sizeof(Node));
  newNode -> data = value;
  newNode -> left = newNode -> right = NULL;
  return newNode;
}

// Insert a node into BST   
Node * insert(Node * root, int value) {
  if (root == NULL) return createNode(value);
  if (value < root -> data) root -> left = insert(root -> left, value);
  else if (value > root -> data) root -> right = insert(root -> right, value);
  return root;
}

// Find inorder successor (smallest in right subtree)   
Node * minValueNode(Node * node) {
  Node * current = node;
  while (current && current -> left != NULL) current = current -> left;
  return current;
}

// Delete a node from BST   
Node * deleteNode(Node * root, int value) {
  if (root == NULL) return root;

  if (value < root -> data) root -> left = deleteNode(root -> left, value);
  else if (value > root -> data) root -> right = deleteNode(root -> right, value);
  else {
    // Node with one or no child   
    if (root -> left == NULL) {
      Node * temp = root -> right;
      free(root);
      return temp;
    } else if (root -> right == NULL) {
      Node * temp = root -> left;
      free(root);
      return temp;
    }
    // Node with two children: replace with inorder successor           
    Node * temp = minValueNode(root -> right);
    root -> data = temp -> data;
    root -> right = deleteNode(root -> right, temp -> data);
  }
  return root;
}

// Inorder traversal  
void inorder(Node * root) {
  if (root != NULL) {
    inorder(root -> left);
    printf("%d ", root -> data);
    inorder(root -> right);
  }
}

int main() {
  Node * root = NULL;
  root = insert(root, 50);
  insert(root, 30);
  insert(root, 70);
  insert(root, 20);
  insert(root, 40);
  insert(root, 60);
  insert(root, 80);

  printf("Inorder after insertion: ");
  inorder(root);
  printf("\n");

  root = deleteNode(root, 20);
  root = deleteNode(root, 30);
  root = deleteNode(root, 50);

  printf("Inorder after deletions: ");
  inorder(root);

  return 0;
}

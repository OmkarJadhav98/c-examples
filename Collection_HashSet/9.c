/******************************************************************
Write a program to find numbers less than 7 in a tree set.
******************************************************************/

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct Node* insert(struct Node* root, int data) {
    if (root == NULL) {
        return createNode(data);
    }
    if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }
    return root;
}

void printNumbersLessThan7(struct Node* root) {
    if (root == NULL) {
        return;
    }
    printNumbersLessThan7(root->left);
    if (root->data < 7) {
        printf("%d ", root->data);
    }
    printNumbersLessThan7(root->right);
}

int main() {
    struct Node* root = NULL;
    root = insert(root, 10);
    root = insert(root, 3);
    root = insert(root, 5);
    root = insert(root, 1);
    root = insert(root, 6);
    root = insert(root, 8);

    printf("Binary Search Tree is: ");
    printNumbersLessThan7(root);
    printf("\n");

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int element, i;
struct node {
    int data;
    struct node *leftchild, *rightchild;
};
struct node *newnode, *root, *ptr, *parent;

void createBinaryTree() {
    root = NULL;
}

void insert(int element) {
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = element;
    newnode->leftchild = NULL;
    newnode->rightchild = NULL;
    if (root == NULL) {
        root = newnode;
    } else {
        ptr = root;
        while (ptr != NULL) {
            parent = ptr;
            if (element == ptr->data) {
                printf("Element %d is already present in the binary tree.\n", element);
                free(newnode);                     
                return 0;
            } else if (element > ptr->data) {
                ptr = ptr->rightchild;
            } else {
                ptr = ptr->leftchild;
            }
        }
        if (element > parent->data) {
            parent->rightchild = newnode;
        } else {
            parent->leftchild = newnode;
        }
    }
}

void preorder(struct node *temp) {
    if (temp != NULL) {
        printf(" %d |", temp->data);
        preorder(temp->leftchild);
        preorder(temp->rightchild);
    }
}

void postorder(struct node *temp) {
    if (temp != NULL) {
        postorder(temp->leftchild);
        postorder(temp->rightchild);
        printf(" %d |", temp->data);
    }
}

void inorder(struct node *temp) {
    if (temp != NULL) {
        inorder(temp->leftchild);
        printf(" %d |", temp->data);
        inorder(temp->rightchild);
    }
}

int main() {
    createBinaryTree();
    insert(10);
    insert(5);
    insert(15);
    insert(3);
    insert(7);
    insert(12);
    insert(20);
    insert(5); 

    printf("Preorder traversal: ");
    preorder(root);
    printf("\nInorder traversal: ");
    inorder(root);
    printf("\nPostorder traversal: ");
    postorder(root);

    return 0;
}

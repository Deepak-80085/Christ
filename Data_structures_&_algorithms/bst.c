#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *leftchild,*rightchild;
};

struct node *newnode,*root,*ptr,*parent;

void createBinaryTree()
{
    root = NULL;
}


int search(struct node *temp, int element)
{
    if(temp == NULL)
        return 0;
    if(temp->data == element)
        return 1;
    if(element > temp->data)
        return search(temp->rightchild, element);
    else
        return search(temp->leftchild, element);
}

void insert(int element)
{
    if(search(root, element))
    {
        printf("Element %d is already present in the binary tree.\n", element);
        return;
    }

    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = element;
    newnode->leftchild = NULL;
    newnode->rightchild = NULL;

    if(root == NULL)
    {
        root = newnode;
    }
    else
    {
        ptr = root;
        while(ptr != NULL)
        {
            parent = ptr;
            if(element > ptr->data)
            {
                ptr = ptr->rightchild;
            }
            else
            {
                ptr = ptr->leftchild;
            }
        }

        if(element > parent->data)
            parent->rightchild = newnode;
        else
            parent->leftchild = newnode;
    }
}

void preorder(struct node *temp)
{
    if(temp != NULL)
    {
        printf(" %d |",temp->data);
        preorder(temp->leftchild);
        preorder(temp->rightchild);
    }
}

void postorder(struct node *temp)
{
    if(temp != NULL)
    {
        postorder(temp->leftchild);
        postorder(temp->rightchild);
        printf(" %d |",temp->data);
    }
}

void inorder(struct node *temp)
{
    if(temp != NULL)
    {
        inorder(temp->leftchild);
        printf(" %d |",temp->data);
        inorder(temp->rightchild);
    }
}

int main()
{
    createBinaryTree();
    insert(10);
    insert(20);
    insert(30);
    insert(20); 
    printf("Preorder traversal: ");
    preorder(root);
    printf("\nPostorder traversal: ");
    postorder(root);
    printf("\nInorder traversal: ");
    inorder(root);
    return 0;
}


#include<stdio.h>
#include<stdlib.h>
int element,i;
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

void insert(int element)
{
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
        while(ptr != NULL )
        {
            parent = ptr;
            if(element>ptr->data)
            {
                ptr = ptr->rightchild;
            }
            else
            {
                ptr = ptr->leftchild;
            }
        }
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
// if same element is in binary tree then print that the element is present 
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
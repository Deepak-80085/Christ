#include<stdio.h>
#include<stdlib.h>

struct node
{	
     int data;
     struct node * next;
     struct node * back;
};
struct node *newnode,*nnode,*temp,*ptr,*prev,*head,*tail,*top;
int e,pos,choice,i,placefound;
void insert(int e)
{
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = e;
    newnode->next = NULL;
    newnode->back = NULL;

    if(head == NULL && tail == NULL)
    {
        head = newnode;	
        tail = newnode;
    }
    else if(e < head->data)
    {
        newnode->next = head;
        head->back = newnode;
        head = newnode;
        head->back = tail->next;
    }
    else if(e >  tail->data)
    {
        tail->next = newnode;
        newnode->back = tail;
        tail = newnode;
        head->back = tail->next;
    }
    else
    {
        ptr = head;
        prev = NULL;
        placefound = 0;
        while(ptr != NULL && placefound == 0)
        {
            if(e > ptr->data)
            {
                prev = ptr;
                ptr = ptr->next;
            }
            else
                placefound = 1;
        }
        newnode->next = prev->next;
        prev->next = newnode;
        ptr->back = newnode;
        newnode->back = prev;
    }
}

void del(int e)
{
    if(head == NULL)
        printf("The list is empty");
    else if(head->data == e && tail->data == e)
    {
        head = NULL;
        tail = NULL;
        printf(" Element deleted is %d ",e);
    }
    else if(head->data == e)
    {
        temp = head;
        head = head->next;
        head->back = tail->next; 
        printf("Element deleted is %d success",e);
    }
    else if(tail->data == e)
    {
        temp = tail;
        tail = tail->back;
        tail->next = head->back;
        printf("Element deleted is %d successfully",e);
    }
    else
    {
        prev = head;
        ptr = head->next;
        while(ptr->next!=NULL&&ptr->data<e)
		{
			prev=ptr;
			ptr=ptr->next;
		}
		if(ptr->data==e)
		{
            ptr->next->back = ptr->back;
		    prev->next=ptr->next;
		    printf("The %d is deleted",e);
		}
		else
			printf("The %d does not exist.",e);
	}
}
void display()
{
    if(head == NULL)
        printf("The list empty");
    else
    {
    temp = head;
    while(temp->next!=head->back)
    {
        printf(" | %d",temp->data);
        temp = temp->next;
    }
    printf(" | %d |",tail->data);
    }
}

void rev()
{
    
    if(head == NULL && tail && NULL)
        printf("The list empty");
    else
    {
    temp = tail;
    while(temp->back!=tail->next)
    {
        printf(" | %d",temp->data);
        temp = temp->back;
    }
    printf(" | %d |",head->data);
    }
}

void list()
{
    head = NULL;
    tail = NULL;
}

void menu()
{
	printf("\n-----------------------------------------------\n");
    printf("\n 1.Insert");
    printf("\n 2.Delete");
    printf("\n 3.Display");
    printf("\n 4.Reverse Display");
    printf("\n 5.EXIT");
	printf("\n-----------------------------------------------\n");	
    do
    {
        fflush(stdin);
        printf("\n Enter your choice: ");
    }while(scanf("%d",&choice)!=1 || choice < 0 || choice  > 5);
}

int main()
{
  	list();
	do
	{
		menu();
		switch(choice)
		{
			case 1:
				{
					printf("\n Enter the element to be inserted: ");
					scanf("%d",&e);
					insert(e);
					break;
				}
			case 2:
				{
					printf("Enter the element to delete: ");
  					scanf("%d",&e);
  					del(e);
  					top = NULL;
  					break;
				}
			case 3:
				{
					display();
					break;
				}
		    case 4:
				{
					rev();
					break;
				}
			case 5:
				{
					printf("\n Exiting..");
					return 0;
				}
				
		}
	}while(choice!=5);
}


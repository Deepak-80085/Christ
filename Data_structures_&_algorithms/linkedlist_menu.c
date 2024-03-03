
#include <stdio.h>
#include<conio.h>
#include<stdlib.h>

int placefound, ch;
struct node
{
	int data;
	struct node *next;
};
struct node *nnode,*newnode, *head, *ptr, *prev,*top;

void createlist()
{
	head == NULL;
}

void insert (int element)
{
	newnode = (struct node *)malloc(sizeof(struct node));
	newnode->data = element;
	newnode->next = NULL;
	if (head==NULL)
	{
		head = newnode;
	}
	else if (element < head->data)
	{
		newnode->next = head;
		head = newnode;
	}
	else
	{
		struct node *ptr,*prev;
		ptr = head;
		placefound = 0;
		prev = NULL;
		while(ptr!=NULL && placefound==0)
		{
			if(element > (ptr->data))
			{
				prev = ptr;
				ptr = ptr->next;
			}
			else
			placefound = 1;
		}
		newnode->next = prev->next;
		prev->next = newnode;
	}
}
void del(int e)
{
	if(head==NULL)
		printf("The list is empty");
	else if(head->data>e)
		printf("The %d does not exist.",e);
	else if(head->data==e)
	{
		printf("\n\n\tThe %d is deleted successfully",e);
		head=head->next;
	}
	else
	{
		struct node *ptr,*prev;
		ptr=head->next;
		prev = head; 
		while(ptr->next!=NULL&&ptr->data<e)
		{
			prev=ptr;
			ptr=ptr->next;
		}
		if(ptr->data==e)
		{
		prev->next=ptr->next;
		printf("The %d is deleted",e);
		}
		else
			printf("The %d does not exist.",e);
	}
}

void display()
{
	struct node *temp;
	temp = head;
	printf("\n======================================\n");
	while(temp!=NULL)
	{
		printf(" | %d ",temp->data);
		temp = temp->next;
	}
	printf(" |");
	printf("\n======================================\n");
}
void push(int elm)
{
	nnode = (struct node *) malloc(sizeof(struct node));
	nnode -> data = elm;
	nnode->next = top;
	top = nnode;
}

void reverse()
{
	if(head==NULL)
	{
		printf("List is empty.\n");
	}
	else
	{
		struct node *ptr;
		ptr=head;
		while(ptr!=NULL)
		{
			push(ptr->data);
			ptr=ptr->next;
		}
	}	
	struct node * ptr;
	ptr = top;
	while (ptr!= NULL)
	{
		printf("| %d ,", ptr->data);
		ptr = ptr->next;
	}
	printf(" |\n\n");
}
void menu()
{
	printf("\n-----------------------------------------------\n");
    printf("\n 1.Insert");
    printf("\n 2.Delete");
    printf("\n 3.Display");
    printf("\n 4.Reverse Display");
    printf("\n 4.EXIT");
	printf("\n-----------------------------------------------\n");	
    printf("\n Enter your choice: ");
    scanf("%d",&ch);
}

int main()
{
  	createlist();
	do
	{
		menu();
		switch(ch)
		{
			case 1:
				{
					int element;
					printf("\n Enter the element to be inserted: ");
					scanf("%d",&element);
					insert(element);
					break;
				}
			case 2:
				{
					int e;
					printf("Enter the element to delete: ");
  					scanf("%d",&e);
  					del(e);
  					break;
				}
			case 3:
				{
					display();
					break;
				}
		    case 4:
				{
					reverse();
					break;
				}
			case 5:
				{
					printf("\n Exiting..");
					return 0;
				}
				
		}
	}while(ch!=5);
}

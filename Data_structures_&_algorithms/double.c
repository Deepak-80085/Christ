#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
	struct node *back;
};
struct node *newnode,*head,*tail,*nnode,*top;

void createlist();
int menu();
void insert(int element);
void display();
void reverse();
void push(int elm);

int main()
{
int choice,elem,eleme;
	createlist();
	
	do
	{
	choice = menu();
	
	switch(choice)
	{
	case 1:
		do
		{
			fflush(stdin);
			printf("Element to be inserted: ");
		}while(scanf("%d",&elem)!=1);
		
		insert(elem);
		break;
		
	case 2:
		break;
		
	case 3:
		display();
		break;
		
	case 4:
		reverse();
		break;
		
	case 5:
	 	break;
	 	
	}
	}while(choice!=5);
	return 0;
}

void createlist()
{
	head=NULL;
	tail=NULL;
}

int menu()
{
	int choice;
	printf("\n\n 1. Insert");
	printf("\n 2. Delete");
	printf("\n 3. Display");
	printf("\n 4. Reverse");
	printf("\n 5. Quit");
	do
	{
		fflush(stdin);
		printf("\nEnter your choice:");
	}while(scanf("%d",&choice)!=1 || choice < 1 || choice > 5);
	return choice;
}

void insert(int element)
{
	newnode=(struct node *) malloc(sizeof(struct node));
	newnode->data = element;
	newnode->next = NULL;
	newnode->back = NULL;
	
	if(head == NULL && tail == NULL)
	{
		head = newnode;
		tail = newnode;
	}
	else if(element < head->data)
	{
		newnode->next = head;
		head->back = newnode;
		head = newnode;
	}
	else if(element > tail->data)
	{
		tail->next = newnode;
		newnode->back = tail;
		tail = newnode;
	}
	else
	{
		struct node *ptr,*prev;		
		int found = 0;
		ptr = head;
		prev = NULL;
		
		while(ptr!=NULL && found==0)
		{
			prev = ptr;
			ptr = ptr->next;
		}
		newnode->next = prev->next;
		prev->next = newnode;
		ptr->back = newnode;
		newnode->back = prev;
	}
}

void display()
{
	if(head==NULL)
	{
		printf("Queue is empty.\n");
	}
	else
	{
		struct node *ptr;
		ptr=head;
		printf("\n{");
		while(ptr!=NULL)
		{
			printf("%d,",ptr->data);
			ptr=ptr->next;
		}
		printf("}");
	}
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


#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};
struct node *newnode, *front,*rear,*ptr;
createqueue()
{
	front=NULL;
	rear=NULL;
}
int menu()
{
	int c;
	printf("\n 1-Enqueue.");
	printf("\n 2-Dequeue.");
	printf("\n 3-Display.");
	printf("\n 4-Exit.");
	do
	{
		fflush(stdin);
		printf("\nEnter your choice  : ");
	}while(scanf("%d",&c)!=1 || c< 1 || c > 5);
	return c;
}
void enqueue(int e)
{
	newnode=(struct node *) malloc(sizeof(struct node));
	newnode->data=e;
	newnode->next=NULL;
	if(front==NULL&&rear==NULL)
	{
		front=newnode;
		rear=newnode;
	}
	else
	{
		rear->next=newnode;
		rear=newnode;
	}
}
void dequeue()
{

	if(front==NULL){
	printf("Error:UNDERFLOW.\n");
	}
	else if(rear==front)
	{
		printf("The element removed is %d.\n",front->data);
		front=NULL;
		rear=NULL;
	}
	else
	{
		ptr = front->next;
		printf("The element removed is %d.\n",front->data);
		free(front);
		front=ptr;
	}
}
void display()
{
	if(front==NULL){
	printf("Queue is empty.\n");
	}
	else
	{
	ptr=front;
	while(ptr!=NULL)
	{
	printf(" | %d",ptr->data);
	ptr=ptr->next;
	}
	}
}
int main(){
int ch;
	createqueue();
	do
	{
	ch=menu();
	switch(ch)
		{
		case 1:printf("Enter the element to push: ");
			int ele;
  			scanf("%d",&ele);
  			enqueue(ele);
  			break;
		case 2:dequeue();break;
		case 3:display();break;
		case 4:printf("Exiting the program.....\n");
		}		
	}while(ch!=4);
	return 0;
}


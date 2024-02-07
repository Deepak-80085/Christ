//Dynamic Memory Allocation
//A pointer is a variable which is only capable to store the address of another variable
#include <stdio.h>
#include <stdlib.h>

int choice,element;
struct node{
	int data;
	struct node *next;
	
};
struct node *newnode, *top;

void menu(){
	printf("\n 1.Push");
	printf("\n 2.Pop");
	printf("\n 3.Display");
	printf("\n 4.Exit");
	printf("\n\nEnter Choice: ");
	scanf("%d",&choice);
}

void createqueue()
{
	top = NULL;
}

void push(int elm){
	newnode = (struct node *) malloc(sizeof(struct node));
	newnode -> data = elm;
	newnode->next = top;
	top = newnode;
}

int pop(){
	
	if(top == NULL)
	{
		printf("Error : Underflow");
		return NULL;
	}
	else
	{
	int obj = top->data;
	struct node * temp = top->next;
	free(top);
	top = temp;
	return obj;
	}
}

void display(){
	struct node * ptr;
	ptr = top;
	printf("\n\t [ ");
	while (ptr!= NULL){
		printf("%d ", ptr->data);
		ptr = ptr->next;
	}
	printf("]\n");
}
void createstack()
{
	top = NULL;
}

int main(){
	
	do {
		menu();
		switch(choice){
			case 1:
				printf("Enter element: ");
				scanf("%d",&element);
				push(element);
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				break;
			default:
				printf("Enter an appropriate option.\n\n");
		}
	}while (choice!=4);

	return 0;
}

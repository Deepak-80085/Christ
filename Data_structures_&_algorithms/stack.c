#include <stdio.h>
#define MAX 5

int choice,element,i;

struct stack
{
	int a[MAX];
	int top;
}S;
void menu(),push(int elem),pop(),display();


int main(){
	S.top=-1;
		printf("\n---------------------------------STACK--------------------------\n");
	do {
		menu();
		switch(choice){
			case 1:
				
				if (S.top == MAX-1)
					printf("\n\t-----Error: Overflow---------\n");
				else
				{
				printf("\tEnter element: ");
				scanf("%d",&element);
				push(element);
				}
				break;
				
			case 2:
				
				if (S.top==-1)
					printf("\n\t-------------Error: Underflow-------------\n");
				else
				{
					pop();				
				}
				break;
				
			case 3:
				display();
				break;
			case 4:
				break;
			default:
				printf("Enter the correct choice...\n\n");		
		}
	}while(choice!=4);
	return 0;
}

void menu()
{
	printf("\n-----------------------------------------------\n");
	printf("\n 1.Push");
	printf("\n 2.Pop");
	printf("\n 3.Display");
	printf("\n 4.Exit");
	printf("\n-----------------------------------------------\n");
	do
	{
		fflush(stdin);
	printf("\n\nEnter Choice: ");
	}while(scanf("%d",&choice)!= 1 || choice<1 || choice>4);
}
void push(int elem)
		{

		S.top ++;
		S.a[S.top] = elem;	
		}	
void pop()	
		{
		int obj=S.a[S.top];
		S.top--;
		printf("The popped element is [ %d ]\n", obj); 
		}

void display(){
	
	if(S.top == -1)
	
		printf("\n---------------The stack is emtpy--------------\n");
	else
	{
	for (i=S.top;i>=0;i--)
		printf("| %d ", S.a[i]);
	printf("|\n\n");
	}
}


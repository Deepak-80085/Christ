#include <stdio.h>
#define MAX 5

int choice,element,t;

struct stack
{
	int a[MAX];
	int top;
}S;
void menu(),push(int elem),display();
int pop();

int main(){
	S.top=-1;
	do {
		menu();
		switch(choice){
			case 1:
				printf("Enter element: ");
				scanf("%d",&element);
				push(element);
				break;
			case 2:
				if (t=pop()){
				printf("The popped element is %d\n", t);
				break;
				}
				else
					break;
			case 3:
				display();
				break;
			case 4:
				break;		
		}
	}while(choice!=4);
	return 0;
}

void menu(){
	printf("\n 1.Push");
	printf("\n 2.Pop");
	printf("\n 3.Display");
	printf("\n 4.Exit");
	printf("\n\nEnter Choice: ");
	scanf("%d",&choice);
}
void push(int elem){
	if (S.top == MAX)
		printf("Error: Overflow\n");
	else{
		S.top = S.top+1;
		S.a[S.top] = elem;
	}
}
int pop(){
	if (S.top==-1)
		printf("Error: Underflow\n");
	else
		{
		int obj=S.a[S.top];
		S.top--;
		return obj;
		}
}
void display(){
	int i;
	printf("\n\t{");
	for (i=0;i<S.top;i++)
		printf("%d, ", S.a[i]);
	printf("%d}\n\n", S.a[S.top]);
}


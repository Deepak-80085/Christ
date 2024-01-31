#include<stdio.h>
#define max 5

int choice, element, t;

struct queue
{
    int a[max];
    int rear;
} q;

void enqueue(int element);
int dequeue();
int isempty(struct queue q);
void display();
void menu();

int main(void)
{
    q.rear = -1;
    do 
	{
        menu();
        switch (choice)
        {
        case 1:
            printf("Enter element: ");
            scanf("%d", &element);
            enqueue(element);
            break;

        case 2:
            if (!isempty(q)) //! negates the result which in case the (q.rear == -1) from empty function returns 'True' then 'if' condition can negate it and take it as 'false' for it and else block will be executed..
			{
                t = dequeue();
                printf("The dequeued element is %d\n", t);
            } 
			else 
			{
                printf("Queue is empty\n");
            }
            break;

        case 3:
            display();
            break;
            
        case 4:
            break;
        }
    } while (choice != 4);
}

void enqueue(int element)
{
    if (q.rear == max - 1)
    {
        printf("Error: Overflow\n");
    }
    else
    {
        q.rear++;
        q.a[q.rear] = element;
    }
}

int dequeue()
{
    int dequeuedelement;
    if (q.rear == -1)
    {
        printf("Error: Underflow\n");
        return -1;
    }
    else
    {
        dequeuedelement = q.a[0];
        int i;
        for (i = 0; i < q.rear; i++)
        {
            q.a[i] = q.a[i + 1];
        }
        q.rear = q.rear - 1;
        return dequeuedElement;
    }
}

int isempty(struct queue q)
{
    return (q.rear == -1);  // if q.rear == -1 the it will return true , basically 1 
}

void display()
{
    if (isempty(q))
    {
        printf("Queue is empty.\n\n");
        return;
    }
    else
    {
    	int i;
	    printf("Queue elements: ");
	    for (i = 0; i < q.rear; i++)
	    {
	        printf(" |%d, ", q.a[i]);
	    }
	    printf("%d | \n\n", q.a[q.rear]);    	
	}
}

void menu()
{
	printf("Select any one");
    printf("\n1. Enqueue\n");
    printf("2. Dequeue\n");
    printf("3. Display\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
}

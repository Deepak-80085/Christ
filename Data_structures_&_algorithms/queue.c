#include<stdio.h>
#define max 5

int choice, element, i;

struct queue
{
    int a[max];
    int rear;
} q;

void enqueue(int element),display(),menu();
int dequeue();

int main(void)
{
	printf("\n---------------------------------QUEUE--------------------------\n");
    q.rear = -1;
    do 
	{
        menu();
        switch (choice)
        {
        case 1:
        	{	
        	if (q.rear == max - 1)
   			{
        		printf("\n-----------Error: Overflow-----------\n");
    		}
			else
			{
            	printf("\tEnter element: ");
            	scanf("%d", &element);
            	enqueue(element);
			}
			break;
			}
     	case 2:
     	    if (q.rear == -1)
    		{
        		printf("\n---------Error: Underflow-------------\n");
    		}
    		else
    		{
            	dequeue();
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
        q.rear++;
        q.a[q.rear] = element;    
}

int dequeue()
{
    int dequeue_element;
        dequeue_element = q.a[0];
        
        for (i = 0; i < q.rear; i++)
        {
            q.a[i] = q.a[i + 1];
        }
        q.rear = q.rear - 1;
        printf("The dequeued element is [ %d ]\n", dequeue_element);
}

void display()
{
    if (q.rear == -1)
    {
        printf("\n-------------Queue is empty.-----------\n\n");
        return;
    }
    else
    {
    	
	    printf("Queue elements: ");
	    for (i = 0; i <= q.rear; i++)
	    {
	        printf(" | %d ", q.a[i]);
	    }
	    printf("| \n");    	
	}
}

void menu()
{
	printf("\n-----------------------------------------------\n");
    printf("\n1. Enqueue\n");
    printf("2. Dequeue\n");
    printf("3. Display\n");
    printf("4. Exit\n");
    printf("\n-----------------------------------------------\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
}

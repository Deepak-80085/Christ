#include<stdio.h>
#include<stdlib.h>
#include<time.h>
struct bank_application
{
    int acc,an,pn,bb;
    struct bank_application * next;
};
struct bank_application *newnode,*head,*temp,*ptr,*prev;

int choice,place_found,acc,an,pn,bb;

void menu()
{
    printf("\n 1 Create a new account");
    printf("\n 2 Update the balance");
    printf("\n 3 Display ");
    printf("\n 4 Closing th account");
    printf("\n 5 Exit");
    printf("\n 6 Display");
    do
    {
        printf("\n Enter a option :");
    } while (scanf("%d",&choice)!= 1 || choice <0 || choice > 5);
}
void list()
{
    head = NULL;
}
int insert(int an,int pn)
{
		srand(time(0));
	newnode = (struct bank_application*)malloc(sizeof(struct bank_application));
        newnode->an = an;
        newnode->pn = pn;
        newnode->acc = rand()%100 + 1;
        newnode->bb = NULL;
        newnode->next = NULL;
    if(head == NULL)
    {
        head = newnode;
    }
    else
    {
        newnode->next = head;
        head = newnode;
	}
	return newnode->acc;
}

void amount(int acc,int bb)
{
    ptr = head;
    while(ptr!=NULL&& place_found==0)
    {
        if(ptr->acc = acc)
        {
            place_found = 1;
    		ptr->bb = bb;
    		printf("Balance updated..");
		}
	ptr = ptr->next;
}
if(place_found == 0)
	printf("Account not found\n");
		
}
void display()
{
	temp = head;
	printf("Account Number\n");
	while(temp!=NULL)
	{
		printf("| %d ",(temp->acc));
		printf("[$%d]\n",temp->bb);
		temp = temp->next;
	}
}
void close(int acc) {
    if (head == NULL) {
        printf("No accounts\n");
    }
    if (head->acc == acc) {
        temp = head;
        head = head->next;
        free(temp);
        printf("Account closed successfully\n");
    }
    prev = head;
	temp = head->next;
    while (temp != NULL) {
        if (temp->acc == acc) {
            prev->next = temp->next;
            free(temp);
            printf("Account closed ");
        }
        prev = temp;
        temp = temp->next;
    }
    if(temp == NULL)
    	printf("Account is not found");
}

int main()
{
    list();
    do
    {
        menu();
        switch (choice)
        {
        case 1:
        {
            printf("\nTo create bank account\n");
            printf("\nEnter your aadhar number :");
            scanf("%d",&an);
            printf("\n Enter your pan number : ");
            scanf("%d",&pn);
            acc = insert(an,pn);
            printf("Your new a/c number is %d",acc);
            break;
        }
        case 2:
        {
            printf("\nTo update the balance\n");
            printf("Enter your account number :");
            scanf("%d",&acc);
            printf("\nEnter your amount :");
            scanf("%d",&bb);
            amount(acc,bb);
            break;
        }
        case 4:
        	{
        		printf("Enter your a/c number : ");
        		scanf("%d",&acc);
				close(acc);
				break;
			}
        case 3:
        	display();
            break;
        }
    } while (choice!=5);
}

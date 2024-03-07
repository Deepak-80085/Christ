#include<stdio.h>
int main()
{
	char a[50],b[50],e[50],i[50];
	
	int c,d;
	printf("Enter your BANK NAME:  ");
	scanf("%s",&a);
	printf("\nEnter your Name: ");
	scanf("%s",&b);
	printf("\nEnter yout branch address: ");
	scanf("%s",i);
	printf("\nEnter your Account Number:  ");
	scanf("%d",&c);
	
 	
		
	printf("\nEnter your Current Balance: ");
		scanf("%d",&d);
	
		
		if(0> d)
	{
			printf("Entered value in invalid\n");
		}	
	 
	printf("\nType of Account(SAVINGS/CURRENT) :");
	scanf("%s",&e);
	
	   printf("\n\n*BANK NAME : %s\n",a);
	   printf("*ENTERED NAME : %s\n",b);
	   printf("*ENTERED BRANCH ADDRESS : %s\n",i);
	   printf("*A/C no. : %d\n",c);
	   printf("*CURRNET BALANCE :%d\n",d);
	   printf("*TYPE OF A/C CHOOSED : %s\n",e);
	   
	   
	    char oper;
    do 
    {
        printf("\n\n BANKING OPERATIONS\n 1] Deposit\n 2] Withdrawal\n 3] Check Balance\n 4] Guidelines\n 5] Exit\n\n");
        printf("Operation :");
        int operation;
        scanf("%d", &operation);

        switch (operation)
        {
            case 1:
                printf("---------Deposit---------\nEnter Amount: ");
                int add_amount;
                scanf("%i", &add_amount);
                d += add_amount;
                printf("---------Money Credited---------\n");
                break;
            
            case 2:

                printf("---------Withdraw---------\nEnter Amount: ");
                int debit_amount;
                scanf("%i", &debit_amount);
                d -= debit_amount;
                printf("---------Money Debited---------\n");
                break;
            
            case 3:
                printf("---------Balance---------\n");
                printf("Balance: %i\n", d);
                printf("---------Balance---------\n");
                break;

            
            case 4:
                printf("---------Guidelines---------\n");
                printf(" Minimum balance should be 4000");
                break;

            case 5:
                return 0;
            
            default:
                break;
        }
        printf("\nDo You Want to continue Y/N :");
        scanf(" %c", &oper);
    }
    while(oper == 'Y');
}

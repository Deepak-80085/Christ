/* Implement a C program on FUNCTIONS with the following specificg - use these wherever required:
    -function without arguments and without return valueation:
Write a C Program for SUPER_MARKET STORE Management where it consist of minimum four (04) functions in it with the following parameters:

(1) Function_01 : Show the MARKET STOCK items of the groceries and other items of the Super Market.
(2) Function_02 : In this function, client should provide the input vales for ORDERING Market_Store Components / Items and store the ORDERING components appropriately using variables / arrays.
(3) Function_03 : In this function the calculation of the user ORDER  details should execute such as calculating the total cost of the client ORDERS
(4) Function_04 : Display the result of the Client order details (BILLING).

Note :
(i) Different aspects of function callin
    -function without arguments and with return value
    -function with arguments and without return value
    -function with arguments and with return value
(ii) The program should have Function declaration, Function call, Function definition.*/

#include<stdio.h>
#include<string.h>

int function_1()
{
	printf(" --------------------------ITEMS----------------------\n\n");
	printf("\t 1]Rice  Rs.100 \n ");
	printf("\t 2]Wheat Rs.70  \n");
	printf("\t 3]MILK  Rs.45\n");
	printf("\t 4]BREAD Rs.30\n");
	printf("\t 5]EGGS Rs.5\n");
}

float function_2(int quantites[]);
int function_3(int quantites[]);
void function_4(float bill);


int main()
{
	int quantites[5];
	printf("\t\t\t\t-------WELCOME TO STARK SUPER MARKET---------\n\n\n\n");
	
	float bill;
	//calling fuction_1
	function_1();
	//calling fuction_2
	function_2(quantites);
	//calling fuction_3
	bill = function_3(quantites);
	//calling fuction_4
	function_4(bill);
	
	return 0;
}

//declration of functions
//for function_2
float function_2(int quantites[])
{
	printf("\n-------------------------------------------------------------------------------------\n");
	printf("\n\t---------------Enter the quantity of items:  -----------------------------\n");
	printf("\n-------------------------------------------------------------------------------------\n");
	printf("Rice (1 kg) : ");
    scanf("%d", &quantites[0]);
    printf("Wheat (1 kg): ");
    scanf("%d", &quantites[1]);
    printf("Milk (1 litre): ");
    scanf("%d", &quantites[2]);
    printf("Bread (1 loaf): ");
    scanf("%d", &quantites[3]);
    printf("Eggs (per piece): ");
    scanf("%d", &quantites[4]);
    printf("\n-------------------------------------------------------------------------------------\n");
}

//for function_3
int function_3(int quantites[5])
{
	int i;
	float cost[] = {100, 70, 45, 30, 5};
	float bill = 0;
	//using for loop
	for(i = 0; i<5; i++)
	{
		bill += quantites[i] * cost[i];
	}
	return bill;
	bill = bill + (bill * 0.12);
}
//for function_4
void function_4(float bill)
{
	printf("\n\t------------------------\t\n");
    printf("               BILL         \n");
    printf("\t------------------------\n");
    printf(" with GST 12%-------- \n");
    
    printf("Total Cost: Rs.%f with 12%% GST\n", bill);
    printf("\n----------------------------------------------------------------------------------------------------------------------\n");
    printf("------------------Thank you for visiting-------------------");
}	



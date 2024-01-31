#include<stdio.h>
int main()
{
	float interest,months,amount;
	int age = 24;
    amount = 10000;
	while(age != 60)
	{
	 	for(months=0;months<12;months++)
		 {
		 	interest = amount * 0.01;
		 	amount += interest;
		 	amount += 10000;
	 		
		 }
		 age ++;
	}
	printf("Amount after %f",amount);
	return 0;
}

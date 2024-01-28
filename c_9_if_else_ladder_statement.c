#include<stdio.h>

int main()
{
	int a;
	printf("enter a value \n");
	scanf("%i",&a);
	if (a<10)
	{
		printf("%i is a single digit number",a);
	}
	else if(a<=100)
	{
		printf("%i is a two digit number",a);  
	}
	else if(a<=1000)
	{
		printf("%i is three digit number",a);
	}
	else if(a<=10000)
	{
		printf("%i is four digit number",a);
	}
	else
	{
			printf("%i the given number more than a four digit");
	}
	return 0;

}

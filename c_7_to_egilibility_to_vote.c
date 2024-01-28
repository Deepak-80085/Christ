#include<stdio.h>

int main()
{
	int age;
	printf("Enter your age\n");
    scanf("%d",&age);
	if(age>=18)
{
	printf("%d hey you can vote",age);
}
else
{
	printf("%d  hey you can't vote get lost",age);
}
return 0;
}


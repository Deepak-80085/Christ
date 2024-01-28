#include<stdio.h>
int add(int,int);
int main()
{
	int a,b;
	int(*ip)(int,int);
	int result;
	printf("Enter the values of a and b :");
	scanf("%d %d",&a,&b);
	ip = add;
	result = (*ip)(a,b);
	printf("\n\n-----------------------------\n");
	printf("Value after addition is %d\n",result);
	printf("-----------------------------");
	return 0;
}

int add(int a , int b)
{
	int c = a + b;
	return c;
}

#include<stdio.h>

void swap(int, int);
main(void)
{
	int a = 100;
	int b = 500;
	printf("Swaping of two numbers a = %d b = %d\n",a,b);
	swap(a,b);
	
}
void swap(int a, int b)
{
	int c;
    c = a;
	a = b;
	b = c;
	printf("After swapping values a = %d, b = %d\n",a,b);
}

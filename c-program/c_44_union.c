#include<stdio.h>

union abc
{
	int a;
	char b;
}
var;
int main()
{
	var.a = 100;

	printf("\n a = %d", var.a);
	// union - comprizes the bits 
	printf("\n b = %c",var.b);
}

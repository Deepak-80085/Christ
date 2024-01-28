#include<stdio.h>

#include<string.h>

void abc() //Create a function it should be different from system functions & should start with numbers
{
	printf("I just got executed!");
	
}
//main function
int main()
{
	abc();// call the function
	abc();
	abc();
	return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
	char a[100], b[100];
	printf("Enter the [First Name] string \n \t");
	gets(a);
	printf("Enter the [Last Name] string\n");
	gets(b);
	//it allows only 2 variables [concatenation]
	//to add 3 inputs wwe have make a new strcat and connet it with the required variable
	strcat(a,b);
	printf("String obtained on concatenation is %s \n",a);
} 

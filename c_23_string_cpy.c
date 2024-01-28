#include<stdio.h>
#include<string.h>  
int main(void)
{
	char ch[20]={'D','e','e','p','a','k','\0'};
	char ch2[20];
	strcpy(ch2,ch);
	printf("Value Original variable is %s\n\t",ch);
	printf("Value of second string is %s",ch2);
	
}

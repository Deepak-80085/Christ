#include<stdio.h>
#include<conio.h>
int main(void)
{
	//This is are the datatypes
	int a;
	printf("Enter an integer\n");
	scanf("%d",&a);
	
	float b;
	printf("Enter a float\n");
	scanf("%f",&b);
	
	char w;
	printf("Enter a char\n");
	scanf("%c",&w);
	
	char d[50];
	printf("Enter a string\n");
	scanf("%s",&d);
	
	/*we stored data given by the user in a,b,c,d*/
	
	printf("%d is an integer\n",a);
	printf("%d is a float\n",b);
	printf("%d is a char\n",w);
	printf("%d is a string\n",d);
	return 0;
}

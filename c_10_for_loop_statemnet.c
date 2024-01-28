#include<stdio.h>

int main()
{
	int a,i;
	printf("Enter the number\n");
	scanf("%d",&a);
	for(i=10;i>=0;i--)
	{
		printf("\n %d",(a*i));
	}
	return 0;
}

#include<stdio.h>

int main()
{
	int marks;
	printf("Enter your marks\n");
	scanf("%d",&marks);
	if(marks>84&&marks<=100)
	{
		printf("%d you got A grade ,EXCELLENT!",marks);
	}
	else if(marks>60&&marks<=84)
	{
		printf("%d you got B grade try to get more next time",marks);
	}
	else if(marks>34&&marks<=60)
	{
		printf("%d you got C grade, hey try to improve more",marks);
	}
	else if(marks<=34)
	{
		printf("%d hey you failed ,idiot",marks);
	}
	return 0;
}

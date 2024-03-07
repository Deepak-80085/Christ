#include<stdio.h>
int main()
{
	int reg,Attendence;
	float percentage,tc,nc;
	printf("Enter the REG No of the student : ");
	scanf("%d,",&reg);
	if (reg<0)
	{
		printf("Entered reg no invalid");
		return 0;
	}
	
	printf("\n Enter total classes held : ");
	scanf("%f",&tc);
	if (tc<0)
	{
		printf("Entered value no invalid");
		return 0;	
	}
	printf("\n Enter number of classes attended : ");
	scanf("%f",&nc);
	if (nc<0 || nc>tc)
	{
	printf("Entered value is invalid");	
	}
	(percentage =  ((nc)/(tc))*100);
	//printing statements
	printf("\nREG NO : %d",reg);
	printf("\nTotal classes held : %f",tc);
	printf("\nNumber of classes attended : %f",nc);
	printf("\nAttendence percentage : %0.3f",percentage);
	if(percentage<75)
	{
		printf("The student Attendence shortage fine : Rs 5000");
	}
	else if (percentage<85 && percentage>=75)
	{
		printf("The student Attendence shortage fine : Rs 1000");
	}
	else if (percentage<=100 && percentage>95)
	{
		printf("he student Attendence shortage fine : 0 ");
	}
	return 0;
	}

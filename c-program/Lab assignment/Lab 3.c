  #include<stdio.h>
int main()
{
	int a,b;
	printf("Enter your Reg No:");
	scanf("%d",&a);
	if(0>a)
	{
		printf("Entered Reg No is INVALID!\n",a);
	}else
	{
		printf(" Reg No %d  ",a);
	}
	printf("\nEnter your Attendence percentage:");
	scanf("%d",&b);
	
	if(0>b&&100<b)
	{
		printf("The entered percentage in INVALID!",b);
	}
	else if(b<60)
	{
		printf("YOUR ATTENDENCE FINE IS 4000",b);
	}
	else if(b>=60&&b<=69)
	{
		printf("YOUR ATTENDENCE FINE IS 3000",b);
	}
	else if(b>=70&&b<=79)
	{
		printf("YOUR ATTENDENCE FINE IS 2000",b);
	}
	else if(b>=80&&b<=89)
	{
		printf("YOUR ATTENDENCE FINE IS 1000",b);
	}
	else if(b>=90&&b<=100)
	{
		printf("YOUR ATTENDENCE FINE IS 0",b);
	}
	return 0;
	}

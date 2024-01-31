#include<stdio.h>
#include<stdio.h>
int main(void)
{
	int p = 23, t= 1,days=1;
	
	while(p != t)
	{
	p = p+23;
	days += 1;
	t= t+days;
	}
	printf("%d is days",days);
	printf("\n%d is the total diastance",p);
}


#include<stdio.h>
main()
{
	char c;
	printf("Enter the choice[y,n]\n");
	scanf("%c",&c);
	switch(c)
	{
	case'yes':
		{
		printf("Welcome to C program");
		break;
       }
	case'no':
		{
		
			printf("Welcometo DCF");
			break;
	    }
		default:printf("Welocome to BscCM");
	
}
		return 0;
}

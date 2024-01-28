#include<stdio.h>
#include<conio.h>
int main(void)
{
	
	//Storing candidate name
	char  name[100];
	printf("Enter your NAME : ");
	scanf("%s",&name);
	//Storing candidate age				
	int age;
	printf("Enter your AGE : ");
	scanf("%d",&age);
	//Storing candidate address
	char address[100];
	printf("Enter your ADDRESS [only your area name] :  ");
	scanf("%s",&address);
	//Storing candidate date of birth 
	char dob[100];
	printf("Enter your DATE OF BIRTH :  ");
	scanf("%s",&dob);
	
	do
	{
	
	
	int dose,second;
	
	
	if(age>=18 && age<90)
	{
		
		printf("Have you taken covid vaccination before \n1)no \n2)yes\n\t");
		scanf("%d",&dose);
		{
		
		switch(dose)
		
			case 1:
			{
					printf("\n----------------Dose 1: Today 7-Sept-2023");
					printf("\n----------------Dose 2: After 30 days....");
					printf("\n----------------Dose 3: After 30 days....");
					break;
				 
			case 2:
				{
				    
					printf("Are you taken \nDose 1 \nDose 2 or \nDose 3....\n\t");
					scanf("%d",&second);
					switch(second)
					{
						case 1:
							{
								printf("\n-------------Dose 2: Today 7-Sept-2023");
								printf("\n-------------Dose 3: After 30 days...");
								break;
							}
						case 2:
							{
								printf("\n-------------Dose 3: Today 7-Sept-2023");
								break;
							}
							case 3:
								{
									printf("\n--------------You have taken required vaccine doses for COVID");
									break;
								}
						
					}	
				}
		
	}
	
	} age++;
	}else if(age>90 && age<120)
	{
		printf("Is there any medical condition[sugar][BLOOD PRESSURE]etc...\nPlease bring medical report from your Doctor.");
	}
	else(age>120);
}while(age<5);
}

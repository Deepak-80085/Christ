/*CONSIDER A C PROGRAM TO GET THE REGISTER NUMBER AS A STRING AND CHECK IF IT IS 2020190. IF IT IS 
2020190.DISPLAY THAT THR HALL TICKET IS BLOCKED FOR THIS STUDENT ELSE DISPLAY EXAM DATE .

USING STRING COMPRASION.

STEPS:
1]DISPLAY THE STATEMENT TO GET THE VALUE.
2] DEFIBNE STRING / CHARACTHER VARIABLE reg_no[]
3] COMPARE THE STRING WITH GIVEN VALUE 
4] IF EQUAL - DISPLAY BLACKED - ELSE DISPLAY EXAM DATE.*/

#include<stdio.h>
#include<string.h>
int main(void)
{
	char reg_no[100]="2340111",reg[100];
	printf("Enter your register no : ");
	gets(reg);
	int verify = strcmp(reg_no , reg);
	
	if(verify==0)
	{
		printf("Your hall ticket is blocked because of attendence shortage..... ");
	}
	else
	{
		printf("The exam date is uploaded in your KP");
	}
	puts(reg_no);
	
}



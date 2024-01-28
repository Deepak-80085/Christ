#include<stdio.h>
#include<string.h>
int main(void)
{
	char First_str[] = "ONE piece";
	char Second_str[] = "One Piece";
	int res = strcmp(First_str, Second_str);
	 
	if (res==0)
	{
		printf("Strings are equal");
	}
	else
	{
		printf("Strings are unequal");
	}
	printf("\n Value returned by strcmp() is: %d",res);
	
}

#include<stdio.h>
#include<string.h>
int main(void)
{
	char str1[]="CM students", str2[]=" are good";
	int length ,j;
	length=0;
	
	while (str1[length] !='\0')  
	{
		++length;
	}
	for(j=0;str2[j] !='\0';++j,++length)
	{
		str1[length]=str2[j];
	}
	
	str1[length]='\0';
	
	printf("After concatenation: ");
	puts(str1);
}

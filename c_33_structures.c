#include<stdio.h>
 // create a structure called myStructure
struct myStructure 
{
	int myNum;
	char myLetter;
};

int main()
{
	//create structure variable of myStructure called s1 
	struct myStructure s1;
	
	//Assign values to members of s1
	s1.myNum = 13;
	s1.myLetter = 'A';
	
	//print values
	printf("My number : %d\n %c", s1);

	
	return 0;
	
}

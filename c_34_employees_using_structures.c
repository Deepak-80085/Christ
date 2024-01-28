/* Write a C program which takes 3 employees information and
display the same 
note : Use structure with different variables in it */
#include<stdio.h>
typedef struct {
	char Name[50];
	int id;
	float salary;
} Employee;

int main()
{	//number of employees
	int n = 3;
	
	//array to store structure values of all employees
	Employee employees[n]; //employees[n] is a array
	
	//taking each employee detail as input 
	int i;
	printf("Enter %d Employee Details \n \n",n);
	for ( i=0; i<n; i++)
	{
		printf("Employes %d : \n",i+1);
		
		//Name
		printf("Name : ");
		scanf("%[^\n]s",&employees[i].Name);
		
		//Id
		printf("Id : ");
		scanf("%d",&employees[i].id);
		
		//Salary
		printf("Salary : ");
		scanf("%f",&employees[i].salary);
		
		//to consume extra '\n' input
		char ch = getchar();
		printf("\n");
	}
	//Displaying Employee details
	printf("--------ALL EMPLOYEE DETAILS-----------------\n");
	for (i=0; i<n; i++)
	{
		printf("Name : ");
		printf("%s \n",employees[i].Name);
		
		printf("Id :");
		printf("%d \n",employees[i].id);
		
		printf("Salary : ");
		printf("%f \n",employees[i].salary);
	}
	return 0;
}

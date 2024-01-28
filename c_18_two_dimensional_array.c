#include<stdio.h>
int main()
{
	int arr[3][3]={{1,2,3,},{1,2,3,},{1,3,2}};
	int i,j;
	printf("Elements of the array are: \n ");
	for (i=0;i<3;i++)
	{ 
	for (j=0;j<3;j++)
		{
			printf("%d\n",arr[i][j]);
		}
		
	}
		

}

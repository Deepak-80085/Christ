#include <stdio.h>
#include <stdlib.h>

int insert_element(int a[100],int high,int pos , int element , int n);
int linearsearch(int a[],int low,int high,int keyvalue);

int main() 
{
    int n,i,a[100],high,low,keyvalue,t,element,pos,x;
	printf("\t\tINSERTING AN ELEMENT IN ARRAY AND FINDING A ELEMENT IN THE NEW ARRAY..");
	printf("\n------------------------------\n");
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
     a[i] = rand();
    }
    for(i=0;i<n;i++)
    {
    printf("| %d  ", a[i]);
    }
	printf(" |");
	printf("\n------------------------------\n");
   printf("\n\tElement to be added: ");
	scanf("%d",&element);
	printf("\n\tPosition: ");
	scanf("%d",&pos);
	printf("\n------------------------------\n");
	if(pos>n)
	{
		do
		{
			printf("\n\t----Entered index to insert is incorrect----");
			printf("\nEnter the correct position : ");
			scanf("%d",&pos);
		} 
		while(pos>n);
	}
   			n = insert_element(a,n-1,pos,element,n); 

        	printf("Elements of the array are");
			for(x=0;x<n;x++)
				{
				printf(" | %d",a[x]);
				}
	printf(" |");
	printf("\n------------------------------\n");
    printf("\n\tEnter the value whose index to be found:");
	scanf("%d",&keyvalue);
	low=0; high=n-1;
	t=linearsearch(a,low,high,keyvalue);
	if(t==-1)
	{
		printf("\n-------Element not found.---------");
	}
	else
	printf("\n-----------Element found at the the index [%d]----------------\n",t);
}

int insert_element(int a[100],int high,int pos , int element , int n)
{
	int i;
	i = high;
	while(i>=pos)
	{
		a[i+1]=a[i];
		i =i-1;
	}
	a[pos]=element;
	n = n+1;
	
	return n;
	
	
}

int linearsearch(int a[],int low,int high,int keyvalue)
{
	int found=0;
	while(low<=high && found==0)
	{
		if(a[low]==keyvalue)
		{
			found=1;
			return low;
		}
		else
		low=low+1;
	}
	if(found==0){
		return -1; //not 0 because it is starting index of many programming language
	}
	
}
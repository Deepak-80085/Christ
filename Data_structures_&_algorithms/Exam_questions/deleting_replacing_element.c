#include<stdio.h>
int position(int a[50],int n,int low,int high,int element);
void del(int a[50],int n ,int high,int pos);

int main()
{
	int a[50],n,i,element,pos,low,high;
		printf("\n\tDELETING AN ELEMENT IN ARRAY AND REPLACING IT..");
		printf("\n------------------------------\n");
		printf("Enter the number the of elements for the array : ");
		scanf("%d",&n);
		printf("\n------------------------------\n\n");
	for(i=0;i<n;i++)
	{
		printf("Enter the elements a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	printf("\n\n\n\tEnter the element the to be deleted : ");
	scanf("%d",&element);
	
	low = 0;
	high = n-1;
	pos = position(a,n,low,n-1,element);
	if(pos == -1)
	{
		do
		{
			printf("\nEnter the element the to be deleted properly : ");
			scanf("%d",&element);	
			pos = position(a,n,low,n-1,element);
		}
		while(pos == -1);
	}
	
	del(a,n,n-1,pos);
	
}

int position(int a[],int n,int low,int high,int element)
{
	int found = 0;
	while(low<=high && found ==0)
	{
		if(a[low]==element)
		{
		found = 1;
		return low;
		}
		else{
			low = low+1;
		}
	}
	if(found == 0)
	{
		printf("ERROR");
		return -1;
	}
}

void del(int a[50],int n ,int high,int pos)
{
	int i,add;
	i = pos;
	printf("\n----------------------------------------------\n");
	printf("\tEnter the element to be replaced : ");
	scanf("%d",&add);
	a[pos] = add;	
	
	int j;
	printf("\n----------------------------------------------\n");
	printf("The ARRAY is \n\n\t");
	
	for(j=0;j<n;j++)
	{
		printf(" | %d",a[j]);
	}
	printf("|");
	printf("\n----------------------------------------------\n");
}

#include<stdio.h>

void insert_element(int a[100],int high,int pos , int element , int n);

int main(void)
{
	int a[100];
	int n,i;
	int pos;
	int element;
		printf("INSERTING A ELEMENT IN ARRAY\n\n");
	printf("Number of elements: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Element %d: ",i);
		scanf("%d",&a[i]);
	}
	
	printf("Element to be added: ");
	scanf("%d",&element);
	printf("Position: ");
	scanf("%d",&pos);
	if(pos>n)
	    {
     		printf("\n\t----Entered index to insert is incorrect----");
  			return 0;
		}
  	else
   		{
   			insert_element(a,n-1,pos,element,n);   
		} 		
}

void insert_element(int a[100],int high,int pos , int element , int n)
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
	
	int x;
	
	printf("Elements of the array are");
	for(x=0;x<n;x++)
	{
		printf(" | %d",a[x]);
	}
	printf(" |");
}



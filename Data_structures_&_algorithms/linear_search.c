#include<stdio.h>
int main(void)
{
	int a[100];
	int low,high,found,n,i,keyvalue,index;
	
	printf("Number of elements: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Elements %d : ",i);
		scanf("%d",&a[i]);
	}
	printf("\n\n\tKeyvalue: ");
	scanf("%d",&keyvalue);
	
	low=0;
	high=n-1; 
	found=0;
	
	while(low<= high && found == 0)
	{
		if(a[low]== keyvalue)
		{
			found = 1;
			index =low;
		}
		else
		{
			low = low+1;
		}
	}
	
	if (found == 0)
	{
		printf("--------------Element doesn't exist----------------");
	}
	else
	{
		printf("   --------------Element exists--------- %d   ",index);
		
	}
	
}


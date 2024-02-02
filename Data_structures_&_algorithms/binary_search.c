#include<stdio.h>

int binarysearch(int a[],int low, int high, int keyvalue);

int main(void)
{
	int low,high,n,i,keyvalue,check;
	
	printf("Numbers of elements: ");
	scanf("%d",&n);
	
	int a[n];
	
			for(i=0;i<n;i++)
			{
				a[i] = i+1;
				printf("%d ", a[i]);
		 	}	
			
	printf("\nKeyvalue: ");
	scanf("%d",&keyvalue);
	
    low = 0; 
	high = n-1;
    
     check = binarysearch(a,low,high,keyvalue);
    
	if (check == -1)
	{
		printf("The Element is not present in the Array");
	}
	else
	{
		printf("The index of the element %d",check);
	}

}


int binarysearch(int a[], int low, int high, int keyvalue)
{
	int found = 0;
	int mid;
	while(low <= high && found == 0)
	{
	    mid = (low + high )/2;
		if (a[mid]==keyvalue)
		{
			found = 1;
		}
		else if(keyvalue > a[mid])
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	
	if (found==0)
	{
		return -1;
	}
	else
	{
		return mid;
	}
}


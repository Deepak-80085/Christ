//Index value search using functions

#include <stdio.h>
int linearsearch(int a[],int low,int high,int keyvalue);
int main(){
	int a[100],low,high,n,i,keyvalue,t;
	printf("------------Enter the number of elements to be inserted in array :  ");
	scanf("%d",&n);
	for(i=1;i<n;i++){
		printf("Enter element %d: ",i);
		scanf("%d",&a[i]);
	}
	printf("-----Enter the value whose index to be found:");
	scanf("%d",&keyvalue);
	low=0; high=n-1;
	t=linearsearch(a,low,high,keyvalue);
	if(t==-1)
	{
		printf("\n-------Element not found.---------");
	}
	else
	printf("\n-----------Element found at the the index %d.----------------",t);
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

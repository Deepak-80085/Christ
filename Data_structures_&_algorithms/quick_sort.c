#include<stdio.h>
#include<string.h>
int i,n;
void quicksort(int a[],int low,int high){
	int l=low,h=high;
	int x=a[(l+h)/2];
	do{
		while(x>a[l]) l++;
		while(x<a[h]) h--;
		if(l<=h){ 
			int temp=a[l];
			a[l]=a[h];
			a[h]=temp;
			l++;
			h--;
		}
		for(i=0;i<n;i++)
		{
			printf(" %d ",a[i]);
		}
		printf("\n");
	}while(h>=l);
	if(low<h)
		quicksort(a,low,h);
		printf("%d , %d\n",low,h);
				for(i=0;i<n;i++)
		{
			printf(" %d ",a[i]);
		}
		printf("\n");
	if(l<high)
		quicksort(a,l,high);
		printf("%d , %d\n",l,high);
				for(i=0;i<n;i++)
		{
			printf(" %d ",a[i]);
		}
		printf("\n");
}
int main()
{
	
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	int a[n];
	printf("\n----------------------------------------------------\n");
	printf("Enter the elements: \n",n);
	for(i=0;i<n;i++){
		printf("Element [%d]  ",i);
		scanf("%d",&a[i]);
	}
	quicksort(a,0,n-1);
	printf("\n----------------------------------------------------\n");
	printf("The elements in the ascending order are:\n");
	for(i=0;i<n;i++){
		printf(" | %d ",a[i]);
	}
	printf("\n----------------------------------------------------\n");
	return 0;
}

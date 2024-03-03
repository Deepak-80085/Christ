#include<stdio.h>

void menu();
int linear(int a[],int low,int high,int keyvalue);
int binary(int a[],int low,int high,int keyvalue);
int insert(int a[],int high,int pos,int element,int n);
int del(int a[], int high,int pos,int n);


int main()
	
{
	int option,a[50],low,high,n,i,keyvalue,t,pos,element;
	do
	{
		menu();
		
		printf("\n Select the option from above :  ");
		scanf("%d",&option);
		printf("\n\n\n");
		switch(option)
		{
			case 1:
				{
				printf("LINEAR SEARCH\n");
//				int a[50],low,high,n,i,keyvalue,t;
				printf("Enter the number of elements to be inserted in array max[50] :  ");
				scanf("%d",&n);
					for(i=0;i<n;i++)
					{
						printf("Enter element %d: ",i);
						scanf("%d",&a[i]);
		 			}
				printf("-----Enter the value whose index to be found:");
				scanf("%d",&keyvalue);
				low=0; high=n-1;
				t= linear(a,low,high,keyvalue);
				if(t==-1)
					{
						printf("\n-------Element not found.---------");
					}
				else
						printf("\n-----------Element found at the the index %d.----------------",t);
					}
				break;
				
			case 2:
				{
				printf("BINARY SEARCH\n");	

				printf("Numbers of elements max[50]: ");
				scanf("%d",&n);
					for(i=0;i<n;i++)
						{
							a[i] = i+1;
		 				}		
					for (i = 0;i<n;i++)
						{
							printf("%d ", a[i]);
						}
				printf("\nKeyvalue: ");
				scanf("%d",&keyvalue);
    			low = 0; 
				high = n-1;
     			t = binary(a,low,high,keyvalue);
					if (t == -1)
						{
							printf("The Element is not present in the Array");
						}
					else
						{
							printf("The index of the element %d",t);
						}
				break;
				}
			case 3:
				{
				printf("INSERTION \n");
//				int a[100],n,i,pos,element;
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
     							printf("\n\t----Entered index to delete is incorrect----");
     							return 0;
							}
   							else
     						{
   								insert(a,n-1,pos,element,n);
							} 	
							break;
				}
			case 4:
				{
				printf("DELETION\n");  
//  			    int pos, i, n,a[100];
    			printf (" \n Enter the number of elements in an array:  ");  
   				scanf (" %d", &n);  
   					for (i = 0; i < n; i++ )  
    					{ 
						    printf (" elements[%d] = ", i);  
    					    scanf (" %d", &a[i]);  
    					}  
    						printf( " Index of the element to detele:  ");  
    						scanf (" %d", &pos);  
   							    if(pos>n)
    						        {
     									printf("\n\t----Entered index to delete is incorrect----");
     									return 0;
									}
   								else
     								{
   										del(a,n-1,pos,n);
									} 
    						
    						break;
				}	
			case 5:
				break;
		}
	}while(option != 5);
}

void menu()
{
	printf("\n\n");
	printf("\n 1. Linear Search");
	printf("\n 2. Binary Search");
	printf("\n 3. Inseration");
	printf("\n 4. Deletion");
	printf("\n 5. Exit");
}


int linear(int a[],int low,int high,int keyvalue)
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

int binary(int a[],int low,int high,int keyvalue)
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

					int insert(int a[],int high,int pos , int element , int n)
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
					int del(int a[], int high,int pos,int n)
{
	
		int i = pos;
	        for(;i <high; i++)  
        {  
            a[i] = a[i+1];   
        }  
        n = n - 1;
        
	int j;	
	for(j=0;j<n;j++)
	{
		printf(" | %d",a[j]);
	}
	printf(" |");
}


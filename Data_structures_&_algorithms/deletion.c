#include <stdio.h> 
 
void del(int a[], int high,int pos,int n);
int main ()  
{  
    int a[50];  
    int pos, i, n;
    printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf (" \n Enter the number of elements in an array:  ");  
    scanf (" %d", &n);  
    for (i = 0; i < n; i++ )  
    {   printf (" elements[%d] = ", i);  
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
}

void del(int a[], int high,int pos,int n)
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
	printf("\n--------------------------------------------------------------------------------------------------------------");
}

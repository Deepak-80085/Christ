#include <stdio.h>
#include <string.h>

//User defined function
int primenumbers(int n) 
{
    int a;
    
    for(a = 2; a<= n/2; ++a)
	{
        if( n % a == 0)
        return 0;
    }
    return 1;
}

//Main function 
int main() 

{
    int n1, n2, i,flag ;
    printf("\nEnter two numbers (n1 and n2)");
    printf("\nEnter n1: ");
    scanf("%d",&n1);
    printf("Enter n2: ");
    scanf("%d",&n2);
    printf("Prime numbers between %d and %d are: ",n1 , n2);

    for(i = n1; i <= n2; i++)
    {
	    flag =primenumbers(i);	
	    
        if(flag == 1)
        
        	printf("| %d",i);
    }
    return 0;
}

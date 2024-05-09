// C program to find the sum of n 
// natural numbers using recursion
#include <stdio.h>

// Returns the sum of first n
// natural numbers
int recSum(int n)
{
// Base condition
	if (n <= 1)
		return n;

// Recursive call
	return n + recSum(n - 1);
}

// Driver code
int main()
{
	int n ;
	printf("Enter n : \n");
	scanf("%d",&n);
	printf("Sum = %d ", recSum(n));
	return 0;
}

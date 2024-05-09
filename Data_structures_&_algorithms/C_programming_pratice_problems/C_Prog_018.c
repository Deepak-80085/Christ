// C program to implement the above approach
#include <stdio.h>

// Function to find factorial of given number
 int factorial( int n)
{
	int result = 1, i;

	// loop from 2 to n to get the factorial
	for (i = 1; i <= n; i++) {
		result *= i;
	}

	return result;
}

// Driver code
int main()
{
	int num = 6;
	printf("Factorial of %d is %d", num, factorial(num));
	return 0;
}

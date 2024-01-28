// C program to print a triangle 
#include <stdio.h> 

// Driver code 
int main() 
{ 
	int n = 6; 

	// ith row has i elements 
	int i;
	for ( i = 1; i <= n; i++) { 
	int j;
		for ( j = 1; j <= i; j++) { 
			printf("*"); 
		} 
		printf("\n"); 
	} 
	return 0; 
}

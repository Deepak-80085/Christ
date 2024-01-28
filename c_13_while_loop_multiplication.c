#include<stdio.h>

int main()
{
	int i,n,m;
	printf("Enter the number\n");
 scanf("%d",&n);
	while(i<=10)
	{
		m=i*n;
		printf("%d = %d*%d",m,i,n);
		i++;
		printf("\n");
	}
			

	return 0;
}

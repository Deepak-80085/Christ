//let's try to understand the concept of call by//
//value in c language by the example //

#include<stdio.h>
void change(int num)
{
	printf("Before adding value inside function num=%d \n",num);
	num = num+100;
	printf("After adding value inside function num = %d \n", num);
}

int main()

{
	int x;
	printf("Enter x \n");
	scanf("%d",&x);
	printf("Before function call x=%d \n",x);
	change(x);//passing value in function

	return 0;
}

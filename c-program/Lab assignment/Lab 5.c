#include <stdio.h>
#include<conio.h>
int main(void) 	
{   
	int rn[10];
	float tm[10],com[10],mat[10],eco[10],eng[10],acc[10],cs[10];
	double avg[10];
	int i;
	for(i=0;i<3;i++)
	{
		printf("\n\nEnter student register number...........: ");
		scanf("%d",&rn[i]);
		printf("\nEnter Total marks out of 600............: ");
		scanf("%f",&tm[i]);
		if(tm[i]>600 || tm[i]<0)
		{
			do
			{
			    printf("\nEnter Valid marks");
			    printf("\nEnter Total marks out of 600............: ");
		        scanf("%f",&tm[i]);	
			}while(tm[i]>600 || tm[i]<0);
		}
		
		printf("Enter ACCOUNTANCY marks out of 100......: ");
		scanf("%f",&acc[i]);
		if(acc[i]>100 || acc[i]<0)
		{
			do
			{
			    printf("\nEnter Valid marks");
			    printf("\nEnter ACCOUNTANCY marks out of 100......: ");
		         scanf("%f",&acc[i]);
			}while(acc[i]>100 || acc[i]<0);
		}
		
		printf("Enter ECONOMICS marks out of 100........: ");
		scanf("%f",&eco[i]);
		if(eco[i]>100 || eco[i]<0)
		{
			do
			{
			    printf("\nEnter Valid marks");
			    printf("\nEnter ECONOMICS marks out of 100........: ");
		        scanf("%f",&eco[i]);	
			}while(eco[i]>100 || eco[i]<0);
		}
		
		printf("Enter COMMERCE marks out of 100.........: ");
		scanf("%f",&com[i]);
		if(com[i]>100 || com[i]<0)
		{
			do
			{
			    printf("\nEnter Valid marks");
			    printf("\nEnter COMMERCE marks out of 100.........: ");
		        scanf("%f",&com[i]);	
			}while(com[i]>100 || com[i]<0);
		}
		
		printf("Enter MATHEMATICS marks out of 100......: ");
		scanf("%f",&mat[i]);
		if(mat[i]>100 || mat[i]<0)
		{
			do
			{
			    printf("\nEnter Valid marks");
			    printf("\nEnter MATHEMATICS marks out of 100......: ");
		        scanf("%f",&mat[i]);	
			}while(mat[i]>100 || mat[i]<0);
		}
		
		printf("Enter COMPUTER SCIENCE marks out of 100.: ");
		scanf("%f",&cs[i]);
		if(cs[i]>100 || cs[i]<0)
		{
			do
			{
			    printf("\nEnter Valid marks");
			    printf("\nEnter COMPUTER SCIENCE marks out of 100.: ");
		        scanf("%f",&cs[i]);	
			}while(cs[i]>100 || cs[i]<0);
		}
		
		printf("Enter ENGLISH marks out of 100..........: ");
		scanf("%f",&eng[i]);
		if(eng[i]>100 || eng[i]<0)
		{
			do 
			{
			    printf("\nEnter Valid marks");
			    printf("\nEnter ENGLISH marks out of 100..........: ");
		        scanf("%f",&eng[i]);	
			}while(eng[i]>100 || eng[i]<0);
		}
	}
	
	
	printf("\n\n");
    printf("The Student Details are:\n");
    printf("--------------------------------------	-------------------------\n");
    printf("REG NO        TOTAL_MARKS           AVERAGE\n");
    printf("--------------------------------------------------------------\n");
	 
	for(i=0;i<3;i++)
	{
	avg[i]=((com[i]+mat[i]+eco[i]+eng[i]+acc[i]+cs[i])/600);
	printf("%d\t \t  %f \t \t %lf\n", rn[i], tm[i], avg[i]);
	}
	
}


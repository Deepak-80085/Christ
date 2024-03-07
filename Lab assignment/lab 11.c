#include <stdio.h>

int main()
 {

    int n;
    int* p;

    printf("Enter an Number: ");
    while(scanf("%d", &n) != 1 )
    {
        printf("\nInvalid Entry");
        printf("\nEnter an Number: ");
        while(getchar() != '\n');
    }
    
    p = &n;

    int a, s , m;

    printf("Enter a value to add: ");
    while(scanf("%d", &a) != 1 )
    {
        printf("Invalid Entry");
        printf("\nEnter a value to add: ");
        while(getchar() != '\n'); 
    }

    printf("Enter a value to subtract: ");
    while(scanf("%d", &s) != 1 )
    {
        printf("Invalid Entry");
        printf("\nEnter a value to subtract: ");
        while(getchar() != '\n'); 
    }
    
    printf("Enter a value to check remainder: ");
    while(scanf("%d", &m) != 1 )
    {
        printf("Invalid Entry");
        printf("\nEnter a value to check remainder: ");
        while(getchar() != '\n'); 
    }

    int sum = *p + a;
    int diff = *p - s;
    int mod = *p % m;

    printf("\nOriginal Value: %d\n", *p);
    printf("-----------Addition         : %d + %d = %d\n--------------------", *p, a, sum);
    printf("-----------Subtraction      : %d - %d = %d\n--------------------", *p, s, diff);
    printf("-----------Result after Modulas operation: %d %% %d = %d\n------", *p, m, mod);
    return 0;
}


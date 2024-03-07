#include <stdio.h>
#include <string.h>
int main(void)
{   int Cities = 2;
    int no_days = 4;
    char days[10][100] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    char cities[10][100] = {"Bangalore", "Chennai"};
    char statment[Cities][no_days][10];
    for (int i = 0; i < no_days; i++)
    {
        for (int j = 0; j< Cities;j++)
        {
            char buffer[100];
            printf("What the weather at %s on  %s : ",cities[j], days[i]);
            fgets(statment[j][i], 100, stdin);  
        }
    }
    printf("\n\n|Days\t |City\t  |Weather  |\n");
    
    for (int i = 0; i < no_days; i++)
    {
        for (int j = 0; j < Cities ; j++)
        {
            printf("\n--%s\t %s\t =%s\t 45\n",days[i], cities[j],statment[j][i]);
        }
    }
}

#include <stdio.h>
#include <string.h>


int main() {
    char firstName[50], lastName[50], age[10], address[100], course[50];

    
    printf("Enter First Name: ");
    scanf("%s", firstName);
    printf("Enter Last Name: ");
    scanf("%s", lastName);

    
    if (strlen(firstName) + strlen(lastName) > 12) 
	{
    	do
		{
    	printf("Error: Candidate name has more than 12 characters. Please re-enter.\n");
        printf("Enter First Name: ");
        scanf("%s", firstName);
        printf("Enter Last Name: ");
        scanf("%s", lastName);
		}while(strlen(firstName) + strlen(lastName) > 12);
    }

    printf("Enter Age: ");
    scanf("%s", age);

    printf("Enter Address: ");
    scanf(" %s", address);

    printf("Enter Course Opted(Strictly in lower case): ");
    scanf(" %s", course);

    
    printf("\nCandidate Information:\n");
    printf("Name: %s %s\n", firstName, lastName);
    printf("Age: %s\n", age);
    printf("Address: %s\n", address);
    printf("Course Opted: %s\n", course);

    if (strcmp(course, "bsc") == 0) {
        printf("\nSubjects offered for BSc:\n");
        printf("1. Mathematics\n 2. Eletronics\n 3. English\n 4.Biotechnology\n 5.Computer Science\n 6.Physics");
    } else if (strcmp(course, "bca") == 0) {
        printf("\nSubjects offered for BCA:\n");
        printf("1. Programming languages \n2. Web application Development\n3. Data analysis");
    } else if (strcmp(course, "be") == 0) {
        printf("\nSubjects offered for BE:\n");
        printf("1. Electrical Engineering\n2. Mechanical Engineering\n3. Computer Science\n");
    } else {
        printf("\nSubjects for this course are not available.\n");
	}
    return 0;
}



#include <stdio.h>
#include <stdlib.h>
int i;
int main() {
    // Dynamic memory allocation using malloc
    int *arr1 = (int *)malloc(5 * sizeof(int));
    if (arr1 == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;
    }

    printf("Enter 5 integers for the array:\n");
    for ( i = 0; i < 5; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("You entered: ");
    for ( i = 0; i < 5; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    // Dynamic memory allocation using calloc
    int *arr2 = (int *)calloc(3, sizeof(int));
    if (arr2 == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        free(arr1);
        return 1;
    }

    printf("Enter 3 integers for another array:\n");
    for ( i = 0; i < 3; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("You entered: ");
    for ( i = 0; i < 3; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    // Dynamic memory reallocation using realloc
    arr1 = (int *)realloc(arr1, 8 * sizeof(int));
    if (arr1 == NULL) {
        fprintf(stderr, "Memory reallocation failed.\n");
        free(arr2);
        return 1;
    }

    printf("Enter 3 more integers for the first array:\n");
    for ( i = 5; i < 8; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("You entered: ");
    for ( i = 0; i < 8; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    // Free dynamically allocated memory
    free(arr1);
    free(arr2);

    return 0;
}

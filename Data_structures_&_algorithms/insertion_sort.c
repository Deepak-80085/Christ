#include <stdio.h>
int i,key,j,arr[100],n;
void insertion_sort(int arr[], int n) {
//    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() 
{
	printf("\n------------------------------------------------------\n");
    printf("Enter the element in array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the element a[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    insertion_sort(arr, n);
	printf("\n------------------------------------------------------\n");
    printf("Sorted array: \n");
    for ( i = 0; i < n; i++)
        printf(" | %d ", arr[i]);
    printf("\n");
	printf("\n------------------------------------------------------\n");
    return 0;
}

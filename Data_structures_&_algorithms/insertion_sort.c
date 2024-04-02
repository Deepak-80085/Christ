#include <stdio.h>
int i,key,j,arr[100],n;
void insertionSort(int arr[], int n) {
    int i, key, j;
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

int main() {
    printf("Enter the element in array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the elements: ");
        scanf("%d",&arr[i]);
    }
    insertionSort(arr, n);

    printf("Sorted array: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
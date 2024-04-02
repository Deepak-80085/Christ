#include <stdio.h>
#include <stdlib.h>

int i,j, a[100], n, t;

int min(int a[], int i, int n) {
    int min_value = i;
    for ( j = i + 1; j < n; j++) {
        if (a[j] < a[min_value])
         {
            min_value = j;
        }
    }   
    return min_value;
}
int swap(int t,int a[100])
{
        int temp = a[t];
        a[t] = a[i];
        a[i] = temp;
}
int main() {
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter element a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++) {
        t = min(a, i, n);
        swap(t,a);
    }

    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

}
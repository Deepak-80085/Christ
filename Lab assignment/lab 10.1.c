#include <stdio.h>
void arrange(int *a, int *b, int *c) {
    if (*a > *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*a > *c) {
        int temp = *a;
        *a = *c;
        *c = temp;
    }
    if (*b > *c) {
        int temp = *b;
        *b = *c;
        *c = temp;
    }
}

int main() {
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    arrange(&a, &b, &c);
    printf(" ----------------\t Ascending order: %d , %d , %d\n-----------------", a, b, c);
    return 0;
}

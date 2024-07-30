#include <stdio.h>

int addNumbers(int a, int b);
int subtractNumbers(int a, int b);
int multiplyNumbers(int a, int b);
int divideNumbers(int a, int b);

int main() {
    int n1, n2, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    printf("Choose an operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Sum = %d\n", addNumbers(n1, n2));
            break;
        case 2:
            printf("Difference = %d\n", subtractNumbers(n1, n2));
            break;
        case 3:
            printf("Product = %d\n", multiplyNumbers(n1, n2));
            break;
        case 4:
            if (n2 == 0) {
                printf("Error: Division by zero\n");
            } else {
                printf("Quotient = %d\n", divideNumbers(n1, n2));
            }
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}

int addNumbers(int a, int b) {
    return a + b;
}

int subtractNumbers(int a, int b) {
    return a - b;
}

int multiplyNumbers(int a, int b) {
    return a * b;
}

int divideNumbers(int a, int b) {
    return a / b;
}


#include <stdio.h>

// Function to swap two integers using pointers
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\nBefore swap: a = %d, b = %d\n", a, b);

    swap(&a, &b);  // Pass addresses of a and b

    printf("After swap:  a = %d, b = %d\n", a, b);

    return 0;
}

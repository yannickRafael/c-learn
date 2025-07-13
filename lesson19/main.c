#include <stdio.h>

enum Operation { ADD = 1, SUBTRACT, MULTIPLY, DIVIDE };

int main() {
    enum Operation op;
    float a, b, result = 0;

    printf("Select operation:\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter choice: ");
    scanf("%d", (int*)&op);

    if (op < ADD || op > DIVIDE) {
        printf("Invalid operation!\n");
        return 1;
    }

    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f", &b);

    switch (op) {
        case ADD:
            result = a + b;
            break;
        case SUBTRACT:
            result = a - b;
            break;
        case MULTIPLY:
            result = a * b;
            break;
        case DIVIDE:
            if (b == 0) {
                printf("Cannot divide by zero.\n");
                return 1;
            }
            result = a / b;
            break;
    }

    printf("Result: %.2f\n", result);
    return 0;
}

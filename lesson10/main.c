#include <stdio.h>


double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}


int main() {
    double num1, num2, result;
    char operator;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter the second number: ");
    scanf("%lf", &num2);


    switch (operator) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Cannot divide by zero.\n");
                return 1;
            }
            result = divide(num1, num2);
            break;
        default:
            printf("Invalid operator.\n");
            return 1;
    }

    printf("%.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);

    return 0;
}

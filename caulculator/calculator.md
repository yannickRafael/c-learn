# Calculator in C using `switch`

This is a simple command-line calculator program written in **C**. It performs **basic arithmetic operations** (`+`, `-`, `*`, `/`) based on user input.

---

## Program Features

- Accepts two numbers and an operator from the user
- Performs the selected operation using a `switch` statement
- Prevents division by zero
- Displays the result with two decimal places

---

## Full Code

```c
#include <stdio.h>

int main(){

    char operator = '\0';
    double n1 = 0.0;
    double n2 = 0.0;
    double result = 0.0;

    printf("Enter the first number: ");
    scanf("%lf", &n1);

    printf("Enter operator(+, -, *, /): ");
    scanf(" %c", &operator); // Note the space before %c to consume any leftover newline

    printf("Enter the second number: ");
    scanf("%lf", &n2);

    switch (operator)
    {
        case '+':
            result = n1 + n2;
            break;
        case '-':
            result = n1 - n2;
            break;
        case '*':
            result = n1 * n2;
            break;
        case '/':
            if(n2 == 0){
                printf("You can't divide by zero\n");
                break;
            }
            result = n1 / n2;
            break;
        default:
            printf("Invalid operator\n");
            break;
    }

    printf("%.2lf %c %.2lf = %.2lf\n", n1, operator, n2, result);

    return 0;
}

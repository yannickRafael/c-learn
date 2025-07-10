#include <stdio.h>

int main(){

    char operator = '\0';
    double n1 = 0.0;
    double n2 = 0.0;

    double result = 0.0;

    printf("Enter the first number: ");
    scanf("%lf", &n1);

    printf("Enter operator(+, -, *, /): ");
    scanf(" %c", &operator);

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
        /*if(n2==0){
            
        }*/
        result = n1 / n2;
        break;
    default:
        printf("Invalid option");
        break;
    }

    printf("%.2lf %c %.2lf = %.2lf\n", n1, operator, n2, result);

    return 0;
}
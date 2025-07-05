#include <stdio.h>
#include <math.h>

int main() {
    double num = 9.0;

    printf("Square root of %.2f is %.2f\n", num, sqrt(num));
    printf("2 raised to the power 4 is %.2f\n", pow(2.0, 4.0));
    printf("Ceiling of 2.3 is %.2f\n", ceil(2.3));
    printf("Floor of 2.7 is %.2f\n", floor(2.7));
    printf("Round of 3.6 is %.2f\n", round(3.6));
    printf("Absolute value of -5.5 is %.2f\n", fabs(-5.5));

    return 0;
}
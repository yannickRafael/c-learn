#include <stdio.h>

int main() {
    int number;
    int sum = 0;
    int count = 0;

    do {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &number);

        if (number != 0) {
            sum += number;
            count++;
        }

    } while (number != 0);

    printf("\nYou entered %d numbers.\n", count);
    printf("The total sum is: %d\n", sum);

    return 0;
}

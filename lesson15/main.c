#include <stdio.h>

int main() {
    int numbers[5];
    int sum = 0;
    int max;

    // Input numbers
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    // Initialize max with the first element
    max = numbers[0];

    // Find the maximum value
    for (int i = 1; i < 5; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    // Calculate average
    float average = sum / 5.0;

    // Output
    printf("\nMaximum = %d\n", max);
    printf("Average = %.2f\n", average);

    return 0;
}

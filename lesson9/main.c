#include <stdio.h>

int main() {
    int temperature;

    printf("Enter the current temperature (°C): ");
    scanf("%d", &temperature);

    if (temperature < 10 || temperature > 30) {
        printf("Warning: Extreme temperature detected!\n");
    } else {
        printf("Temperature is within the safe range.\n");
    }

    return 0;
}

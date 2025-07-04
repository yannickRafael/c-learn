#include <stdio.h>

int main() {
    char name[100];
    int age;
    float height;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height in meters (e.g., 1.75): ");
    scanf("%f", &height);

    printf("\n--- User Information ---\n");
    printf("Name  : %s", name); 
    printf("Age   : %d years\n", age);
    printf("Height: %.2f meters\n", height);

    return 0;
}

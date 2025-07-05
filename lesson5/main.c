#include <stdio.h>
#include <string.h>

int main() {
    char name1[100];
    int age1;
    float height;

    printf("Enter your full name: ");
    fgets(name1, sizeof(name1), stdin);

    printf("Enter your age: ");
    scanf("%d", &age1);

    printf("Enter your height in meters (e.g., 1.75): ");
    scanf("%f", &height);

    printf("\n--- User Information ---\n");
    printf("Name  : %s", name1); 
    printf("Age   : %d years\n", age1);
    printf("Height: %.2f meters\n", height);

    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[30] = "";

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your GPA: ");
    scanf("%f", &gpa);

    printf("Enter your grade: ");
    scanf(" %c", &grade); 

    getchar();

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name)-1] = '\0';

    printf("name is %s\n", name);
    printf("age is %d\n", age);
    printf("gpa is %f\n", gpa);
    printf("grade is %c\n", grade);

    return 0;
}

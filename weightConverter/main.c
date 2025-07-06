#include <stdio.h>

int main(){

    int choice = 0;
    float pounds = 0.0f;
    float kilograms = 0.0f;

    printf("Weight converter calculator\n");
    printf("1. kilograms to pounds\n");
    printf("2. pounds to kilograms\n");
    printf("Insert your choice (1 ou 2): ");
    scanf("%d", &choice);

    if(choice == 1){
        printf("Insert the weight in kilograms: ");
        scanf("%f", &kilograms);
        pounds = kilograms * 2.20462;
        printf("%.2f kilograms equals to %.2f pounds\n", kilograms, pounds);
    }else if(choice == 2){
        // pounds to kilograms
        printf("Insert the weight in pounds: ");
        scanf("%f", &pounds);
        kilograms = pounds / 2,20462;
        printf("%.2f pounds equals to %.2f kilograms\n", pounds, kilograms);
    }else{
        printf("Invalid option!\n");
    }

    return 0;
}
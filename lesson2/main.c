#include <stdio.h>
#include <stdbool.h>

int main(){

    // Integer
    int age = 25;
    printf("My age is %d", age);

    int bornYear = 1998;
    int currentYear = 2025;
    printf("\nI was born in %d and the current year is %d\n", bornYear, currentYear);
    

    //Float
    float height = 182.5;
    printf("my height is %f centimeters", height);

    float weight = 75.000;
    printf("\nmy weight is %.3f kilograms\n", weight);

    float temperature = -101.67;
    printf("It's freezing here. It's %f degrees celcius\n", temperature);

    float doubletemperature = -101.67;
    printf("It's freezing here. It's %.15lf degrees celcius\n", doubletemperature);

    //Char
    char grade = 'A';
    printf("My grade is %c\n", grade);

    char initial = 'J';
    printf("My name starts with %c\n", initial); 

    // String
    char name[] = "yannickRafael";
    printf("Hello, my name is %s. Yeah, %s\n", name, name);

    //Bool
    bool isOnline = true;
    printf("%d", isOnline);

    return 0;
}
#include <stdio.h>

int main() {
    int day = 0;
    printf("Insert a number between 1-5: ");
    scanf("%d", &day);


    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        default:
            printf("Weekend!\n");
    }

    return 0;
}
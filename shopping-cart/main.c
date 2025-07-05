#include <stdio.h>
#include <string.h>

int main(){

    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total  = 0.0f;

    printf("What item would you like to buy: ");
    //scanf("%s", item);
    fgets(item, sizeof(item), stdin);
    item[strlen(item)-1] = '\0';

    printf("What is the price of each %s: ", item);
    scanf("%f", &price);

    printf("How name %s's would you like to buy: ", item);
    scanf("%d", &quantity);

    total = quantity * price;
    printf("The total to pay for %d %s's is: %c%.2f\n", quantity, item, currency, total);

    return 0;

}
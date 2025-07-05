# C Shopping Cart Program – Explained

This simple **C program** simulates a **basic shopping cart**, where the user can input:

1. The item they want to buy  
2. The price of the item  
3. The quantity they wish to purchase

The program then calculates and displays the **total cost**.

---

## Code Overview

```c
#include <stdio.h>
#include <string.h>

int main(){

    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total  = 0.0f;

    printf("What item would you like to buy: ");
    fgets(item, sizeof(item), stdin);       
    item[strlen(item)-1] = '\0';   

    printf("What is the price of each %s: ", item);
    scanf("%f", &price);

    printf("How many %s's would you like to buy: ", item);
    scanf("%d", &quantity);

    total = quantity * price;
    printf("The total to pay for %d %s's is: %c%.2f\n", quantity, item, currency, total);

    return 0;
}

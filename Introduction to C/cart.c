#include <stdio.h>

int main() {
    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("Enter item name: ");
    fgets(item, sizeof(item), stdin);
    printf("Enter item price: ");
    scanf("%f", &price);
    printf("Enter item quantity: ");
    scanf("%d", &quantity);
    total = price * quantity;
    printf("Item: %s\n", item);
    printf("Total cost: %.2f %c \n", total,currency); // .2 - for two digits after the decimal.
    return 0;
}

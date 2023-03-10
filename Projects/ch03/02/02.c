#include <stdio.h>

int main(void)
{
    int itemNumber, day, month, year;
    float unitPrice;

    // Prompt the user to enter the item number
    printf("Enter item number: ");
    scanf("%d", &itemNumber);

    // Prompt the user to enter the unit price 
    printf("Enter unit price: ");
    scanf("%f", &unitPrice);

    // Prompt the user to enter the purchase date
    printf("Enter purchase date (mm/dd/yyyy) : ");
    scanf("%d/%d/%d", &month, &day, &year);

    // Right format displayed
    printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");
    printf("%d\t\t$%8.2f\t%.2d/%.2d/%.4d\n", itemNumber, unitPrice, month, day, year);
}
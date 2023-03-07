#include <stdio.h>

int main(void)
{
    // Prompt the user to enter a dollar amount
    int amount;
    printf("Enter a dollar amount: ");
    scanf("%i", &amount);

    // Print how many 20$ bills
    int twenty;
    twenty = amount / 20;
    amount = amount - (twenty * 20);
    printf("$20 bills: %i\n",twenty);

    // Print how many 10$ bills
    int ten;
    ten = amount / 10;
    amount = amount - (ten * 10);
    printf("$10 bills: %i\n", ten);

    // Print how many 5$ bills
    int five;
    five = amount / 5;
    amount = amount - (five * 5);
    printf("$5 bills: %i\n", five);

    // Print how many 1$ bills
    int one;
    one = amount / 5;
    amount = amount - (one * 1);
    printf("$1 bills: %i\n", one);
}
#include <stdio.h>	

#define TAX_FORMULA 5 / 100

int main(void)
{
    float amount; 
    // Prompt the user to enter the amount
    printf("Enter an amount: ");
    scanf("%f", &amount);

    // Calculate the amount with tax added
    float net;
    net = amount + (amount * TAX_FORMULA);

    printf("With tax added: %.2f\n", net);
}
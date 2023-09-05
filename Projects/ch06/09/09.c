#include <stdio.h>

int main(void)
{
    int npayments;
    // Prompt the user to enter the loan amount
    float amount;
    printf("Enter amount of loan: ");
    scanf("%f", &amount);

    // Prompt the user to enter the interest rate
    float rate;
    printf("Enter interest rate: ");
    scanf("%f", &rate);

    printf("enter the number of payments: ");
    scanf("%d", &npayments);

    // Prompt the user to enter the monthly payment
    float payment;
    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    // Rate formula
    rate = (rate / 100) / 12;

    for (int i = 0; i < npayments; i++)
    {
        amount = (amount * rate) + (amount - payment);
        printf("Balance remaining after payment: %.2f\n", amount);
    }
}
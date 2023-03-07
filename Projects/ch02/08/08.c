#include <stdio.h>

int main(void)
{
    // Prompt the user to enter the loan amount
    float amount;
    printf("Enter amount of loan: ");
    scanf("%f", &amount);

    // Prompt the user to enter the interest rate
    float rate;
    printf("Enter interest rate: ");
    scanf("%f", &rate);

    // Prompt the user to enter the monthly payment
    float payment;
    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    // Rate formula
    rate = (rate / 100) / 12;

    // Print the remaining balance after the first payment
    float balanceOne;
    balanceOne = (amount * rate) + (amount - payment);
    printf("Balance remaining after first payment: %.2f\n", balanceOne);

    // Print the remaining balance after the second payment
    float balanceTwo;
    balanceTwo = (balanceOne * rate) + (balanceOne - payment);
    printf("Balance remaining after second payment: %.2f\n", balanceTwo);

    // Print the remaining balance after the third payment
    float balanceThree;
    balanceThree = (balanceTwo * rate) + (balanceTwo - payment);
    printf("Balance remaining after third payment: %.2f\n", balanceThree);

}
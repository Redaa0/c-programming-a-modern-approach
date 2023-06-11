#include <stdio.h>

int main(void)
{
    float income, tax_due;

    // Prompt the user to enter the income
    printf("Enter your income: ");
    scanf("%f", &income);

    // Calculate the tax due
    if (income <= 750.00f)
        tax_due = income / 100;
    else if (income <= 2250.00f)
        tax_due = 7.50f + ((income - 750.00f) * 0.02f);
    else if (income <= 3750.00f)
        tax_due = 37.50f + ((income -2250.00f) * 0.03f);
    else if (income <= 5250.00f)
        tax_due = 82.50f + ((income - 3750.00f) * 0.04f);
    else if (income <= 7000.00f)
        tax_due = 142.50f + ((income - 5250.00f) * 0.05f);
    else if (income > 7000.00f)
        tax_due = 230.00f + ((income - 7000.00f) * 0.06f);
    
    // Display the proper tax due
    printf("Your tax due is: %.2f\n", tax_due);
}
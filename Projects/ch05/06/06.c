#include <stdio.h>

int main(void)
{
    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, first_sum, second_sum, total, last_digit;

    // Prompt the user to enter the UPC
    printf("Enter UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11, &d12);

    // Formulas
    first_sum = d1 + d3 + d5 + d7 + d9 + d11;
    second_sum = d2 + d4 + d6 + d8 + d10;
    total = 3 * first_sum + second_sum;
    last_digit = 9 - ((total - 1) % 10);

    // Display if it's valid or not valid
    if (d12 == last_digit)
        printf("VALID\n");
    else
        printf("NOT VALID\n");

    return (0);
}
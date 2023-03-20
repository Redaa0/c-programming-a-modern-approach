#include <stdio.h>

int main(void)
{
    // Prompt the user to enter the number
    int n, lastDigit, beforeLast;
    printf("Enter a two-digit number: ");
    scanf("%d", &n);

    lastDigit = n % 10;
    beforeLast = n / 10;

    // Print the number reversed
    printf("The reversal is: %d%d\n", lastDigit, beforeLast);
}
#include <stdio.h>

int main(void)
{
    // Prompt the user to enter the two fractions
    int num1, denom1, num2, denom2, result_num, result_denom;
    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);
    
    result_num = num1 * denom2 + num2 * denom1;

    result_denom = denom1 * denom2;

    // Print the result
    printf("The sum is %d/%d\n", result_num, result_denom);
}
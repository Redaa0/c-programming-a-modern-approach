#include <stdio.h>

int main(void)
{
    // Prompt the user to enter a value for x
    int x;
    printf("Enter a value for x: ");
    scanf("%i", &x);

    int result;
    result = (3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x) - (x * x) + (7 * x) - 6;

    printf("the result is: %i\n", result);
}
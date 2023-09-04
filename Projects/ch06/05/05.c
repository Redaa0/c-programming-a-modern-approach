#include <stdio.h>

int main(void)
{
    int number = 0, i = 0;

    printf("Enter the number: ");
    scanf("%d", &number);

    printf("The reversal is: ");
    do {
        printf("%d", number % 10);
        number /= 10;
    } while (number > 0);
    return (0);
}
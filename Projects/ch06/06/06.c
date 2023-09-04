#include <stdio.h>

int main(void)
{
    int number = 0, i = 0, square = 0;

    printf("Enter number: ");
    scanf("%d", &number);

    for (i = 2; (i * i) <= number; i += 2)
    {
        printf("%d\n", i * i);
    }
    return (0);
}
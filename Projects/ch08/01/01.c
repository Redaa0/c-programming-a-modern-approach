#include <stdio.h>

int main(void)
{
    int digit_check[10] = {0}, digit = 0;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        digit_check[digit]++;
        n /= 10;
    }

    printf("Repeated digit(s): ");

    for (n = 0; n < 10; n++)
    {
        if (digit_check[n] > 1)
            printf("%ld ", n);
    }
}
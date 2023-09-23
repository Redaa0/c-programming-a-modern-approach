#include <stdio.h>

int main(void)
{
    int n;
    long i;

    printf("this program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        printf("%10ld%10ld\n", i, i * i);

    return (0);
}

/*
 * The smallest int value of n that causes failure is: 46341.
 * The smallest short int value of n that causes failure is: 182
 * The smallest long int value of n that causes failure is: 46341
 * 
 * I can conclude that, in my machine:
 *      'short int' uses 16 bits.
 *      'int' uses 32 bits.
 *      'long int' actually can vary from 32 to 64 bits depending from the plateform and the compiler.
*/
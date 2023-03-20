#include <stdio.h>

int main(void)
{
    // Prompt the user to enter a number
    int n, n1, n2, n3, n4, n5;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &n);

    n5 = n % 8;
    n4 = (n / 8) % 8;
    n3 = (n / 64) % 8;
    n2 = (n / 512) % 8;
    n1 = (n / 4096) % 8;

    // Display the number converted to octal
    printf("In octal, your number is: %d%d%d%d%d\n", n1, n2, n3, n4, n5);
    return (0);
}
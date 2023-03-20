#include <stdio.h>

int main(void)
{
    // Prompt the user to enter the number
    int n, n3, n2, n1;
    printf("Enter a three-digit number: ");
    scanf("%d", &n);

    n3 = n % 10;
    n2 = (n / 10) % 10;
    n1 = n / 100;
    
    // Print the number reversed
    printf("The reversal is: %d%d%d\n", n3, n2, n1);
    return (0);   
}
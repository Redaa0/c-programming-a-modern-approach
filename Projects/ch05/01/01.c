#include <stdio.h>

int main(void)
{
    int number;

    // Prompt the user to enter the number and store it in number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Print the right number of digits
    if ((number >= -9 && number <= 9))
        printf("The number %d has 1 digit\n", number);
    else if ((number >= 10 && number <= 99) || (number <= -10 && number >= -99))
        printf("The number %d has 2 digits\n", number);
    else if (number >= 100 && number <= 999 || (number <= -100 && number >= -999))
        printf("The number %d has 3 digits\n", number);
    else if (number >= 1000 && number <= 9999 || (number <= -1000 && number >= -9999))
        printf("The number %d has 4 digits\n", number);
    
    return (0);
}
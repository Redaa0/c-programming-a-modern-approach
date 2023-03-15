#include <stdio.h>

int main(void)
{
    // Prompt the user to enter the phone number
    int phone_number, first, second, third;
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &first, &second, &third);

    printf("You entered %.3d.%.3d.%.4d\n", first, second, third);
}
#include <stdio.h>

int main(void)
{
    int speed;

    // Prompt the user to enter the wind speed
    printf("Enter the wind speed in knots: ");
    scanf("%d", &speed);

    // Display the proper description
    if (speed < 1)
        printf("Calm\n");
    else if (speed >= 1 && speed <= 3)
        printf("Light air\n");
    else if (speed >= 4 && speed <= 27)
        printf("Breeze\n");
    else if (speed >= 28 && speed <= 47)
        printf("Gale\n");
    else if (speed >= 48 && speed <= 63)
        printf("Storm\n");
    else if (speed > 63)
        printf("Hurricane\n");
    
    return (0);
}
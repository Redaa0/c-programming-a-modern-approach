#include <stdio.h>

#define PI_VALUE 3.14159
#define FRACTION (4.0f / 3.0f)

int main(void)
{
    int radius = 0;
    // Prompt the user for the radius
    printf("Enter the radius of the sphere: ");
    scanf("%i", &radius);

    float volume;
    volume = FRACTION * PI_VALUE * (radius * radius * radius);

    printf("The sphere volume is: %.2f cubic meters\n", volume);
}
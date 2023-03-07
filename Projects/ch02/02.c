#include <stdio.h>

#define SPHERE_RADIUS 10
#define PI_VALUE 3.14159
#define FRACTION (4.0f / 3.0f)

int main(void)
{
    float volume;
    volume = FRACTION * PI_VALUE * (SPHERE_RADIUS * SPHERE_RADIUS * SPHERE_RADIUS);
    printf("The sphere volume is: %.2f cubic meters\n", volume);
}
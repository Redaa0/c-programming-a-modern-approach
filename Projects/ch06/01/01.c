#include <stdio.h>

int main(void)
{
    float number = 0.0f, dup = 0.0f, biggest_number = 0.0f;

    while (1)
    {
        printf("Enter a number: ");
        scanf("%f", &number);
        
        if (number > 0)
        {
            if (number > dup)
                biggest_number = number;
            else
                biggest_number = dup;
        }
        else
        {
            printf("The largest number entered was %.3f", biggest_number);
            return (0);
        }
        dup = number;
    }
}
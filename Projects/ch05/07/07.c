#include <stdio.h>

int main(void)
{
    int first, second, third, fourth, largest, smallest;

    // Prompt the user to enter the four integers
    printf("Enter four integers: ");
    scanf("%2d %2d %2d %2d", &first, &second, &third, &fourth);

    // Checks to store the largest and smallest int
    
    second > first ? (largest = second, smallest = first) : (largest = first, smallest = second);

    if (largest < third)
        {
            largest = third;
        }
        else if (smallest > third)
        {
            smallest = third;
        }

    if (largest < fourth)
        {
            largest = fourth;
        }
        else if (smallest > fourth)
        {
            smallest = fourth;
        }

    // Display the largest and smallest int
    printf("Largest: %2d\n"
           "Smallest: %2d\n",    
           largest, smallest);
    
    return (0);
}
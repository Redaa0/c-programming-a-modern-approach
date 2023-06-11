#include <stdio.h>

int main(void)
{
    int first, second, third, fourth, largest, smallest;

    printf("Enter four integers: ");
    scanf("%2d %2d %2d %2d", &first, &second, &third, &fourth);

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

    printf("Largest: %2d\n"
           "Smallest: %2d\n",    
           largest, smallest);
    
    return (0);
}
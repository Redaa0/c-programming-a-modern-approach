#include <stdio.h>

int main(void)
{
    int m1, d1, y1, m2, d2, y2;

    // Prompt the user to enter the dates
    printf("Enter first date (mm/dd/yy) : ");
    scanf("%d/%d/%d", &m1, &d1, &y1);

    printf("Enter second date (mm/dd/yy) : ");
    scanf("%d/%d/%d", &m2, &d2, &y2);

    // Display the earlier date
    if (y1 > y2)
    {
        printf("%d/%d/%d is earlier than %d/%d/%d\n", m2, d2, y2, m1, d1, y1);
    }
        else if (y1 < y2)
        {
            printf("%d/%d/%d is earlier than %d/%d/%d\n", m1, d1, y1, m2, d2, y2);
        }
    
    else if (y1 == y2)
        if (m1 > m2)
        {
            printf("%d/%d/%d is earlier than %d/%d/%d\n", m2, d2, y2, m1, d1, y1);
        }
        else if (m1 < m2)
            printf("%d/%d/%d is earlier than %d/%d/%d\n", m1, d1, y1, m2, d2, y2);

    else if (m1 == m2)
            if (d1 > d2)
        {
            printf("%d/%d/%d is earlier than %d/%d/%d\n", m2, d2, y2, m1, d1, y1);
        }
        else if (d1 < d2)
            printf("%d/%d/%d is earlier than %d/%d/%d\n", m1, d1, y1, m2, d2, y2);
    
    return (0);
}
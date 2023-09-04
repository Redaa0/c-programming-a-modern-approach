#include <stdio.h>

int main(void)
{
    int n1 = 0, n2 = 0, i = 0, bigger_number = 0, smaller_number = 0;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    if (n1 == 0)
    {
        printf("Greatest common divisor: %d", n2);
        return (0);
    }
    else if (n2 == 0)
    {
        printf("Greatest common divisor: %d", n1);
    }


    if (n1 > n2)
    {
        bigger_number = n1;
        smaller_number = n2;
    }
    else
    {
        bigger_number = n2;
        smaller_number = n1;
    }

    for (i = smaller_number; i > 0; i--)
    {
        if ((n1 % i == 0) && (n2 % i == 0))
        {
            printf("Greatest common divisor: %d", i);
            break;
        }
        i--;
    }
    return (0);
}
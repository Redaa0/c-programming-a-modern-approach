#include <stdio.h>

int main(void)
{
    int i, n, dup;

    printf("this program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    
    getchar();

    dup = 1;
    for (i = 1; i <= n; i++)
    {
        if (dup == 25)
        {
            printf("Press Enter to continue...\n");
            while (getchar() != 10)
            {

            }
            dup = 1;
        }
        printf("%10d%10d\n", i, i * i);
        dup++;
    }

    return (0);
}
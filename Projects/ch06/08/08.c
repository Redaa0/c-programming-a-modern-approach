#include <stdio.h>

int main(void) {

    int n = 0, day = 0, start = 0, i = 0;

    printf("Enter number of days in month: ");
    scanf("%d", &n);

    printf("Enter starting day of the week (1=Mon, 7=Sun): ");
    scanf("%d", &start);

    for (i = 1, day = 1; i <= n + start - 1; i++) {
        if (i < start)
            printf("   ");
        else
            printf("%3d", day++);
        if (i % 7 == 0)
            printf("\n");
    }

    printf("\n");
    return (0);
}
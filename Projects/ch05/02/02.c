#include <stdio.h>

int main(void)
{
    int hour, minute;

    // Prompt the user to enter the 24-hour time
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    // Print the time in 12-hour format
    if (hour > 0 && hour <= 11)
        printf("Equivalent 12-hour time: %.1d:%.2d AM\n", hour, minute);
        else if (hour == 0)
        {
            printf("Equivalent 12-hour time: 12:%.2d AM\n", minute);
        }
    else if(hour > 12 && hour <= 23)
        printf("Equivalent 12-hour time: %.1d:%.2d PM\n", hour - 12, minute);
        else if (hour == 12)
            printf("Equivalent 12-hour time: 12:%.2d PM\n", minute);

    return (0);
}
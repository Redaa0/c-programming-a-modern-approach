#include <stdio.h>

int main(void)
{
    // Prompt the user to enter the date
    int month, day, year;
    printf("Enter a date (mm/dd/yy) : ");
    scanf("%d/%d/%d", &month, &day, &year);

    // Print the date with the new format
    printf("You entered the date %d%.2d%.2d\n", year, month, day);
    return 0;
}
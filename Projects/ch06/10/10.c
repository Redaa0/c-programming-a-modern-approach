#include <stdio.h>
#include <string.h>

int main(void)
{
    int date1[3], date2[3], earlier_date[3];

    // Prompt the user for the first date
    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &date1[0], &date1[1], &date1[2]);

    // Prompt the user for the second date
    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &date2[0], &date2[1], &date2[2]);

    // Find the earlier date between the two
    if (date1[2] > date2[2])
        memcpy(earlier_date, date2, sizeof(date2));
    else if (date1[2] < date2[2])
        memcpy(earlier_date, date1, sizeof(date1));
    else if (date1[2] == date2[2])
    {
        if (date1[0] > date2[0])
            memcpy(earlier_date, date2, sizeof(date2));
        else if (date1[0] < date2[0])
            memcpy(earlier_date, date1, sizeof(date1));
        else if (date1[0] == date2[0])
        {
            if (date1[1] > date2[1])
                memcpy(earlier_date, date2, sizeof(date2));
            else if (date1[1] < date2[1])
                memcpy(earlier_date, date1, sizeof(date1));
        }
    }

    // Loop prompt user for date + compare to find the earlier date
    while (1)
    {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &date1[0], &date1[1], &date1[2]);
        if (date1[0] != 0 && date1[1] != 0 && date1[2] != 0)
        {
            if (date1[2] < earlier_date[2])
                memcpy(earlier_date, date1, sizeof(date1));
            else if (date1[2] == earlier_date[2])
            {
                if (date1[0] < earlier_date[0])
                    memcpy(earlier_date, date1, sizeof(date1));
                else if (date1[0] == date2[0])
                {
                    if (date1[1] < earlier_date[1])
                        memcpy(earlier_date, date1, sizeof(date1));
                }
            }
        }
        else
            break;
    }

    // display the earlier date
    printf("%d/%d/%02d is the earliest date", earlier_date[0], earlier_date[1], earlier_date[2]);
}
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int hour, minute, converted_time, closest_time,
    f1 = (8 * 60) + 0,
    f2 = (9 * 60) + 43,
    f3 = (11 * 60) + 19,
    f4 = (12 * 60) + 47,
    f5 = (14 * 60) + 0,
    f6 = (15 * 60) + 45,
    f7 = (19 * 60) + 0,
    f8 = (21 * 60) + 45;

    // Prompt the user to enter the time
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    converted_time = (hour * 60) + minute;

    // Checks to determine the closest time
    closest_time = f1;
    if (abs(converted_time - f2) < abs(converted_time - closest_time))
        closest_time = f2;
    if (abs(converted_time - f3) < abs(converted_time - closest_time))
        closest_time = f3;
    if (abs(converted_time - f4) < abs(converted_time - closest_time))
        closest_time = f4;
    if (abs(converted_time - f5) < abs(converted_time - closest_time))
        closest_time = f5;
    if (abs(converted_time - f6) < abs(converted_time - closest_time))
        closest_time = f6;
    if (abs(converted_time - f7) < abs(converted_time - closest_time))
        closest_time = f7;
    if (abs(converted_time - f8) < abs(converted_time - closest_time))
        closest_time = f8;

    // Print the closest departure time
    printf("Closest departure time is %02d:%02d", closest_time / 60, closest_time % 60);

    // Determine and print the arrival time based on the closest departure time
    int arrival_hour, arrival_minute;
    if (closest_time <= f1)
    {
        arrival_hour = 10;
        arrival_minute = 16;
    }
    else if (closest_time <= f2)
    {
        arrival_hour = 11;
        arrival_minute = 52;
    }
    else if (closest_time <= f3)
    {
        arrival_hour = 13;
        arrival_minute = 31;
    }
    else if (closest_time <= f4)
    {
        arrival_hour = 15;
        arrival_minute = 0;
    }
    else if (closest_time <= f5)
    {
        arrival_hour = 16;
        arrival_minute = 8;
    }
    else if (closest_time <= f6)
    {
        arrival_hour = 17;
        arrival_minute = 55;
    }
    else if (closest_time <= f7)
    {
        arrival_hour = 21;
        arrival_minute = 20;
    }
    else
    {
        arrival_hour = 23;
        arrival_minute = 58;
    }

    printf(", arriving at %02d:%02d.\n", arrival_hour, arrival_minute);

    return 0;
}

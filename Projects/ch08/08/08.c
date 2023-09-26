#include <stdio.h>

int main(void)
{
    int i, j, student[5][5], total[5] = {0}, high[5] = {0}, low[5] = {1000};

    // Get the quiz grades for every student
    for (i = 0; i < 5; i++)
    {
        printf("Enter quiz grades student %d: ", i + 1);
        for (j = 0; j < 5; j++)
            scanf("%d", &student[i][j]);
    }

    // Calculate the total sum of the grades and its average
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
            total[i] += student[i][j];
    }

    // Find the high and low
    for (i = 0; i < 5; i++)
    {
        low[i] = 100;
        for (j = 0; j < 5; j++)
        {
            if (student[i][j] > high[i])
                high[i] = student[i][j];
            if (student[i][j] < low[i])
                low[i] = student[i][j];
        }
    }

    for (i = 0; i < 5; i++)
        printf("Student %d -> Total: %d. Average: %d. High: %d. Low:%d \n", i + 1, total[i], total[i] / 5, high[i], low[i]);

    printf("\n");
}
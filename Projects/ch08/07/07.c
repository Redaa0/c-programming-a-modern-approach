#include <stdio.h>

#define rows 5
#define columns 5

int main(void)
{
    int row = 0, column = 0;
    long long array[rows][columns], row_sum[5] = {0}, column_sum[5] = {0};

    for (row = 0; row < rows; row++)
    {
        printf("Enter row %d: ", row + 1);
        for (column = 0; column < columns; column++)
        {
            scanf("%lld", &array[row][column]);
            row_sum[row] += array[row][column];
        }
    }

    for (row = 0; row < rows; row++)
    {
        for (column = 0; column < columns; column++)
        {
            column_sum[row] += array[column][row];
        }
    }

    printf("Row totals: %lld, %lld, %lld, %lld, %lld\n", row_sum[0], row_sum[1], row_sum[2], row_sum[3], row_sum[4]);
    printf("Column totals: %lld, %lld, %lld, %lld, %lld\n", column_sum[0], column_sum[1], column_sum[2], column_sum[3], column_sum[4]);
}

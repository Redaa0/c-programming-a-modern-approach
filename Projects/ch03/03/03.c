#include <stdio.h>

int main(void)
{
    // Prompt the user to enter the ISBN and store data
    int gsi, group_id, publisher_code, item_number, check_digit;
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gsi, &group_id, &publisher_code, &item_number, &check_digit);

    // Print the ISBN groups 
    printf("GSI prefix: %d\n"
            "Group identifier: %d\n"
            "Publisher code: %d\n"
            "Item number: %d\n"
            "Check digit: %d\n",
            gsi, group_id, publisher_code, item_number, check_digit);
}
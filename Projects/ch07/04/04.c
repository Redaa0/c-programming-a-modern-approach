#include <stdio.h>

int main(void)
{
    int i;
    char number[100];

    printf("Enter a phone number: ");
    scanf("%s", number);

    for (i = 0; number[i] != '\0'; i++)
    {
        if (number[i] >= 65 && number[i] <= 67)
            number[i] = 50;
        else if (number[i] >= 68 && number[i] <= 70)
            number[i] = 51;
        else if (number[i] >= 71 && number[i] <= 73)
            number[i] = 52;
        else if (number[i] >= 74 && number[i] <= 76)
            number[i] = 53;
        else if (number[i] >= 77 && number[i] <= 79)
            number[i] = 54;
        else if (number[i] >= 80 && number[i] <= 82)
            number[i] = 55;
        else if (number[i] >= 83 && number[i] <= 85)
            number[i] = 56;
        else if (number[i] >= 86 && number[i] <= 88)
            number[i] = 57;
        
        printf("%c", number[i]);
    }
    printf("\n");
}
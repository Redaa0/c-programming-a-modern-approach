#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int i, j, value = 0, sum = 0;
    char word[100];

    printf("Enter a word: ");
    scanf("%s", word);

    for (j = 0; word[j] != '\0'; j++)
    {
        if (word[j] >= 'a' && word[j] <= 'z')
            word[j] = toupper(word[j]);
    }

    for (i = 0; word[i] != '\0'; i++)
    {
        if (word[i] == 'A' || word[i] == 'E' ||
            word[i] == 'I' || word[i] == 'L' ||
            word[i] == 'N' || word[i] == 'O' ||
            word[i] == 'R' || word[i] == 'S' ||
            word[i] == 'T' || word[i] == 'U') {
            value = 1;
        }

        else if (word[i] == 'D' || word[i] == 'G')
            value = 2;
        
        else if (word[i] == 'B' || word[i] == 'C' ||
                word[i] == 'M' || word[i] == 'P') {
                value = 3;
                }

        else if (word[i] == 'F' || word[i] == 'H' ||
                word[i] == 'V' || word[i] == 'W' || word[i] == 'Y') {
                value = 4;
                }
        
        else if (word[i] == 'K')
            value = 5;

        else if (word[i] == 'J' || word[i] == 'X')
            value = 8;
        
        else if (word[i] == 'Q' || word[i] == 'Z')
            value = 12;

        sum += value;
    }

    printf("Scrabble value: %d\n", sum);
}
#include <stdio.h>
#include <ctype.h>

#define SIZE (int) (sizeof(array) / sizeof(array[0]))

int main(void)
{
    int i;
    char array[1000];

    printf("Enter a message: ");

    for (i = 0; (i < SIZE - 1) && ((array[i] = getchar()) != '\n'); i++)
    {
        array[i] = toupper(array[i]);
        if (array[i] == 'A')
            array[i] = '4';
        else if (array[i] == 'B')
            array[i] = '8';
        else if (array[i] == 'E')
            array[i] = '3';
        else if (array[i] == 'I')
            array[i] = '1';
        else if (array[i] == 'O')
            array[i] = '0';
        else if (array[i] == 'S')
            array[i] = '5';
    }
    array[i] = '\0';
    printf("In B1FF-speak: %s!!!!!!!!!!\n", array);
}
#include <stdio.h>

int main(void)
{
    int grade;

    // Prompt user to enter grade
    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    // Handle error
    if (grade < 0 || grade > 100)
        printf("Enter valid grade\n");    

    // Cases to obtain proper grade
    switch(grade / 10)
    {
    case 9: case 10: 
            printf("A\n");
            break;
    case 8: printf("B\n");
            break;
    case 7: printf("C\n");
            break;
    case 6: printf("D\n");
            break;
    case 5: case 4: case 3: case 2: case 1: case 0: 
            printf("F\n");
            break;
    }

    return (0);
}
/*
Implement simple star and number patterns.
*/

#include <stdio.h>

int main() 
{
    int i, j;

    printf("Star Pattern:\n");
    for (i = 1; i <= 5; i++) 
    {
        for (j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }

    printf("\nNumber Pattern:\n");
    for (i = 1; i <= 5; i++) 
    {
        for (j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }

    return 0;
}
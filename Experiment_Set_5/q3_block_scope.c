/*
Declare variables within different code blocks ({}) and test their accessibility 
within and outside those blocks to understand variable scope.
*/

#include <stdio.h>

int main() 
{
    int x = 10;

    printf("Outside block: x = %d\n", x);

    {
        int y = 20;
        printf("Inside block: x = %d\n", x);
        printf("Inside block: y = %d\n", y);
    }

    printf("Outside block: y is NOT accessible here.\n");

    return 0;
}
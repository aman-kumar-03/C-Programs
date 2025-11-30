/*
Write a function that accepts pointers as parameters.
Pass variables by reference using pointers and modify their values.
*/

#include <stdio.h>

void changeValue(int *x) 
{
    *x = *x + 10;
}

int main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Before function call: %d\n", num);

    changeValue(&num);

    printf("After function call: %d\n", num);

    return 0;
}
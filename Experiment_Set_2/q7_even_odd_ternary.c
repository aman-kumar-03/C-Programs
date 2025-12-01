/*
Check if a number is even or odd using the ternary operator.
*/

#include <stdio.h>

int main() 
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    (n % 2 == 0) ? printf("Even\n") : printf("Odd\n");

    return 0;
}
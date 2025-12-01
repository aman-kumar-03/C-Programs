/*
Determine and output whether a number N is even or odd.
*/

#include <stdio.h>

int main() 
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");

    return 0;
}
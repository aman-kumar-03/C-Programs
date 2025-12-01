/*
Calculate the quotient and remainder of two given numbers.
*/

#include <stdio.h>

int main() 
{
    int a, b;
    printf("Enter dividend and divisor: ");
    scanf("%d %d", &a, &b);

    printf("Quotient = %d\n", a / b);
    printf("Remainder = %d\n", a % b);

    return 0;
}
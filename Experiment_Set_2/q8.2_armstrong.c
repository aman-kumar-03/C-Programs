/*
Check whether a number is Armstrong or not.
*/

#include <stdio.h>

int main() 
{
    int num, temp, digit, sum = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0) 
    {
        digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }

    if (sum == num)
        printf("Armstrong Number\n");
    else
        printf("Not Armstrong\n");

    return 0;
}
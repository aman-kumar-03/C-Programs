/*
Check whether a number is palindrome or not.
*/

#include <stdio.h>

int main() 
{
    int num, rev = 0, temp, digit;

    printf("Enter number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0) 
    {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }

    if (rev == num)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
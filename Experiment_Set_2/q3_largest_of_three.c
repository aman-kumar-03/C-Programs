/*
Find the largest among three numbers entered by the user.
*/

#include <stdio.h>

int main() 
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
        printf("%d is largest\n", a);
    else if (b >= a && b >= c)
        printf("%d is largest\n", b);
    else
        printf("%d is largest\n", c);

    return 0;
}
/*
Write a C program to input two numbers from the user and display their sum.
*/

#include <stdio.h>

int main() 
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Sum = %d\n", a + b);
    return 0;
}
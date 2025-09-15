// Write a C program to print the Fibonacci series up to 'n' terms.

#include <stdio.h>

int main() 
{
    int n, first = 0, second = 1, next, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 0; i < n; i++) 
    {
        if (i <= 1) 
        {
            next = i; // First two terms: 0 and 1
        } 
        else 
        {
            next = first + second; // Sum of previous two terms
            first = second;
            second = next;
        }
        printf("%d ", next);
    }

    return 0;
}

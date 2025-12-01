/* 
Write a C program to declare a variable and 
print its memory address using & operator.
*/

#include <stdio.h>

int main() 
{
    int x = 10;
    printf("Value of x = %d\n", x);
    printf("Address of x = %p\n", &x);
    return 0;
}
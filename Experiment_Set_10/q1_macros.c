/* 
Write a program to define multiple macros to perform arithmetic functions.
*/

#include <stdio.h>

#define ADD(a,b)    ((a) + (b))
#define SUB(a,b)    ((a) - (b))
#define MUL(a,b)    ((a) * (b))
#define DIV(a,b)    ((b) != 0 ? (a) / (b) : 0)
#define SQUARE(x)   ((x) * (x))
#define MAX(a,b)    ((a) > (b) ? (a) : (b))

int main() 
{
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("\n--- Macro Results ---\n");
    printf("Addition = %d\n", ADD(a, b));
    printf("Subtraction = %d\n", SUB(a, b));
    printf("Multiplication = %d\n", MUL(a, b));
    printf("Division = %d\n", DIV(a, b));
    printf("Square of first number = %d\n", SQUARE(a));
    printf("Maximum = %d\n", MAX(a, b));

    return 0;
}
/*
Declare different types of pointers (int, float, char)
and initialize them with the addresses of variables.
Print the values of both the pointers and the variables they point to.
*/

#include <stdio.h>

int main() 
{
    int a = 10;
    float b = 5.5;
    char c = 'A';

    int *p1 = &a;
    float *p2 = &b;
    char *p3 = &c;

    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n", p1);
    printf("Value pointed by p1 = %d\n\n", *p1);

    printf("Value of b = %.2f\n", b);
    printf("Address of b = %p\n", p2);
    printf("Value pointed by p2 = %.2f\n\n", *p2);

    printf("Value of c = %c\n", c);
    printf("Address of c = %p\n", p3);
    printf("Value pointed by p3 = %c\n", *p3);

    return 0;
}
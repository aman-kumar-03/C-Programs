/*
Perform pointer arithmetic (increment and decrement)
on pointers of different data types and observe memory address change.
*/

#include <stdio.h>

int main() 
{
    int arr[3] = {10, 20, 30};
    int *p = arr;

    printf("Initial address: %p\n", p);
    printf("Value: %d\n\n", *p);

    p++;
    printf("After increment:\n");
    printf("Address: %p\n", p);
    printf("Value: %d\n\n", *p);

    p--;
    printf("After decrement:\n");
    printf("Address: %p\n", p);
    printf("Value: %d\n", *p);

    return 0;
}
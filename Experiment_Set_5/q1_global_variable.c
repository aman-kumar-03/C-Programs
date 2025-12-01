/*
Declare a global variable outside all functions and use it inside various functions 
to understand its accessibility.
*/

#include <stdio.h>

int globalNumber = 100;

void displayGlobal() 
{
    printf("Inside function displayGlobal(), globalNumber = %d\n", globalNumber);
}

int main() 
{
    printf("Inside main(), globalNumber = %d\n", globalNumber);
    displayGlobal();
    return 0;
}
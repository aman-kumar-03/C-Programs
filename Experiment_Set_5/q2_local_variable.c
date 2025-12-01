/*
Declare a local variable inside a function and attempt to access it outside the function.
Compare this behavior with that of the global variable.
*/

#include <stdio.h>

int globalValue = 50;

void sampleFunction() 
{
    int localValue = 20;
    printf("Inside sampleFunction(): localValue = %d\n", localValue);
    printf("Inside sampleFunction(): globalValue = %d\n", globalValue);
}

int main() 
{
    sampleFunction();

    printf("Inside main(): globalValue = %d\n", globalValue);

    printf("Local variable cannot be accessed outside its function.\n");

    return 0;
}
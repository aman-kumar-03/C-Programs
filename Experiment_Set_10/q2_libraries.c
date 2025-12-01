/*  
Write a program to use these standard libraries:
stdio.h, ctype.h, stdlib.h, assert.h, stdarg.h, time.h, math.h, string.h
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <assert.h>
#include <stdarg.h>
#include <time.h>
#include <math.h>
#include <string.h>

int addNumbers(int count, ...) 
{
    va_list args;
    va_start(args, count);

    int sum = 0;
    for (int i = 0; i < count; i++) 
    {
        sum += va_arg(args, int);
    }

    va_end(args);
    return sum;
}

int main() 
{

    printf("=== stdio.h Example ===\n");
    printf("Printing using stdio.h\n");

    printf("\n=== ctype.h Example ===\n");
    char ch = 'b';
    printf("toupper('b') = %c\n", toupper(ch));
    printf("isdigit('9') = %d\n", isdigit('9'));

    printf("\n=== stdlib.h & assert.h Example ===\n");
    int *ptr = (int*)malloc(sizeof(int));
    assert(ptr != NULL);
    *ptr = 50;
    printf("Value stored using malloc = %d\n", *ptr);
    free(ptr);

    printf("\n=== stdarg.h Example ===\n");
    printf("Sum of 10, 20 and 30 = %d\n", addNumbers(3, 10, 20, 30));

    printf("\n=== time.h Example ===\n");
    time_t t = time(NULL);
    printf("Current System Time = %s", ctime(&t));

    printf("\n=== math.h Example ===\n");
    printf("sqrt(25) = %.2f\n", sqrt(25));
    printf("pow(2, 4) = %.2f\n", pow(2, 4));

    printf("\n=== string.h Example ===\n");
    char s1[20] = "Hello";
    char s2[20];
    strcpy(s2, s1);
    printf("Copied String = %s\n", s2);
    printf("Length = %lu\n", strlen(s2));

    return 0;
}
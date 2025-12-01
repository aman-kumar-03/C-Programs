/*
Create a Simple Calculator that performs +, -, *, /, %.
*/

#include <stdio.h>

int main() 
{
    int a, b;
    char op;

    printf("Enter expression (a operator b): ");
    scanf("%d %c %d", &a, &op, &b);

    switch (op) 
    {
        case '+': printf("Result = %d\n", a + b); break;
        case '-': printf("Result = %d\n", a - b); break;
        case '*': printf("Result = %d\n", a * b); break;
        case '/': printf("Result = %d\n", a / b); break;
        case '%': printf("Result = %d\n", a % b); break;
        default: printf("Invalid operator\n");
    }

    return 0;
}
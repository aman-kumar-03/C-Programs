#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers (dividend divisor): ");
    scanf("%d %d", &a, &b);

    printf("Quotient = %d\n", a / b);
    printf("Remainder = %d\n", a % b);

    return 0;
}

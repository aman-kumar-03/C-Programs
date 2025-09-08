#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, discriminant, root1, root2;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct: %.2lf , %.2lf\n", root1, root2);
    }
    else if (discriminant == 0)
    {
        root1 = -b / (2 * a);
        printf("Roots are real and equal: %.2lf\n", root1);
    }
    else
    {
        double real = -b / (2 * a);
        double imag = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex: %.2lf + %.2lfi , %.2lf - %.2lfi\n", real, imag, real, imag);
    }

    return 0;
}

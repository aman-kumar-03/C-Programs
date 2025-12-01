/*
Calculate Monthly Salary using a function.

HRA:
  - Metro city     : 15% of basic salary
  - Non-Metro city : 10% of basic salary
DA:
  - 5%
*/

#include <stdio.h>

float calculate_salary(float basic, int isMetro) 
{
    float hra, da;

    if (isMetro == 1)
        hra = 0.15f * basic;
    else
        hra = 0.10f * basic;

    da = 0.05f * basic;

    return basic + hra + da;
}

int main() 
{
    float basic;
    int metro;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    printf("Metro city? (1 = Yes, 0 = No): ");
    scanf("%d", &metro);

    printf("Monthly Salary = %.2f\n", calculate_salary(basic, metro));
    return 0;
}
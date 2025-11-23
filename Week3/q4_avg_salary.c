/*
Define a structure of employee having data members name, address, age and salary.
Take the data for n employees in an array and find the average salary.
*/

#include <stdio.h>

struct Employee 
{
    char name[50];
    char address[50];
    int age;
    float salary;
};

int main() 
{
    struct Employee e[100];
    int n, i;
    float sum = 0, avg;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) 
    {
        printf("\nEnter name: ");
        scanf("%s", e[i].name);

        printf("Enter address: ");
        scanf("%s", e[i].address);

        printf("Enter age: ");
        scanf("%d", &e[i].age);

        printf("Enter salary: ");
        scanf("%f", &e[i].salary);

        sum += e[i].salary;
    }

    avg = sum / n;
    printf("\nAverage Salary = %.2f\n", avg);

    return 0;
}
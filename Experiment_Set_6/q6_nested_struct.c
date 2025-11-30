/*
Create a structure named date that has day, month and year.
Include this structure inside another structure named employee
and display employee's name, id, date of birth and salary.
*/

#include <stdio.h>

struct Date 
{
    int day, month, year;
};

struct Employee 
{
    char name[50];
    int id;
    float salary;
    struct Date dob;
};

int main() 
{
    struct Employee e;

    printf("Enter name: ");
    scanf("%s", e.name);

    printf("Enter ID: ");
    scanf("%d", &e.id);

    printf("Enter salary: ");
    scanf("%f", &e.salary);

    printf("Enter DOB (day month year): ");
    scanf("%d %d %d", &e.dob.day, &e.dob.month, &e.dob.year);

    printf("\nEmployee Details:\n");
    printf("Name: %s\n", e.name);
    printf("ID: %d\n", e.id);
    printf("Salary: %.2f\n", e.salary);
    printf("DOB: %d/%d/%d\n", e.dob.day, e.dob.month, e.dob.year);

    return 0;
}
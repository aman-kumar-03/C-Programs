/*
Employee Data Entry and Display using functions.
Details: name, ID, department, salary
*/

#include <stdio.h>

struct Employee 
{
    char name[50];
    int id;
    char dept[30];
    float salary;
};

void input(struct Employee *e) 
{
    printf("Enter name: ");
    scanf("%s", e->name);

    printf("Enter ID: ");
    scanf("%d", &e->id);

    printf("Enter department: ");
    scanf("%s", e->dept);

    printf("Enter salary: ");
    scanf("%f", &e->salary);
}

void display(struct Employee e) 
{
    printf("\n--- Employee Details ---\n");
    printf("Name       : %s\n", e.name);
    printf("ID         : %d\n", e.id);
    printf("Department : %s\n", e.dept);
    printf("Salary     : %.2f\n", e.salary);
}

int main() 
{
    struct Employee e;

    input(&e);
    display(e);

    return 0;
}
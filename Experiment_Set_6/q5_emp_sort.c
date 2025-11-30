/*
Write a program to read the name, address and salary of 5 employees using array of structure.
Display information of each employee in alphabetical order of their name.
*/

#include <stdio.h>
#include <string.h>

struct Employee 
{
    char name[50];
    char address[50];
    float salary;
};

int main() 
{
    struct Employee e[5], temp;
    int i, j;

    for(i = 0; i < 5; i++) 
    {
        printf("Enter name: ");
        scanf("%s", e[i].name);

        printf("Enter address: ");
        scanf("%s", e[i].address);

        printf("Enter salary: ");
        scanf("%f", &e[i].salary);
    }

    for(i = 0; i < 5; i++) 
    {
        for(j = i + 1; j < 5; j++) 
        {
            if(strcmp(e[i].name, e[j].name) > 0) 
            {
                temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
    }

    printf("\nEmployee Details (Alphabetical Order):\n");
    for(i = 0; i < 5; i++) 
    {
        printf("%s %s %.2f\n", e[i].name, e[i].address, e[i].salary);
    }

    return 0;
}
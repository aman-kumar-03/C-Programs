/*
Display Student Information (name, roll number, marks)
using a separate function.
*/

#include <stdio.h>

void display(char name[], int roll, float marks) 
{
    printf("\n--- Student Details ---\n");
    printf("Name  : %s\n", name);
    printf("Roll  : %d\n", roll);
    printf("Marks : %.2f\n", marks);
}

int main() 
{
    char name[50];
    int roll;
    float marks;

    printf("Enter name: ");
    scanf("%s", name);

    printf("Enter roll number: ");
    scanf("%d", &roll);

    printf("Enter marks: ");
    scanf("%f", &marks);

    display(name, roll, marks);

    return 0;
}
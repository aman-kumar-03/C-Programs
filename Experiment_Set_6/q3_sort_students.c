/*
Write a program that takes roll_no and fname of 5 students
and prints the same records in ascending order on the basis of roll_no.
*/

#include <stdio.h>

struct Student 
{
    int roll;
    char name[50];
};

int main() 
{
    struct Student s[5], temp;
    int i, j;

    for(i = 0; i < 5; i++) 
    {
        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter name: ");
        scanf("%s", s[i].name);
    }

    for(i = 0; i < 5; i++) 
    {
        for(j = i + 1; j < 5; j++) 
        {
            if(s[i].roll > s[j].roll) 
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("\nSorted Records:\n");
    for(i = 0; i < 5; i++) 
    {
        printf("%d  %s\n", s[i].roll, s[i].name);
    }

    return 0;
}
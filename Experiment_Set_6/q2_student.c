/*
Create a structure named student that has name, roll and mark as members.
Write a program using structure to read and display the data entered by the user.
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float mark;
};

int main() {
    struct Student s;

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Roll: ");
    scanf("%d", &s.roll);

    printf("Enter Marks: ");
    scanf("%f", &s.mark);

    printf("\nStudent Details:");
    printf("\nName: %s", s.name);
    printf("\nRoll: %d", s.roll);
    printf("\nMarks: %.2f\n", s.mark);

    return 0;
}
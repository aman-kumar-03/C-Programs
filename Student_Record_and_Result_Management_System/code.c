/*
   Student Record and Result Management System
*/

#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define SEM 8

struct Student {
    long long sap_id;
    int roll_no;
    char name[50];
    char phone[20];
    char email[50];
    int year;
    int semester;
    float sgpa[SEM];
    float cgpa;
};

struct Student students[MAX_STUDENTS];
int count = 0;

/* Function to calculate CGPA of a student */
float calculate_cgpa(float sgpa[]) {
    float sum = 0;
    for (int i = 0; i < SEM; i++)
        sum += sgpa[i];
    return sum / SEM;
}

/* Add student record */
void add_student() {
    if (count >= MAX_STUDENTS) {
        printf("Limit reached!\n");
        return;
    }

    struct Student s;

    printf("Enter SAP ID: ");
    scanf("%lld", &s.sap_id);

    printf("Enter Roll No: ");
    scanf("%d", &s.roll_no);

    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter Phone: ");
    scanf(" %s", s.phone);

    printf("Enter Email: ");
    scanf(" %s", s.email);

    printf("Enter Year (1-4): ");
    scanf("%d", &s.year);

    printf("Enter Current Semester (1-8): ");
    scanf("%d", &s.semester);

    printf("\nEnter SGPA for 8 Semesters:\n");
    for (int i = 0; i < SEM; i++) {
        printf("Sem %d SGPA: ", i + 1);
        scanf("%f", &s.sgpa[i]);
    }

    s.cgpa = calculate_cgpa(s.sgpa);

    students[count++] = s;

    printf("\nStudent added successfully!\n");
}

/* Display one student */
void display_student(struct Student s) {
    printf("\n----------------------------------------\n");
    printf("SAP ID : %lld\n", s.sap_id);
    printf("Roll No: %d\n", s.roll_no);
    printf("Name   : %s\n", s.name);
    printf("Phone  : %s\n", s.phone);
    printf("Email  : %s\n", s.email);
    printf("Year   : %d\n", s.year);
    printf("Sem    : %d\n", s.semester);
    printf("SGPA   : ");
    for (int i = 0; i < SEM; i++) printf("%.2f ", s.sgpa[i]);
    printf("\nCGPA   : %.2f\n", s.cgpa);
    printf("----------------------------------------\n");
}

/* Search student by SAP ID */
void search_student() {
    long long sap;
    printf("Enter SAP ID to search: ");
    scanf("%lld", &sap);

    for (int i = 0; i < count; i++) {
        if (students[i].sap_id == sap) {
            display_student(students[i]);
            return;
        }
    }
    printf("Student not found!\n");
}

/* Display all students */
void display_all() {
    if (count == 0) {
        printf("No records!\n");
        return;
    }
    for (int i = 0; i < count; i++) {
        display_student(students[i]);
    }
}

/* Delete a student */
void delete_student() {
    long long sap;
    printf("Enter SAP ID to delete: ");
    scanf("%lld", &sap);

    for (int i = 0; i < count; i++) {
        if (students[i].sap_id == sap) {
            for (int j = i; j < count - 1; j++)
                students[j] = students[j + 1];
            count--;
            printf("Record deleted!\n");
            return;
        }
    }
    printf("SAP ID not found!\n");
}

/* Sort by SAP ID */
void sort_by_sap() {
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (students[i].sap_id > students[j].sap_id) {
                struct Student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
    printf("\nSorted by SAP ID!\n");
}

/* Sort by Name */
void sort_by_name() {
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (strcmp(students[i].name, students[j].name) > 0) {
                struct Student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
    printf("\nSorted by Name!\n");
}

/* Average CGPA of each year */
void avg_cgpa_year() {
    float sum[5] = {0};
    int c[5] = {0};

    for (int i = 0; i < count; i++) {
        int y = students[i].year;
        sum[y] += students[i].cgpa;
        c[y]++;
    }

    for (int y = 1; y <= 4; y++) {
        if (c[y] == 0)
            printf("Year %d: No students\n", y);
        else
            printf("Year %d: Average CGPA = %.2f\n", y, sum[y] / c[y]);
    }
}

/* Main Menu */
int main() {
    int choice;

    do {
        printf("\n================= MENU =================\n");
        printf("1. Add Student\n");
        printf("2. Search Student\n");
        printf("3. Display All Students\n");
        printf("4. Delete Student\n");
        printf("5. Sort by SAP ID\n");
        printf("6. Sort by Name\n");
        printf("7. Average CGPA per Year\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: add_student(); break;
            case 2: search_student(); break;
            case 3: display_all(); break;
            case 4: delete_student(); break;
            case 5: sort_by_sap(); break;
            case 6: sort_by_name(); break;
            case 7: avg_cgpa_year(); break;
            case 0: printf("Exiting program...\n"); break;
            default: printf("Invalid choice!\n");
        }

    } while (choice != 0);

    return 0;
}
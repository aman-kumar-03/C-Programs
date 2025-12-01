/*
Book Information System
Write a C program that collects and displays:
- Book Title (single word)
- Author Name (single word)
- ISBN
- Price
- Publisher (single word)
- Year of Publication
*/

#include <stdio.h>

int main() 
{
    char title[20], author[20], publisher[20];
    int isbn, year;
    float price;

    printf("Enter Book Title: ");
    scanf("%s", title);

    printf("Enter Author Name: ");
    scanf("%s", author);

    printf("Enter ISBN: ");
    scanf("%d", &isbn);

    printf("Enter Price: ");
    scanf("%f", &price);

    printf("Enter Publisher: ");
    scanf("%s", publisher);

    printf("Enter Year of Publication: ");
    scanf("%d", &year);

    printf("\n--- Book Details ---\n");
    printf("Title: %s\n", title);
    printf("Author: %s\n", author);
    printf("ISBN: %d\n", isbn);
    printf("Price: %.2f\n", price);
    printf("Publisher: %s\n", publisher);
    printf("Year of Publication: %d\n", year);

    return 0;
}
/*
Create a union containing 6 strings: name, home_address, hostel_address,
city, state and zip. Write a C program to display your present address.
*/

#include <stdio.h>

union Address 
{
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    char zip[20];
};

int main() 
{
    union Address a;

    printf("Enter your name: ");
    scanf("%s", a.name);
    printf("Name: %s\n", a.name);

    printf("Enter home address: ");
    scanf("%s", a.home_address);
    printf("Home Address: %s\n", a.home_address);

    printf("Enter city: ");
    scanf("%s", a.city);
    printf("City: %s\n", a.city);

    printf("Enter state: ");
    scanf("%s", a.state);
    printf("State: %s\n", a.state);

    printf("Enter ZIP code: ");
    scanf("%s", a.zip);
    printf("ZIP: %s\n", a.zip);

    return 0;
}
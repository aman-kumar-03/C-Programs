/*
Mobile Phone Information System
Write a C program that collects and displays:
- Brand Name (single word)
- Model Name (single word)
- Serial Number
- Price
- Color (single word)
- Battery Capacity (mAh)
*/

#include <stdio.h>

int main() 
{
    char brand[20], model[20], color[20];
    int serial, battery;
    float price;

    printf("Enter Brand Name: ");
    scanf("%s", brand);

    printf("Enter Model Name: ");
    scanf("%s", model);

    printf("Enter Serial Number: ");
    scanf("%d", &serial);

    printf("Enter Price: ");
    scanf("%f", &price);

    printf("Enter Color: ");
    scanf("%s", color);

    printf("Enter Battery Capacity (mAh): ");
    scanf("%d", &battery);

    printf("\n--- Mobile Phone Details ---\n");
    printf("Brand: %s\n", brand);
    printf("Model: %s\n", model);
    printf("Serial Number: %d\n", serial);
    printf("Price: %.2f\n", price);
    printf("Color: %s\n", color);
    printf("Battery: %d mAh\n", battery);

    return 0;
}
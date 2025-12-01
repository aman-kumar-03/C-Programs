/*
Product Information System
Write a C program that collects and displays:
- Product Name (single word)
- Product ID
- Quantity
- Price
- Manufacturer (single word)
- Category (single word)
*/

#include <stdio.h>

int main() 
{
    char name[20], manufacturer[20], category[20];
    int product_id, quantity;
    float price;

    printf("Enter Product Name: ");
    scanf("%s", name);

    printf("Enter Product ID: ");
    scanf("%d", &product_id);

    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    printf("Enter Price: ");
    scanf("%f", &price);

    printf("Enter Manufacturer: ");
    scanf("%s", manufacturer);

    printf("Enter Category: ");
    scanf("%s", category);

    printf("\n--- Product Details ---\n");
    printf("Name: %s\n", name);
    printf("Product ID: %d\n", product_id);
    printf("Quantity: %d\n", quantity);
    printf("Price: %.2f\n", price);
    printf("Manufacturer: %s\n", manufacturer);
    printf("Category: %s\n", category);

    return 0;
}
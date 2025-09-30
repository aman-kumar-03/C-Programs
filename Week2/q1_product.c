/*
Write a C program that collects and displays the following details about a product:
 • Product Name (single word, e.g., "Laptop")
 • Product ID (integer, e.g., 12345)
 • Quantity (integer, e.g., 20)
 • Price (floating-point number, e.g., 999.99)
 • Manufacturer (single word, e.g., "Dell")
 • Category (single word, e.g., "Electronics")
*/

#include <stdio.h>

int main() 
{
    char productName[50], manufacturer[50], category[50];
    int productID, quantity;
    float price;

    printf("Enter Product Name: ");
    scanf("%s", productName);

    printf("Enter Product ID: ");
    scanf("%d", &productID);

    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    printf("Enter Price: ");
    scanf("%f", &price);

    printf("Enter Manufacturer: ");
    scanf("%s", manufacturer);

    printf("Enter Category: ");
    scanf("%s", category);

    printf("\n--- Product Details ---\n");
    printf("Name: %s\n", productName);
    printf("ID: %d\n", productID);
    printf("Quantity: %d\n", quantity);
    printf("Price: %.2f\n", price);
    printf("Manufacturer: %s\n", manufacturer);
    printf("Category: %s\n", category);

    return 0;
}

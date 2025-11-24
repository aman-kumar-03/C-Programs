/* 
Write a C program that uses calloc() to allocate memory for n integers.
Display all values immediately after allocation to show zero initialization.
Then allow the user to modify the values and print the updated array.
*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n, i;
    int *arr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0) 
    {
        printf("Invalid size!\n");
        return 1;
    }

    arr = (int*)calloc(n, sizeof(int));
    if (arr == NULL) 
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Values after calloc (zero initialized):\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

    printf("\nEnter new values:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Updated array:\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}
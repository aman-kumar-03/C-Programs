/* 
Write a C program to create an array using malloc(), fill it with values,
then use realloc() to increase the size of the array, add new values and print all elements.
*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n, newSize, i;
    int *arr;

    printf("Enter initial size: ");
    scanf("%d", &n);

    if (n <= 0) 
    {
        printf("Invalid size!\n");
        return 1;
    }

    arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) 
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d values:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter new increased size: ");
    scanf("%d", &newSize);

    if (newSize <= n) 
    {
        printf("New size must be greater!\n");
        free(arr);
        return 1;
    }

    int *temp = realloc(arr, newSize * sizeof(int));
    if (temp == NULL) 
    {
        printf("Reallocation failed!\n");
        free(arr);
        return 1;
    }
    arr = temp;

    printf("Enter %d new values:\n", newSize - n);
    for (i = n; i < newSize; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Final array:\n");
    for (i = 0; i < newSize; i++) 
    {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}
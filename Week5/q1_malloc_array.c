/*
Write a C program to dynamically allocate an integer array using malloc().
Take the size from the user, input elements, and 
print the sum, maximum, and minimum of the array.
*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n, i;
    int *arr;

    printf("Enter size of array: ");
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

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int sum = 0, min = arr[0], max = arr[0];

    for (i = 0; i < n; i++) 
    {
        sum += arr[i];
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    printf("Sum = %d\n", sum);
    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);

    free(arr);
    return 0;
}
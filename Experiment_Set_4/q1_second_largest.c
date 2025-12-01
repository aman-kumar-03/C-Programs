/* 
Read a list of integers into a single-dimensional array and find the second largest element.
*/

#include <stdio.h>

int main() 
{
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 2) 
    {
        printf("At least 2 numbers are required.\n");
        return 0;
    }

    int arr[n];
    printf("Enter %d numbers:\n", n);

    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    int second = -1000000;

    for (int i = 1; i < n; i++) 
    {
        if (arr[i] > largest) 
        {
            second = largest;
            largest = arr[i];
        } 
        else if (arr[i] > second && arr[i] != largest) 
        {
            second = arr[i];
        }
    }

    if (second == -1000000) 
    {
        printf("All elements are equal. No second largest.\n");
    } 
    else 
    {
        printf("Second largest number = %d\n", second);
    }

    return 0;
}
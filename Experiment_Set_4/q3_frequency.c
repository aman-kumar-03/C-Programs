/* 
Find how many times a specific number appears in a given array.
*/

#include <stdio.h>

int main() 
{
    int n, key;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers:\n", n);

    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to find frequency: ");
    scanf("%d", &key);

    int count = 0;
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == key) 
        {
            count++;
        }
    }

    printf("Frequency of %d = %d\n", key, count);

    return 0;
}
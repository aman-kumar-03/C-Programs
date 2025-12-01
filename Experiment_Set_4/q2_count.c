/* 
Read integers into an array and count how many are positive, negative, odd, and even.
*/

#include <stdio.h>

int main() 
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers:\n", n);

    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int pos = 0, neg = 0, odd = 0, even = 0;

    for (int i = 0; i < n; i++) 
    {
        if (arr[i] > 0) pos++;
        if (arr[i] < 0) neg++;

        if (arr[i] % 2 == 0) even++;
        else odd++;
    }

    printf("Positive numbers: %d\n", pos);
    printf("Negative numbers: %d\n", neg);
    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);

    return 0;
}
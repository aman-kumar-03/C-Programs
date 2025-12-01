/*
Read two matrices A (m×n) and B (p×q) and compute their product A × B.
Display both input matrices and the resultant matrix in proper matrix format.
Check for compatibility before performing multiplication.
If incompatible, display a message and stop.
*/

#include <stdio.h>

int main() 
{
    int m, n, p, q;

    printf("Enter rows and columns of Matrix A (m n): ");
    scanf("%d %d", &m, &n);

    printf("Enter rows and columns of Matrix B (p q): ");
    scanf("%d %d", &p, &q);

    if (n != p) 
    {
        printf("Matrix multiplication NOT possible (Columns of A != Rows of B)\n");
        return 0;
    }

    int A[m][n], B[p][q], result[m][q];

    printf("Enter elements of Matrix A:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of Matrix B:\n");
    for (int i = 0; i < p; i++)
        for (int j = 0; j < q; j++)
            scanf("%d", &B[i][j]);

    for (int i = 0; i < m; i++)
        for (int j = 0; j < q; j++)
            result[i][j] = 0;

    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < q; j++) 
        {
            for (int k = 0; k < n; k++) 
            {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nMatrix A:\n");
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B:\n");
    for (int i = 0; i < p; i++) 
    {
        for (int j = 0; j < q; j++) 
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    printf("\nResultant Matrix (A * B):\n");
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < q; j++) 
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
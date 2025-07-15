/*
19. Develop a program to introduce 2D Array manipulation and implement Matrix multiplication and ensure the rules of multiplication are checked.
*/

#include <stdio.h>

int main()
{
    int r1, c1, r2, c2;
    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);
    if (c1 != r2)
    {
        printf("Matrix multiplication not possible!\n");
        return 1;
    }
    int a[r1][c1], b[r2][c2], result[r1][c2];
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);
    // Initialize result matrix
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
            result[i][j] = 0;
    // Matrix multiplication
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("Resultant matrix:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
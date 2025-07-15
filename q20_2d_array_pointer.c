/*
20. Write a C program to implement 2D array using pointer.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row, col;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);
    int **arr = (int **)malloc(row * sizeof(int *));
    for (int i = 0; i < row; i++)
        arr[i] = (int *)malloc(col * sizeof(int));
    printf("Enter elements:\n");
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            scanf("%d", &arr[i][j]);
    printf("2D Array:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < row; i++)
        free(arr[i]);
    free(arr);
    return 0;
}
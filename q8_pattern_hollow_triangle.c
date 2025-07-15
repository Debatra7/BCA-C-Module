/*
8. Write programs to display each of the following patterns.
   * * * * * * *
   * * *   * * *
   * *       * *
   *           *
*/

#include <stdio.h>

int main()
{
    int row;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if (j <= row - i - 1)
                printf("* ");
            else
                printf("  ");
        }
        for (int j = 0; j < row; j++)
        {
            if (j < i)
                printf("  ");
            else
                printf("* ");
        }
        printf("\n");
    }
    return 0;
}
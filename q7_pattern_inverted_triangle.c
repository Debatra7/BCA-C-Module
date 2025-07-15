/*
7. Write programs to display each of the following patterns.
   * * * * *
   * * * *
   * * *
   * *
   *
*/

#include <stdio.h>

int main()
{
    int row;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    for (int i = row; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
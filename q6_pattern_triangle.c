/*
6. Write a C program to print the following pattern.
   *
   * *
   * * *
   * * * *
   * * * * *
*/

#include <stdio.h>

int main()
{
    int row;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
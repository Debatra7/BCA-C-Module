/*
9. Write programs to display each of the following patterns.
     1
     2 6
     3 7 10
     4 8 11 13
     5 9 12 14 15
*/

#include <stdio.h>

int main()
{
    int row;
    printf("Enter the number of rows: ");
    scanf("%d", &row);

    int num = 1;
    for (int i = 1; i <= row; i++)
    {
        int current = num;
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", current);
            current += row - j + 1;
        }
        num++;
        printf("\n");
    }
    return 0;
}
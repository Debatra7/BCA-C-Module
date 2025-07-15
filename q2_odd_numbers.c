/*
2. Write a C program to find all odd numbers between 150 to 300.
*/

#include <stdio.h>

int main()
{
    printf("Odd numbers between 150 and 300:\n");
    for (int i = 151; i <= 300; i++)
    {
        if (i % 2 != 0)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}
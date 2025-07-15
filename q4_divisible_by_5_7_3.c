/*
4. Write a C program to find all 4-digit number which are divisible by 5, 7 and 3.
*/

#include <stdio.h>

int main()
{
    printf("4-digit numbers divisible by 5, 7, and 3:\n");
    for (int i = 1000; i <= 9999; i++)
    {
        if (i % 5 == 0 && i % 7 == 0 && i % 3 == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
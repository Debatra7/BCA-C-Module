/*
14. Write a program in C to find the factorial of a number without using recursive C function.
*/

#include <stdio.h>

int main()
{
    int n, i;
    unsigned long long fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Factorial of a negative number doesn't exist.\n");
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            fact *= i;
        }
        printf("Factorial of %d = %llu\n", n, fact);
    }
    return 0;
}
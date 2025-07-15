/*
15. Write a c –code to determine whether the given number is prime or not using function.
*/

#include <stdio.h>

int is_prime(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (is_prime(num))
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);
    return 0;
}

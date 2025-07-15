/*
23. Develop a program to find the square root of a given number N and execute for all possible Inputs with appropriate messages. Note: Don’t use library function sqrt(n).
*/

#include <stdio.h>

int main()
{
    double n;
    printf("Enter a number: ");
    scanf("%lf", &n);
    if (n < 0)
    {
        printf("Square root of negative number is not real.\n");
        return 1;
    }
    double guess = n / 2.0, accuracy = 0.000001;
    double root;
    do
    {
        root = guess;
        guess = (root + n / root) / 2.0;
    } while ((root - guess) > accuracy || (guess - root) > accuracy);
    printf("Square root of %.6lf is %.6lf\n", n, guess);
    return 0;
}
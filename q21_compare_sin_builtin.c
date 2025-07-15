/*
21. Develop a program to compute Sin(x) using Taylor series approximation. Compare your result with the builtin Library function. Print both the result with appropriate messages.
*/

#include <stdio.h>
#include <math.h>

long long factorial(int n)
{
    long long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

double taylor_sin(double x, int n)
{
    double sum = 0;
    int sign = 1;
    for (int i = 0; i < n; i++)
    {
        int term = 2 * i + 1;
        sum += sign * pow(x, term) / factorial(term);
        sign *= -1;
    }
    return sum;
}

int main()
{
    double x;
    int n;
    printf("Enter value of x in radians: ");
    scanf("%lf", &x);
    printf("Enter number of terms: ");
    scanf("%d", &n);
    double taylor = taylor_sin(x, n);
    double builtin = sin(x);
    printf("Sin(%.2lf) using Taylor series = %.6lf\n", x, taylor);
    printf("Sin(%.2lf) using built-in function = %.6lf\n", x, builtin);
    return 0;
}
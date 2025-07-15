/*
12. Draw the flowchart and Write a C Program to compute Sin(x) using Taylor series approximation given by Sin(x) = x - (x^3/3!) + (x^5/5!) - (x^7/7!) + …….
*/

#include <stdio.h>

long long factorial(int n)
{
    long long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

double power(double x, int n)
{
    double result = 1;
    for (int i = 0; i < n; i++)
        result *= x;
    return result;
}

int main()
{
    double x, sum = 0;
    int n, sign = 1;
    printf("Enter value of x in radians: ");
    scanf("%lf", &x);
    printf("Enter number of terms: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int term = 2 * i + 1;
        sum += sign * power(x, term) / factorial(term);
        sign *= -1;
    }
    printf("Sin(%.2lf) using Taylor series = %.6lf\n", x, sum);
    return 0;
}
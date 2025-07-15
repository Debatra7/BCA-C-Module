/*
13. Design develop and Write c program compute cosine (x) .(hint: 1 - (1/2!)x^2 + (1/4!)x^4 - (1/6!)x^6 ) using Taylor series.
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
        int term = 2 * i;
        sum += sign * pow(x, term) / factorial(term);
        sign *= -1;
    }
    printf("Cos(%.2lf) using Taylor series = %.6lf\n", x, sum);
    return 0;
}
/*
25. Develop a program using pointers to compute the sum and standard deviation of all elements stored in an array of n real numbers.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    double arr[n], sum = 0, mean, stddev = 0;
    printf("Enter %d real numbers: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%lf", arr + i);
        sum += *(arr + i);
    }
    mean = sum / n;
    for (i = 0; i < n; i++)
    {
        stddev += (*(arr + i) - mean) * (*(arr + i) - mean);
    }
    stddev = sqrt(stddev / n);
    printf("Sum = %.2lf\n", sum);
    printf("Standard Deviation = %.2lf\n", stddev);
    return 0;
}
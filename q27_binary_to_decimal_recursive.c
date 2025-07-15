/*
27. Implement Recursive functions for binary to Decimal Conversion.
*/

#include <stdio.h>

int binaryToDecimal(int n)
{
    if (n == 0)
        return 0;
    else
        return (n % 10) + 2 * binaryToDecimal(n / 10);
}

int main()
{
    int binary;
    printf("Enter a binary number: ");
    scanf("%d", &binary);
    printf("Decimal: %d\n", binaryToDecimal(binary));
    return 0;
}
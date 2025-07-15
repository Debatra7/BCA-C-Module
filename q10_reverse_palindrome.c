/*
10. Design and develop an algorithm to find the reverse of an integer number NUM and check whether it is PALINDROME or NOT. Implement a C program for the developed algorithm that takes an integer number as input and output the reverse of the same with suitable messages. Ex: Num: 2014, Reverse: 4102, Not a Palindrome
*/

#include <stdio.h>

int main()
{
    int num, original, reverse = 0, rem;
    printf("Enter an integer: ");
    scanf("%d", &num);
    original = num;
    while (num != 0)
    {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num /= 10;
    }
    printf("Reverse: %d\n", reverse);
    if (original == reverse)
        printf("The number is a Palindrome\n");
    else
        printf("The number is Not a Palindrome\n");
    return 0;
}
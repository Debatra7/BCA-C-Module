/*
16. Develop a program to find the reverse of a string and check for palindrome or not. Display appropriate messages.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], rev[100];
    int len, flag = 1;
    printf("Enter a string: ");
    scanf("%s", str);
    len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';
    printf("Reverse: %s\n", rev);
    for (int i = 0; i < len; i++)
    {
        if (str[i] != rev[i])
        {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("%s is a Palindrome\n", str);
    else
        printf("%s is Not a Palindrome\n", str);
    return 0;
}
/*
28. Write a function to implement string operations such as compare, concatenate, string length. Convince the parameters passing techniques.
*/

#include <stdio.h>

int string_length(const char *str)
{
    int len = 0;
    while (str[len] != '\0')
        len++;
    return len;
}

int string_compare(const char *s1, const char *s2)
{
    int i = 0;
    while (s1[i] && s2[i])
    {
        if (s1[i] != s2[i])
            return s1[i] - s2[i];
        i++;
    }
    return s1[i] - s2[i];
}

void string_concatenate(char *dest, const char *src)
{
    int i = 0, j = 0;
    while (dest[i])
        i++;
    while (src[j])
    {
        dest[i++] = src[j++];
    }
    dest[i] = '\0';
}

int main()
{
    char str1[100], str2[100], concat[200];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    printf("Length of first string: %d\n", string_length(str1));
    printf("Length of second string: %d\n", string_length(str2));
    int cmp = string_compare(str1, str2);
    if (cmp == 0)
        printf("Strings are equal.\n");
    else if (cmp < 0)
        printf("First string is less than second string.\n");
    else
        printf("First string is greater than second string.\n");
    for (int i = 0; str1[i]; i++)
        concat[i] = str1[i];
    concat[string_length(str1)] = '\0';
    string_concatenate(concat, str2);
    printf("Concatenated string: %s\n", concat);
    return 0;
}
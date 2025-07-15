/*
26. Write a C program to sort an array of structure (roll, name, total marks) in ascending order of total marks.
*/

#include <stdio.h>
#include <string.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    int n, i, j;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student s[n], temp;
    for (i = 0; i < n; i++)
    {
        printf("Enter roll, name, marks for student %d: ", i + 1);
        scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].marks);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (s[j].marks > s[j + 1].marks)
            {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
    printf("Sorted list (by marks):\n");
    for (i = 0; i < n; i++)
    {
        printf("Roll: %d, Name: %s, Marks: %.2f\n", s[i].roll, s[i].name, s[i].marks);
    }
    return 0;
}
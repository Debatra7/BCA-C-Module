/*
24. Implement structures to read, write, and compute average marks and the students scoring above and below the average marks for a class of N students.
*/

#include <stdio.h>

struct Student
{
    char name[50];
    float marks;
};

int main()
{
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student s[n];
    float sum = 0, avg;
    for (int i = 0; i < n; i++)
    {
        printf("Enter name and marks for student %d: ", i + 1);
        scanf("%s %f", s[i].name, &s[i].marks);
        sum += s[i].marks;
    }
    avg = sum / n;
    printf("Average marks: %.2f\n", avg);
    printf("Students scoring above average:\n");
    for (int i = 0; i < n; i++)
    {
        if (s[i].marks > avg)
            printf("%s (%.2f)\n", s[i].name, s[i].marks);
    }
    printf("Students scoring below average:\n");
    for (int i = 0; i < n; i++)
    {
        if (s[i].marks < avg)
            printf("%s (%.2f)\n", s[i].name, s[i].marks);
    }
    return 0;
}
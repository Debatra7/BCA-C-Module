/*
29. Write a C program to insert five (5) records in a file and display it.
*/

#include <stdio.h>

struct Record
{
    int id;
    char name[50];
};

int main()
{
    struct Record rec;
    FILE *fp = fopen("records.txt", "w");
    if (!fp)
    {
        printf("Unable to open file!\n");
        return 1;
    }
    printf("Enter 5 records (id name): ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d %s", &rec.id, rec.name);
        fprintf(fp, "%d %s\n", rec.id, rec.name);
    }
    fclose(fp);
    fp = fopen("records.txt", "r");
    if (!fp)
    {
        printf("Unable to open file!\n");
        return 1;
    }
    printf("\nRecords in file:\n");
    while (fscanf(fp, "%d %s", &rec.id, rec.name) == 2)
    {
        printf("ID: %d, Name: %s\n", rec.id, rec.name);
    }
    fclose(fp);
    return 0;
}
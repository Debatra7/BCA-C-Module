/*
30. Write a C program to insert five (5) records in a file and display it, then find a match of a record provided by the user.
*/

#include <stdio.h>
#include <string.h>

struct Record
{
    int id;
    char name[50];
};

int main()
{
    struct Record rec;
    FILE *fp = fopen("records2.txt", "w");
    if (!fp)
    {
        printf("Unable to open file!\n");
        return 1;
    }
    printf("Enter 5 records (id name):\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d %s", &rec.id, rec.name);
        fprintf(fp, "%d %s\n", rec.id, rec.name);
    }
    fclose(fp);
    fp = fopen("records2.txt", "r");
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
    int search_id, found = 0;
    char search_name[50];
    printf("\nEnter ID and Name to search: ");
    scanf("%d %s", &search_id, search_name);
    fp = fopen("records2.txt", "r");
    while (fscanf(fp, "%d %s", &rec.id, rec.name) == 2)
    {
        if (rec.id == search_id && strcmp(rec.name, search_name) == 0)
        {
            printf("Record found: ID: %d, Name: %s\n", rec.id, rec.name);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("Record not found.\n");
    fclose(fp);
    return 0;
}
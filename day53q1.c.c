
#include <stdio.h>

int main()
{
    FILE *fp;
    int n, i, roll;
    char name[50];
    float marks;

    // Open file in write mode
    fp = fopen("student.txt", "w");

    if (fp == NULL)
    {
        printf("Error opening file!");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Store student records
    for (i = 1; i <= n; i++)
    {
        printf("\nEnter student name: ");
        scanf("%s", name);

        printf("Enter roll number: ");
        scanf("%d", &roll);

        printf("Enter marks: ");
        scanf("%f", &marks);

        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(fp);

    // Open file in read mode
    fp = fopen("student.txt", "r");

    if (fp == NULL)
    {
        printf("Error opening file!");
        return 1;
    }

    printf("\n--- Student Records ---\n");

    // Read and display student records
    while (fscanf(fp, "%s %d %f", name, &roll, &marks) == 3)
    {
        printf("\nName: %s", name);
        printf("\nRoll Number: %d", roll);
        printf("\nMarks: %.2f\n", marks);
    }

    fclose(fp);

    return 0;
}

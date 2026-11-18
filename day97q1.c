// Store employee data in a binary file using fwrite() and read using fread().

#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee emp_write, emp_read;
    FILE *fp;

    printf("Enter Employee Name, ID, and Salary: ");
    if (scanf("%49s %d %f", emp_write.name, &emp_write.id, &emp_write.salary) != 3) {
        return 0;
    }

    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    fwrite(&emp_write, sizeof(struct Employee), 1, fp);
    fclose(fp);

    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    if (fread(&emp_read, sizeof(struct Employee), 1, fp) != 1) {
        printf("Error reading employee data.\n");
        fclose(fp);
        return 1;
    }
    fclose(fp);

    printf("Employee Data Read from File:\n");
    printf("Name: %s | ID: %d | Salary: %g\n", emp_read.name, emp_read.id, emp_read.salary);

    return 0;
}

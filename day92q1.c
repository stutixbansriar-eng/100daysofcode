// Store details of 5 students in an array of structures and print all.

#include <stdio.h>

#define NUM_STUDENTS 5

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[NUM_STUDENTS];

    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Enter details for student %d (Name Roll Marks): ", i + 1);
        if (scanf("%49s %d %f", students[i].name, &students[i].roll_no, &students[i].marks) != 3) {
            return 0;
        }
    }

    printf("\n%-20s %-10s %-10s\n", "Name", "Roll No", "Marks");
    printf("------------------------------------------\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("%-20s %-10d %-10g\n", students[i].name, students[i].roll_no, students[i].marks);
    }

    return 0;
}

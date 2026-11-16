// Return a structure containing top student's details from a function.

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student findTopStudent(struct Student students[], int n) {
    struct Student top = students[0];
    for (int i = 1; i < n; i++) {
        if (students[i].marks > top.marks) {
            top = students[i];
        }
    }
    return top;
}

int main() {
    int n;

    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    struct Student students[n];
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d (Name Roll Marks): ", i + 1);
        if (scanf("%49s %d %f", students[i].name, &students[i].roll_no, &students[i].marks) != 3) {
            return 0;
        }
    }

    struct Student top = findTopStudent(students, n);
    printf("Top Student: %s | Roll: %d | Marks: %g\n", top.name, top.roll_no, top.marks);

    return 0;
}

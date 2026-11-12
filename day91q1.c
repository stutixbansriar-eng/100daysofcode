// Define a structure Student with name, roll_no, and marks, then read and print one student's data.

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;

    printf("Enter Name: ");
    if (scanf("%49s", s.name) != 1) {
        return 0;
    }

    printf("Enter Roll: ");
    if (scanf("%d", &s.roll_no) != 1) {
        return 0;
    }

    printf("Enter Marks: ");
    if (scanf("%f", &s.marks) != 1) {
        return 0;
    }

    printf("Name: %s | Roll: %d | Marks: %g\n", s.name, s.roll_no, s.marks);

    return 0;
}

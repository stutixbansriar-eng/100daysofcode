// Write a function that accepts a structure as parameter and prints its members.

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %g\n", s.name, s.roll_no, s.marks);
}

int main() {
    struct Student s;

    printf("Enter student details (Name Roll Marks): ");
    if (scanf("%49s %d %f", s.name, &s.roll_no, &s.marks) != 3) {
        return 0;
    }

    printStudent(s);

    return 0;
}

// Take two structs as input and check if they are identical.

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s1, s2;

    printf("Enter Student 1 details (Name Roll Marks): ");
    if (scanf("%49s %d %f", s1.name, &s1.roll_no, &s1.marks) != 3) {
        return 0;
    }

    printf("Enter Student 2 details (Name Roll Marks): ");
    if (scanf("%49s %d %f", s2.name, &s2.roll_no, &s2.marks) != 3) {
        return 0;
    }

    if (strcmp(s1.name, s2.name) == 0 && s1.roll_no == s2.roll_no && s1.marks == s2.marks) {
        printf("Same\n");
    } else {
        printf("Not Same\n");
    }

    return 0;
}

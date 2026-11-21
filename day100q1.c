// Use pointer to struct to modify and display data using -> operator.

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;
    struct Student *ptr = &s;

    printf("Enter student details (Name Roll Marks): ");
    if (scanf("%49s %d %f", ptr->name, &ptr->roll_no, &ptr->marks) != 3) {
        return 0;
    }

    printf("Modified Data: Name: %s | Roll: %d | Marks: %g\n", ptr->name, ptr->roll_no, ptr->marks);

    return 0;
}

// Find and print the student with the highest marks.

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

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

    int top_idx = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[top_idx].marks) {
            top_idx = i;
        }
    }

    printf("Topper: %s (Marks: %g)\n", students[top_idx].name, students[top_idx].marks);

    return 0;
}

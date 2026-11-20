// Use malloc() to allocate structure memory dynamically and print details.

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student *s = (struct Student *)malloc(sizeof(struct Student));
    if (s == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter student details (Name Roll Marks): ");
    if (scanf("%49s %d %f", s->name, &s->roll_no, &s->marks) != 3) {
        free(s);
        return 0;
    }

    printf("Name: %s | Roll: %d | Marks: %g\n", s->name, s->roll_no, s->marks);

    free(s);
    return 0;
}

// Define a struct with enum Gender and print person's gender.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER,
    UNKNOWN
};

struct Person {
    enum Gender gender;
};

static enum Gender parse_gender(const char *input) {
    const char *val = strchr(input, '=');
    if (val != NULL) {
        val++;
    } else {
        val = input;
    }

    char buf[32];
    size_t i = 0;
    for (; val[i] != '\0' && i < sizeof(buf) - 1; i++) {
        buf[i] = (char)toupper((unsigned char)val[i]);
    }
    buf[i] = '\0';

    if (strcmp(buf, "MALE") == 0) return MALE;
    if (strcmp(buf, "FEMALE") == 0) return FEMALE;
    if (strcmp(buf, "OTHER") == 0) return OTHER;
    return UNKNOWN;
}

int main() {
    char input[64];
    struct Person p;

    printf("Enter gender (MALE, FEMALE, OTHER): ");
    if (scanf("%63s", input) != 1) {
        return 0;
    }

    p.gender = parse_gender(input);

    switch (p.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
        default:
            printf("Invalid gender\n");
            break;
    }

    return 0;
}

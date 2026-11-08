// Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

enum Role {
    ADMIN,
    USER,
    GUEST,
    INVALID
};

static enum Role parse_role(const char *input) {
    char buf[32];
    size_t i = 0;
    for (; input[i] != '\0' && i < sizeof(buf) - 1; i++) {
        buf[i] = (char)toupper((unsigned char)input[i]);
    }
    buf[i] = '\0';

    if (strcmp(buf, "ADMIN") == 0) return ADMIN;
    if (strcmp(buf, "USER") == 0) return USER;
    if (strcmp(buf, "GUEST") == 0) return GUEST;
    return INVALID;
}

int main() {
    char role_input[32];

    printf("Enter role (ADMIN, USER, GUEST): ");
    if (scanf("%31s", role_input) != 1) {
        return 0;
    }

    enum Role role = parse_role(role_input);

    switch (role) {
        case ADMIN:
            printf("Welcome Admin! You have full access.\n");
            break;
        case USER:
            printf("Welcome User! You have standard access.\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
        default:
            printf("Invalid role!\n");
            break;
    }

    return 0;
}

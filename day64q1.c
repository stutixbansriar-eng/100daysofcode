// Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];

    printf("Enter a string: ");
    if (scanf("%s", s) != 1) {
        printf("0\n");
        return 0;
    }

    int n = strlen(s);
    int max_len = 0;
    int last_index[256];

    for (int i = 0; i < 256; i++) {
        last_index[i] = -1;
    }

    int start = 0;
    for (int i = 0; i < n; i++) {
        unsigned char ch = (unsigned char)s[i];
        if (last_index[ch] >= start) {
            start = last_index[ch] + 1;
        }
        last_index[ch] = i;
        int current_len = i - start + 1;
        if (current_len > max_len) {
            max_len = current_len;
        }
    }

    printf("%d\n", max_len);

    return 0;
}

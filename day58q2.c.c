#include <stdio.h>

enum numbers {
    A = 10,
    B = 11,
    C = 12,
    D = 13,
    E = 14
};

int main()
{
    enum numbers n;

    for (n = A; n <= E; n++)
    {
        printf("%d\n", n);
    }

    return 0;
}
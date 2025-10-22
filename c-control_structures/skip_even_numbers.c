#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 10; i++) {
        if (i % 2 == 0)
            continue;  // Skip the rest of the loop when i is even

        printf("%d\n", i);
    }

    return 0;
}


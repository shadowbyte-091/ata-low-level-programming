#include <stdio.h>

// Global variable with external linkage
int number = 42;

int main(void)
{
    printf("Number: %d\n", number);
    return 0;
}

/*
 * Explanation:
 * By default, global variables in C have external linkage.
 * This means they can be accessed from other source files
 * in the same program (unless marked 'static' to restrict visibility).
 */


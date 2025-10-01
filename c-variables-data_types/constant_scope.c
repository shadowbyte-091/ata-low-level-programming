#include <stdio.h>

// This program shows that const variables cannot be modified

int main(void)
{
    const int year = 2025;   // constant variable

    printf("Year: %d\n", year);

    // year = 2030;   // ❌ Uncommenting this line will cause a compilation error
    /*
     * Error: assignment of read-only variable 'year'
     * Explanation: 'const' makes the variable immutable, so we cannot change its value after initialization.
     */

    return 0;
}


#include <stdio.h>

#define PI_DEFINE 3.14   // Constant using #define

// This program demonstrates constants in C

int main(void)
{
    const float PI_CONST = 3.14;   // Constant using const keyword

    printf("PI using #define: %.2f\n", PI_DEFINE);
    printf("PI using const: %.2f\n", PI_CONST);

    return 0;
}



#include <stdio.h>

int main() {
    float f_num = 3.14f;       // float with 2 decimal places
    double d_num = 3.141592;   // double with 6 decimal places

    // Print with formatting
    printf("Float value: %.2f\n", f_num);     // prints 2 decimal places
    printf("Double value: %.6lf\n", d_num);   // prints 6 decimal places

    return 0;
}


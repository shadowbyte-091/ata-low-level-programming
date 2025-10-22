#include <stdio.h>

int main() {
    int n;
    unsigned long long factorial = 1;  // can hold big numbers
    int i = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        while (i <= n) {
            factorial = factorial * i;
            i++;
        }

        printf("Factorial of %d = %llu\n", n, factorial);
    }

    return 0;
}


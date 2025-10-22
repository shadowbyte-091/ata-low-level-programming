#include <stdio.h>

int main() {
    int n, i, isPrime = 1; // Assume prime initially

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("%d is not a prime number.\n", n);
        return 0;
    }

    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            isPrime = 0;   // Found a divisor
            break;         // No need to continue checking
        }
    }

    if (isPrime == 1)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}


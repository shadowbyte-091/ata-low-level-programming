#include <stdio.h>

int main() {
    int n;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n == 0) {
        count = 1;
    } else {
        if (n < 0)
            n = -n;  // convert negative number to positive

        do {
            n = n / 10;   // remove the last digit
            count++;      // increment the counter
        } while (n != 0);
    }

    printf("Number of digits: %d\n", count);

    return 0;
}


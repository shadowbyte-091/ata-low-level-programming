#include <stdio.h>

int main() {
    char str[] = "Hello";

    // Loop through each character until the null terminator '\0'
    for (int i = 0; str[i] != '\0'; i++) {
        printf("Character: %c, ASCII: %d\n", str[i], str[i]);
    }

    return 0;
}


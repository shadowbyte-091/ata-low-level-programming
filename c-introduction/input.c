#include <stdio.h>

int main() {
    char name[50];  // buffer to store the name

    printf("Enter your name: ");
    scanf("%49s", name);  // read input safely (max 49 chars)

    printf("Hello, %s!\n", name);

    return 0;
}


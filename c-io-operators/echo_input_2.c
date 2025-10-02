#include <stdio.h>

int main(void)
{
    char text[100];

    // Read a line from the user
    printf("Enter some text: ");
    fgets(text, sizeof(text), stdin);

    // Print it back using fputs
    fputs("You entered: ", stdout);
    fputs(text, stdout);

    return 0;
}


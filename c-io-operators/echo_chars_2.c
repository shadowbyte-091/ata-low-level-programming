#include <stdio.h>

int main(void)
{
    int ch;

    printf("Type something (press Enter to stop):\n");

    while ((ch = getchar()) != '\n')  // stop when user presses Enter
    {
        putchar(ch);  // print the character back immediately
    }

    putchar('\n'); // final newline after stopping

    return 0;
}


#include <stdio.h>

int main(void)
{
    char c;

    for (c = 'a'; c <= 'z'; c++)
    {
        putchar(c);
    }

    putchar('\n'); // newline at the end

    return 0;
}


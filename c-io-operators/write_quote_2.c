#include <stdio.h>

int main(void)
{
    FILE *fp;

    // Open file in write mode
    fp = fopen("quote.txt", "w");

    if (fp == NULL)
    {
        puts("Error opening file!");
        return 1;
    }

    // Write text into the file
    fputs("The journey of a thousand miles begins with a single step.", fp);

    // Close the file
    fclose(fp);

    return 0;
}


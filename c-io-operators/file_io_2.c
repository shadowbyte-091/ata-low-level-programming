#include <stdio.h>

int main(void)
{
    FILE *fp;
    char word[50];
    int ch;

    /* Step 1: Open file in write mode */
    fp = fopen("data.txt", "w");
    if (fp == NULL)
    {
        puts("Error opening file for writing.");
        return 1;
    }

    /* Step 2: Write using fprintf */
    fprintf(fp, "C programming is fun");

    /* Step 3: Add '!' using fputc */
    fputc('!', fp);

    /* Step 4: Close the file */
    fclose(fp);

    /* Step 5: Reopen in read mode */
    fp = fopen("data.txt", "r");
    if (fp == NULL)
    {
        puts("Error opening file for reading.");
        return 1;
    }

    /* Step 6: Read the first word using fscanf */
    fscanf(fp, "%s", word);

    puts("First word:");
    for (int i = 0; word[i] != '\0'; i++)
        putchar(word[i]);
    putchar('\n');

    /* Step 7: Read the rest using fgetc */
    puts("Rest of file:");
    while ((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);
    }

    /* Step 8: Close file */
    fclose(fp);

    return 0;
}


#include <stdio.h>

// This program demonstrates tokens in C by declaring variables and printing them

int main(void)
{
    int number = 25;     // int = keyword, number = identifier, = = operator, 25 = literal, ; = punctuation
    float value = 15.7;  // float = keyword, value = identifier, = = operator, 15.7 = literal, ; = punctuation
    char letter = 'A';   // char = keyword, letter = identifier, = = operator, 'A' = literal, ; = punctuation

    printf("Integer: %d\n", number);
    printf("Float: %.1f\n", value);
    printf("Char: %c\n", letter);

    return 0;
}


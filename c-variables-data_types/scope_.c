 #include <stdio.h>

// Global variable
int counter = 5;

int main(void)
{
    // Local variable
    int counter = 10;

    printf("Global counter: %d\n", ::counter); // ❌ C doesn’t have scope resolution like C++
    return 0;
}


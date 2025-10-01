#include <stdio.h>

// Global variable
int counter = 5;

// Function to access global variable
void printGlobal(void)
{
    printf("Global counter: %d\n", counter);
}

int main(void)
{
    // Local variable
    int counter = 10;

    printGlobal();   // prints global variable
    printf("Local counter: %d\n", counter);

    return 0;
}



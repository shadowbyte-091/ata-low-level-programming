#include <stdio.h>

// Function with a static variable
void incrementCounter(void)
{
    static int counter = 0;   // static variable, initialized only once
    counter++;
    printf("Counter: %d\n", counter);
}

int main(void)
{
    incrementCounter();  // First call
    incrementCounter();  // Second call
    incrementCounter();  // Third call

    return 0;
}


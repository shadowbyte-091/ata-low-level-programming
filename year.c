#include <stdio.h>
#include <time.h>

int main() {
    // Get the current time
    time_t t;
    time(&t);

    // Convert to local time structure
    struct tm *current_time = localtime(&t);

    // Print the current year (tm_year counts from 1900)
    printf("The year is %d\n", current_time->tm_year + 1900);

    return 0;
}


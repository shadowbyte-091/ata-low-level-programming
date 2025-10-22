#include <stdio.h>

int main() {
    int score;

    printf("Enter your score (0 - 100): ");
    scanf("%d", &score);

    if (score >= 0 && score <= 45) {
        printf("Grade: F\n");
    } 
    else if (score >= 46 && score <= 60) {
        printf("Grade: D\n");
    } 
    else if (score >= 61 && score <= 84) {
        printf("Grade: C\n");
    } 
    else if (score >= 85 && score <= 94) {
        printf("Grade: B\n");
    } 
    else if (score >= 95 && score <= 100) {
        printf("Grade: A\n");
    } 
    else {
        printf("Invalid score! Please enter a value between 0 and 100.\n");
    }

    return 0;
}


#include <stdio.h>

int main() {
    // Declare variables
    char name[] = "John";
    int age = 20;
    float gpa = 3.75;
    char grade = 'A';

    // First table (with float GPA)
    printf("Name\tAge\tGPA\tGrade\n");
    printf("%s\t%d\t%.2f\t%c\n\n", name, age, gpa, grade);

    // Second table (with GPA converted to int)
    printf("Name\tAge\tGPA(int)\tGrade\n");
    printf("%s\t%d\t%d\t\t%c\n", name, age, (int)gpa, grade);

    return 0;
}


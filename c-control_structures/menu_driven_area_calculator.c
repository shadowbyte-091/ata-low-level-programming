#include <stdio.h>

int main() {
    int choice;
    double radius, length, width, base, height, area;

    do {
        printf("\n--- AREA CALCULATOR ---\n");
        printf("1. Area of Circle\n");
        printf("2. Area of Rectangle\n");
        printf("3. Area of Triangle\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:  // Circle
                printf("Enter radius of the circle: ");
                scanf("%lf", &radius);
                if (radius > 0)
                    area = 3.14159 * radius * radius;
                else {
                    printf("Invalid input! Radius must be positive.\n");
                    break;
                }
                printf("Area of Circle = %.2lf\n", area);
                break;

            case 2:  // Rectangle
                printf("Enter length and width: ");
                scanf("%lf %lf", &length, &width);
                if (length > 0 && width > 0)
                    area = length * width;
                else {
                    printf("Invalid input! Both length and width must be positive.\n");
                    break;
                }
                printf("Area of Rectangle = %.2lf\n", area);
                break;

            case 3:  // Triangle
                printf("Enter base and height: ");
                scanf("%lf %lf", &base, &height);
                if (base > 0 && height > 0)
                    area = 0.5 * base * height;
                else {
                    printf("Invalid input! Base and height must be positive.\n");
                    break;
                }
                printf("Area of Triangle = %.2lf\n", area);
                break;

            case 4:  // Exit
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Please enter a number between 1 and 4.\n");
        }

    } while (choice != 4);

    return 0;
}


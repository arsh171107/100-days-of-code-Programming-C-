#include <stdio.h>

int main() {
    double length, width, area, perimeter;

    // Prompt user for input
    printf("Enter length of rectangle: ");
    scanf("%lf", &length);

    printf("Enter width of rectangle: ");
    scanf("%lf", &width);

    // Perform calculations
    area = length * width;
    perimeter = 2 * (length + width);

    // Display output
    printf("\n--- Rectangle Results ---\n");
    printf("Area = %.2lf\n", area);
    printf("Perimeter = %.2lf\n", perimeter);

    return 0;
}
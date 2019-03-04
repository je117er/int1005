#include <stdio.h>

int main() {
    printf("This program calculate the perimeter and the area of a rectangle\n");

    double length, width, perimeter, area; // Declare 3 floating points variables

    printf("Enter length and width: "); // Prompting message
    scanf("%lf%lf", &length, &width); // Read input into variables length and width

    // Calculate the perimeter and the area:
    perimeter = (length + width)*2;
    area = length * width;

    // Print the results:
    printf("The perimeter is %lf.\n", perimeter);
    printf("The area is %lf.\n", area);

    return 0;
}



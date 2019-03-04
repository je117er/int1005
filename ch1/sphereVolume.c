#include <stdio.h>

int main() 
{
    int radius;
    float coefficient = 4.0f/3.0f, pi = 3.14f, volume;

    printf("Enter radius: ");
    scanf("%d", &radius);

    printf("The volume of the sphere is %.2f", coefficient * pi * radius * radius * radius);

    return 0;
}

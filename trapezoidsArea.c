#include <stdio.h>

int main()
{
    int width, length, height, area;

    printf("Enter width, length, and height: \n");
    scanf("%d%d%d", &width, &length, &height);

    area = (width + length) * height / 2;
    
    printf("The area of the trapezoid is %d\n", area);

    return 0;
}


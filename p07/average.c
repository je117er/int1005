#include <stdio.h>

float average(float x, float y, float z);

int main(void)
{
    float x, y, z;

    printf("Enter three numbers: ");
    scanf("%f%f%f", &x, &y, &z);

    printf("The average is %2.f", average(x, y, z));

    return 0;
}

float average(float x, float y, float z)
{
    float average;
    
    return (x + y + z) / 3;
}




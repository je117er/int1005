#include <stdio.h>

#define DAY 30
#define HOUR 24

int main(void)
{
    int a [DAY] [HOUR];
    float total, average;
    for (int i = 0; i < DAY; i++)
        for (int j = 0; j < HOUR; j++)
            total += a [i] [j];
    average = total / (DAY*HOUR);

    printf("The average temperature of the month is %f", average);

    return 0;
}







#include <stdio.h>
#include <math.h>

int main(void)
{
    float n;
    int N;
    printf("Enter n: ");
    scanf("%f", &n);
    while (n < 0 || n != (int) n)
    {
        printf("Enter n again: ");
        scanf("%f", &n);
    }

    N = n;

    printf("n is %d", N);

    return 0;
}


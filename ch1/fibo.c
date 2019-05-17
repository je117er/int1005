#include <stdio.h>

#define N ((unsigned) sizeof(a)/sizeof(a[0]))

int main(void)
{
    int i;
    long a[40] = { [0] = 0, [1] = 1};

    printf("This program prints the first %d Fibonacci numbers.\n\n", N);
    for (i = 2; i < N; i++) 
    {
        a[i] = a[i-1] + a[i-2];
        printf(" %9ld\n", a[i]);
    } 

    return 0;
}




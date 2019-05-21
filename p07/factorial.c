#include <stdio.h>

int factorial(int n);

int main(void)
{
    int n, fac;
    printf("Enter n: ");
    scanf("%d", &n);

    while (n < 0) {
        printf("Enter n again: ");
        scanf("%d", &n);
    }

    fac = factorial(n);

    printf("Factorial of %d is %d", n, fac);

    return 0;
}

int factorial(int n)
{
    if (n == 0 || n == 1) return 1;
    else if (n > 1)
        return n*factorial(n-1);
}



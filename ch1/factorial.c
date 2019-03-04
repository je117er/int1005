#include <stdio.h>
#include <math.h>

int main() {
    int n, x;
    double power;
    unsigned long long factorial = 1;
    printf("enter n and x: ");
    scanf("%d%d", &n, &x);
    power = pow(x, n);

    if (n == 0)
        return 1;
    else {
        for (int i = 1; i <=n; i++) {
            factorial = factorial*i;
        }
    printf("%llu", factorial);
    printf("power is %f", power);
    }
}



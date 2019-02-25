#include <stdio.h>
#include <math.h>

int factorial(int n) {
    int factorial = 1;

    if (n == 0)
        return 1;
    else {
        for (int i = 1; i <=n; i++) {
            factorial = factorial*i;
        }
    return factorial;
    }
}

int main() {
    double x, sum = 1;
    int n;
    printf("Enter x and n: ");
    scanf("%lf%d", &x, &n);

    if (x == 0)
        printf("The sum is %lf", sum);
    else {
        for (int i = 1; i <=n; i++) {
            sum = sum + pow(x, i)/factorial(i);
        }
        printf("The sum is %lf", sum);
    }
}

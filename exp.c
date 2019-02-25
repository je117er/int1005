#include <stdio.h>
#include <stdlib.h>
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

int sumOfSquares(double x, int n) {
    double  sum = 1;

    if (x == 0)
        return sum;
    else {
        for (int i = 1; i <=n; i++) {
            sum = sum + pow(x, i)/factorial(i);
        }
        return sum;
    }
}

int main() {
    double x, sum = 1;
    double error = 0.00001;
    printf("Enter x: ");
    scanf("%lf", &x);

    for (int i = 1; abs(exp(x) - sum) >= error; i++) {
        sum = sumOfSquares(x, i);
    }
    return sum;
}
            


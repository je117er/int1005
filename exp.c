#include <stdio.h>
#include <math.h>

double cosine(double x, int n) {
    double sum = 1;
    for (int i = n; i > 0; --i) {
        sum = 1 - (x*x*sum)/((2*i - 1)*(2*i));
    }
    //printf("Cos of %lf is %f", x, sum);
}

int main() {
    int n = 0;
    double cosine1, x;
    double error = 0.00001;
    printf("Enter x: ");
    scanf("%lf", &x);
    cosine1 = cosine(x, n);
    while (fabs(cos(x) - cosine1) > error) {
        ++n;
        cosine1 = cosine(x, n);
    }
    printf("Cos of %lf is %lf", x, cosine1);
}
         

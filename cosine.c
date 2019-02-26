#include <stdio.h>
#include <math.h>

double cosine(double x, int n) {
    double sum = 1;
    for (int i = n; i > 0; i--) {
        sum = 1 - (x*x*sum)/((2*i - 1)*(2*i));
    }
    //printf("Cos of %lf is %f", x, sum);
    return sum;
}

int main() {
    int i = 0;
    double cosine1, x;
    double error = 0.00001;
    printf("Enter x: ");
    scanf("%lf", &x);
    /*
    printf("Cos(x) is %lf\n", cos(x));
    printf("Cosine is %lf", cosine1);
    */
    while (fabs(cos(x) - cosine(x, i)) > error) {
        i++;
        cosine1 = cosine(x, i);
    }
    double difference = fabs(cos(x) - cosine(x, i));
    printf("Cos of %lf is %lf.\n", x, cosine1);
    printf("The difference between cos(x) and cosine(x, i) is %lf.\n", difference);
    printf("Cosine was calculated up to the %dth term.", i);
}
         

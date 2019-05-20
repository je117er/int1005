#include <stdio.h>
#include <math.h>

#define error 0.00001

double sine(double x);

int main(void)
{
    double x;
    double sin;

    sin = sine(x);

    return 0;
}

double sine(double x)
{
    printf("Enter x: ");
    scanf("%lf", &x);

    double sum = x, term = x;
    int i = 1;

    while (fabs(term) > error) {
        term =  -(term*x*x) / ((2*i) * (2*i+1));
        sum = sum + term;
        i++;
    }

    printf("The sine of %lf is: ", sum);
    printf("Term is %lf", term);

    return 0;
}

#include <stdio.h>
#include <math.h>
#define first_term 1

double exponent(double x);

int main(void)
{
    double x;
    double exp;
    printf("Enter x: ");
    scanf("%lf", &x);

    exp = exponent(x);

    return 0;
}

double exponent(double x)
{
    double error = 0.00001;
    double term = first_term, sum = first_term;
    int i = 1;

    while (fabs(term) > error) {
        term = term * x/i;
        sum = sum + term;
        i++;
    }

    printf("The value is %lf\n", sum);
    printf("Term is %lf", term);

    return 0;
}

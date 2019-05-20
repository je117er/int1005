#include <stdio.h>
#include <math.h>

#define first_term 1
#define error 0.00001

double cosine(double x);
int main(void)
{
    double x;
    double cos;

    printf("Enter x: ");
    scanf("%lf", &x);

    cos = cosine(x);

    return 0;
}
double cosine(double x)
{

    double sum = first_term, term = first_term;
    int i = 1;

    while (fabs(term) > error) {
        term = (term * (-x*x))/ ((2*i)*(2*i-1));
        sum = sum + term;
        i++;
    }

    printf("The cosine is %lf\n", sum);
    printf("Term is %lf", term);

    return 0;
}

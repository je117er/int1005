#include <stdio.h>
#include <math.h>

int main() {
    double x, sum;
    double term;
    double error = 0.00001;
    int i = 1;

    printf("Enter x: ");
    scanf("%lf", &x);
    
    term = x;
    sum = x;
    while (fabs(term) > error) {
        term = (term*(-x)*x)/((2*i+1)*(2*i));
        sum = sum + term;
        i++;
    }
    printf("Sin of %lf is %lf.\n", x, sum);
    printf("Term is %f", term);
}

/* This breaks at x = 35. Thought I should be doing this since sine is not that much different from cosine
 */

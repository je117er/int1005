#include <stdio.h>
#include <math.h>

int main() {
    double x, sum = 1;
    double term = 1;
    double error = 0.00001;
    int i = 1;

    printf("Enter x: ");
    scanf("%lf", &x);
    

    while (fabs(term) > error) {
        term = (term * x)/i;
        sum = sum + term;
        i++;
    }
    printf("Exp of %lf is %lf.\n", x, sum);
    printf("Term is %lf.", term);
}


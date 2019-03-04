#include <stdio.h>
#include <math.h>

int main() {
    long double x, sum = 1;
    double term = 1;
    double error = 0.00001;
    int i = 1;

    printf("Enter x: ");
    scanf("%Lf", &x);
    

    while (fabs(term) > error) {
        term = (term * x)/i;
        sum = sum + term;
        i++;
    }
    printf("Exp of %1.0Lf is %1.0Lf.\n", x, sum);
    printf("Term is %lf.", term);
}

/* Breaks at x = 714
 * I still don't understand why cosine breaks much faster, might be because of its alternating series
 */

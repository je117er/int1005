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
        term = (term*(-x)*x)/((2*i - 1)*(2*i));
        sum = sum + term;
        i++;
    }
    printf("Cos of %lf is %lf.\n", x, sum);
    printf("Term is %lf.", term);
}

/* Code is uncommented again. Turns out I misunderstood the problem, the error here is Taylor error,
 * not using the cosine function from the math library to sandwich the difference less than error.
 */

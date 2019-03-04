#include <stdio.h>

int main() {
    double x, y;
    double a1, b1, c1, a2, b2, c2;
    double detA, detX, detY;

    printf("Enter coefficients a, b, c of the first linear equation: ");
    scanf("%lf%lf%lf", &a1, &b1, &c1);
    printf("Enter coefficients a, b, c of the second linear equation: ");
    scanf("%lf%lf%lf", &a2, &b2, &c2); 

    detA = a1*b2 - a2*b1;
    detX = c1*b2 - c2*b1;
    detY = a1*c2 - a2*c1;

    x = detX/detA;
    y = detY/detA;
    
    printf("The number of chicken and dogs are: %lf and %lf, respectively", x, y);

    return 0;
}

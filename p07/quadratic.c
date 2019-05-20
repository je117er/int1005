#include <stdio.h>
#include <math.h>

float solution(float a, float b, float c);

int main(void)
{
    float a, b, c;
    float sol;
    printf("Enter a, b, c: ");
    scanf("%f", &a);
    while (a == 0) {
            printf("Enter a again: ");
            scanf("%f", &a);
        }

    scanf("%f%f", &b, &c);

    sol = solution(a, b, c);

    //printf("The solutions are: ", sol);
     
    return 0;
}


float solution(float a, float b, float c)
{
    float delta = b*b - 4*a*c;
    float x1 = (-b + sqrt(delta)) / (2*a);
    float x2 = (-b - sqrt(delta)) / (2*a);

    if (delta < 0)
        printf("The equation has no solution.");
    else if (delta = 0)
        printf("The equation has root1 = root2 = %f", -b/(2*a));
    else
        printf("The equatin has two distintive roots, root1 = %1.2f, root 2 = %1.2f", x1, x2);

    return 0;
}


    



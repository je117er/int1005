#include <stdio.h>

void avg_sum(double a[], int n, double *avg, double *sum);

int main(void)
{
    int n;
    printf("How many numbers does you array have? ");
    scanf("%d", &n);

    double a[n], average, sum;
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
        scanf("%le", &a[i]);

    avg_sum(a, n, &average, &sum);

    printf("The average is %f\n", average);
    printf("The sum is %f", sum);

    return 0;
}
void avg_sum(double b[], int n, double *avg, double *sum)
{
    int i;
    *sum = 0.0;
    for (i = 0; i < n; i++)
        *sum += b[i];
    *avg = *sum/n;
}



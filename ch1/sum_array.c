#include <stdio.h>

#define LEN 100

int sum_array(int a[], int n)
{
    int i, sum = 0;

    for (i = 0; i < n; i++)
        sum += a[i];

    return sum;
}

int main(void)
{
    int b[LEN], total;
    total = sum_array(b, 40);
    printf("The sum is %d", total);

    return 0;
}

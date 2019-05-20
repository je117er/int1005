#include <stdio.h>

int sumOfSquares(int a[], int n);
int split(int a[], int left, int right);
void quicksort(int a[], int left, int right);

int main(void)
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements of the array: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int sum;
    sum = sumOfSquares(a, n);

    quicksort(a, 0, n - 1);

    printf("The sum of squares of all positive elements is %d\n", sum);
    printf("Array in sorted order: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}

int sumOfSquares(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0)
            sum += a[i]*a[i];
    }

    return sum;
}


void quicksort(int a[], int left, int right)
{
    int middle;

    if (left >= right) return;
    middle = split(a, left, right);
    quicksort(a, left, middle - 1);
    quicksort(a, middle + 1, right);
}

int split(int a[], int left, int right)
{
    int pivot = a[left];

/*    for (;;) {
        while (left < right && a[right] >= pivot) 
            right--;
        a[left] = a[right];
        if (left >= right) break;

        while (left < right && a[left] <= pivot) 
            left++;
        a[right] = a[left];
        if (left >= right) break;

    } */

    while (left < right) {
        if (a[right] <= pivot)
            right--;
        if (left >= right) break;
        a[left] = a[right];

        if (a[left] >= pivot)
            left++;
        if (left >= right) break;
        a[right] = a[left];
    }
    a[left] = pivot;
    return left;
}

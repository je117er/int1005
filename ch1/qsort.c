#include <stdio.h>

void quicksort(int a[], int l, int r);
int split (int a[], int l, int r);

int main(void)
{
    int n; 
    printf("How many numbers do you want to sort? ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d numbers to be sorted\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    quicksort(a, 0, n - 1);

    printf("In sorted order: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}

void quicksort(int a[], int l, int r)
{
    int middle;

    if (l >= r) return;
    middle = split(a, l, r);
    quicksort(a, l, middle - 1);
    quicksort(a, middle + 1, r);
}

int split(int a[], int l, int r)
{
    int pivot = a[l];

    for (;;) {
        while (l < r && pivot <= a[r])
            r--;
        if (l >= r) break;
        a[l] = a[r];

        while (l < r && pivot >= a[l])
            l++;
        if (l >= r) break;
        a[r] = a[l];
    }

    a[r] = pivot;
    return r;
}

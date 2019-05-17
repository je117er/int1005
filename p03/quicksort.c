#include <stdio.h>

void quicksort(int a[], int l, int r);
int split (int a[], int l, int r);

int main(void)
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) 
        scanf("%d", &a[i]);

    quicksort(a, 0, n - 1);

    printf("In sorted order, from min to max: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    printf("In sorted order, from max to min: ");
    for (int i = n - 1; i >= 0; i--)
        printf("%d ", a[i]);

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
    
    for(;;) {
        while (l < r && a[r] >= pivot)
            r--;
        if (l >= r) break;
        a[l] = a[r]; 
        while (l < r && a[l] <= pivot)
            l++;
        if (l >= r) break;
        a[r] = a[l];
    }

    a[l] = pivot;
    return r;
}

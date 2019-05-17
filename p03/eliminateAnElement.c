#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int nthElement, newSize = n - 1;
    printf("Enter the index of the element: ");
    scanf("%d", &nthElement);
    if (nthElement == n || nthElement == 0)
        exit(0);

    for (int i = nthElement - 1; i < n; i++) {
        a[i] = a[i + 1];
    }

    for (int i = 0; i < newSize; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}

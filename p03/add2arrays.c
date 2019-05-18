#include <stdio.h>

int main(void)
{
    int n, m;
    printf("Enter the numbers of elements of each array: ");
    scanf("%d%d", &n, &m);

    int a[n], b[m], c[n+m];
    printf("Enter %d elements of the first array: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter %d elements of the second array: ", m);
    for (int i = 0; i < n; i++)
        scanf("%d", &b[i]);

    for (int i = 0; i < n; i++) {
        c[i] = a[i];
        printf("%d ", c[i]);
    }
    for (int i = n; i < n + m - 1; i++) {
        c[i] = b[i - n];
        printf("%d ", c[i]);
    }

    return 0;
}

        

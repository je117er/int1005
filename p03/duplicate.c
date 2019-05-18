/* To do: rewrite this prog using qsort (link to the other file and rewrite qsort) */
#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                for (int k = j; k < n; k++)
                    a[k] = a[k+1];
                n--;
                j--;
            }
        }
    }

    printf("The elements are: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}


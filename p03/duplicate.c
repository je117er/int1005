#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n], size = n;

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] == a[j]) {
                a[i] = a[i + 1];
                size--;
            }
    for (int i = 0; i < size; i++)
        printf("%d ", a[i]);

    return 0;
}


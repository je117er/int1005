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

    printf("The elements of the array are: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
        

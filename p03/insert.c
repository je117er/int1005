#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n+1];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int elementPosition, element, t;
    printf("Enter the position of the element to be inserted ");
    scanf("%d", &elementPosition);
    printf("Enter the element: ");
    scanf("%d", &element);


    a[n] = element;
    t = a[n];

    for (int i = n; i > elementPosition - 1; i--) 
        a[i] = a[i - 1];
    a[elementPosition - 1] = t;

    for (int i = 0; i < n + 1; i++)
        printf("%d ", a[i]);

    return 0;
}





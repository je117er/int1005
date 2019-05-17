#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    if (n == 0)
        printf("0");
    else {
        int sum = 1, firstElement = 0, secondElement = 1;
        printf("%d %d ", firstElement, secondElement);

        for (int i = 1; i < n; i++) {
            sum = firstElement + secondElement;
            firstElement = secondElement;
            secondElement = sum;
            printf("%d ", sum);
        }
        printf("\n");

        int a[n], element;
        a[0] = 0; a[1] = 1;
        printf("%d %d ", a[0], a[1]);
        for (int i = 2; i < n + 1; i++) {
            a[i] = a[i - 1] + a[i - 2];
            printf("%d ", a[i]);
        }
    }
    
    return 0;
}

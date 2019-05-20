#include <stdio.h>

int array1(int m, int n);
int array2(int u, int v);

int main(void)
{
    int m = 3, n = 2, u = 2, v = 4;

    array1(m, n);
    array2(u, v);
/*    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            printf("%d ", array1[i][j]);
    printf("\n");

    for (int i = 0; i < u; i++)
        for (int j = 0; j < v; j++)
            printf("%d ", array2[i][j]);
    printf("\n"); */

    return 0;
}

int array1(int m, int n)
{
    int a[m][n];
    printf("Enter the elements of array 1: ");
    for (int i = 0; i < m; i++)
        for (int j = 0; i < n; j++)
            scanf("%d", &a[i][j]);

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            printf("%d ", a[i][j]);

    return 0;
}

int array2(int u, int v)
{
    printf("Enter the elements of array 2: ");
    int a[u][v];
    for (int i = 0; i < u; i++)
        for (int j = 0; i < v; j++)
            scanf("%d", &a[i][j]);

    for (int i = 0; i < u; i++)
        for (int j = 0; j < v; j++)
            printf("%d ", a[i][j]);

    return 0;
}




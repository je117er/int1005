#include <stdio.h>

int array1(int m, int n)
{
    int a[m][n];
    printf("Enter %d elements of the array: ", m*n);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d ", &a[i][j]);

    return 0;
}

int array2(int u, int v)
{
    int a[u][v];
    printf("The %d elements of the arrays are: \n", u*v);
    for (int i = 0; i < u; i++) {
        for (int j = 0; j < v; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    printf("\n");

    return 0;
}


int main(void)
{
    array1(2, 3);
    array2(2, 3);
    array1(3, 4);
    array2(3, 4);

    return 0;
}


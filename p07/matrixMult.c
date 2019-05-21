#include <stdio.h>

//int matrixMul(int a[][], int b[][], int firstRow, int firstCol, int secondRow, int secondCol);

int matrixMul(int firstRow, int firstCol, int secondRow, int secondCol, int a[][firstCol], int b[][secondCol]);

int main(void)
{
    int m, n;
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);

    int a[m][n], b[n][m];
    printf("Enter %d entries of first matrix: ", m*n);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    printf("Enter %d entries of second matrix: ", m*n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &b[i][j]);


    matrixMul(m, n, n, m, a, b);

    return 0;
}

int matrixMul(int firstRow, int firstCol, int secondRow, int secondCol, int a[][firstCol], int b[][secondCol])
{
    int mult[firstRow][secondCol], sum = 0;

    printf("The multiplication of two matrices are: \n");
    for (int i = 0; i < firstRow; i++) {
        for (int j = 0; j < secondCol; j++) {
            for (int k = 0; k < firstCol; k++) {
                sum += a[i][k] * b[k][j];
            }
            printf("%d ", sum);
            sum = 0;
        }
        printf("\n");
    }

    return 0;
}

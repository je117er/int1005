#include <stdio.h>

int callSquare(int n, int a[][n]);
int mult(int n, int a[][n], int b[][n]);

int main(void)
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int a[n][n], b[n][n], c[n][n];
    callSquare(n, a);
    callSquare(n, b);
    callSquare(n, c);

    int d[n][n], e[n][n];
    mult(n, a, mult(n, b, c));
    /*for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", mult(n, mult(n, a, b),c)[i][j]);
        printf("\n");
    }*/

    return 0;
}

int callSquare(int n, int a[][n])
{

    printf("Enter %d elements of the matrix: ", n*n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
}

int mult(int n, int a[][n], int b[][n])
{
    int sum = 0, c[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                sum += a[i][k] * b[k][j];
            }
            c[i][j] = sum;
            printf("%d ", sum);
            sum = 0;
        }
        printf("\n");
    }
}






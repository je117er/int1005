#include <stdio.h>

int main()
{
    int x, value;

    printf("Enter x: ");
    scanf("%d", &x);

    value = ((((3*x+2)*x -5)*x -1)*x + 7)*x -6;

    printf("The value of the polynomial is %d", value);

    return 0;
}

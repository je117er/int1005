#include <stdio.h>

int main(void)
{
    int x[5] = {1, 2, 3, 4, 5};
    int* ptr;

    ptr = &x[2];

    printf("*ptr = %d \n", *ptr);
    printf("*ptr + 1 = %d \n", *ptr + 1);
    printf("*ptr - 2 = %d \n", *ptr -2);

    return 0;
}

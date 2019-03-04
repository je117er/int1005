#include <stdio.h>

int main() {
    int integer1, integer2, sum;

    printf("Enter two integers: ");
    scanf("%d%d", &integer1, &integer2);

    sum = integer1 + integer2;

    printf("The sum of %d and %d is %d.\n", integer1, integer2, sum);

    return 0;
}

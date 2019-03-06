#include <stdio.h>
#include <math.h>

int main(int n) {
    printf("Enter number n: ");
    scanf("%d", &n);

    if (sqrt(n) == (n / (sqrt(n)))) // Another alternative is to compare with rounded n squared
        printf("%d is a perfect square", n);
    else
        printf("%d is not a perfect square", n);
}
    

#include <stdio.h>
#include <math.h>

int main(int n) {
    printf("Enter number n: ");
    scanf("%d", &n);

    if (sqrt(n) == round(sqrt(n)))
        printf("%d is a perfect square", n);
    else
        printf("%d is not a perfect square", n);
}
    

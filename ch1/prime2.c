#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if (num < 2) return 0;
    else if (num % 2 == 0 && num > 2) return 0;
    else if (num == 2 || num == 3) return 1;
    else {
        // Suppose if we didn't add 1 to maxFactor here, using n = 9, then the loop would terminate immediately and gives 9
        for (int i = 3; i*i < num + 1; i+=2) {
            // Not much of a difference, just squared sides of the equation
            if (num % i == 0)
                return 0;
        }
    }
    return 1;
}

int main() {
    int a, b;
    printf("Enter a and b: ");
    scanf("%d%d", &a, &b);
    for (int i = a; a<=i && i<= b; i++) {
        if (isPrime(i) == 1) 
            printf("%d\n", i);
    }
}

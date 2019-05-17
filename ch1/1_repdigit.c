/* Checks numbers for repeated digits */

#include <stdbool.h>    /* C99 only */
#include <stdio.h>

int main(void)
{
    bool digit_seen[10] = {false};
    int digit;
    long long n;

    printf("Enter a number: ");
    scanf("%lld", &n);
    printf("The size of n is %zu\n", sizeof(n));
    printf("The size of i is %zu\n", sizeof(int));

    printf("Repeated digit(s): ");
    while (n > 0) {
        digit = n % 10;
        if (digit_seen[digit]) {
            printf("%d ", digit);
            digit_seen[digit] = false;
            n /= 10;
        }
        else {
            digit_seen[digit] = true;
            n /= 10;
        }
    }
   
    return 0;
}

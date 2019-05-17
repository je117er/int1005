/* Checks numbers for repeated digits */

#include <stdbool.h>    /* C99 only */
#include <stdio.h>

int main(void)
{
    bool digit_seen[10] = {false};
    int digit;
    int occurrences[10] = {0};
    long long n;

    printf("Enter a number: ");
    scanf("%lld", &n);
    printf("The size of n is %zu\n", sizeof(n));
    printf("The size of i is %zu\n", sizeof(int));

    printf("Digit:       ");
    for (int j = 0; j < 10; j++)
        printf("%3d", j);
    printf("\n");

    while (n > 0) {
        digit = n % 10;
        occurrences[digit] = 1;
        if (digit_seen[digit]) {
            occurrences[digit] += 1;
            n /= 10;
        }
        else {
            digit_seen[digit] = true;
            n /= 10;
        }
    }
    printf("Occurrences: ");
    for (int i = 0; i < 10; i++)
        printf("%3d", occurrences[i]);
   
    return 0;
}

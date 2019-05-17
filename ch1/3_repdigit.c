/* Checks numbers for repeated digits */

#include <stdbool.h>    /* C99 only */
#include <stdio.h>

int main(void)
{
    bool digit_seen[10] = {false};
    int digit, n;
    int occurrences[10] = {0};

    printf("How many numbers do you want to test? ");
    scanf("%d", &n);

    long a[n];

    printf("Enter the numbers: ");
    for (int i = 0; i < n; i++) {
        scanf("%ld", &a[i]);
        if (a[i] < 0)
            break;
    }

    printf("The size of n is %zu\n", sizeof(n));
    printf("The size of i is %zu\n", sizeof(int));

    printf("Digit:       ");
    for (int j = 0; j < 10; j++)
        printf("%3d", j);
    printf("\n");

    for (int b = 0; b < n; b++) {
        while (a[b] > 0) {
            digit = a[b] % 10;
            occurrences[digit] = 1;
            if (digit_seen[digit]) {
                occurrences[digit] += 1;
                a[b] /= 10;
            }
            else {
                digit_seen[digit] = true;
                a[b] /= 10;
            }
        }
    }
    printf("Occurrences: ");
    for (int i = 0; i < 10; i++)
        printf("%3d", occurrences[i]);
   
    return 0;
}

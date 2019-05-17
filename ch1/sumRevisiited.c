/* 
 * Sum of a series of numbers using long variables
 */
 

#include <stdio.h>

int main(void) {
    long number, sum = 0;

    printf("This program sums a series of integers.\n");
    printf("Enter integers (0 to terminate): ");

    scanf("%ld", &number);
    while (number != 0) {
        sum += number;
        scanf("%ld", &number);
    }
    printf("The sum is: %ld\n", sum);

    return 0;
}

/*
 * Sum all the integers from 1 to 1000, that are divisible by 13, 15 or 17, but not by 30
 */

#include <stdio.h>

int main() {
    int sum = 0;    // Set the inial sum to zero
    int number = 1; // Set the lower bound

    // Compute the sum:
    for (int i=0; i<1000; i++) {
        if ((i % 13 == 0 || i % 15 == 0 || i % 17 == 0) && i % 30 != 0) {
            sum += i;
        }
    }
    

    // Print the results:
    printf("The sum is %d.\n", sum);

    return 0;
}



/*
 * Sum from 1 to an upperbound using a while-loop 
 */
 
#include <stdio.h>

int main() {
    int sum = 0; // Declare an int variable sum to accumulate the numbers
                 // Set the initial sum to 0
    int lowerbound, upperbound, firstLowerBound; // Sum from lowerbound to upperbound
    
    printf("Enter the lower bound and upper bound: ");
    scanf("%d%d", &lowerbound, &upperbound);
    firstLowerBound = lowerbound; // Store the first lower bound entered to print in the result later

    // Use the while loop to repeatedly add 1, 2,... up to upperbound
    while (lowerbound <= upperbound) {
        sum = sum + lowerbound;
        ++lowerbound;
    }

    // Print the result
    printf("The sum from %d to %d is %d.\n", firstLowerBound, upperbound, sum);

    return 0;
}

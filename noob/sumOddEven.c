/*
 * Sum the odd and even numbers from 1 to an upperbound
 */

#include <stdio.h>

int main() {
    int sumOdd = 0; // For accumulating odd numbers, init to 0
    int sumEven = 0; // For accumulating even numbers, init to 0
    int originalLowerBound, lowerBound, upperbound; // Sum from lower bound to upper bound

    // Prompt user for a lower bound and an upperbound
    printf("Enter the lowerbound and upperbound: ");
    scanf("%d%d", &lowerBound, &upperbound);    // Use %d to read an int
    
    // Set the original lower bound to the lower bound for printing the results later
    originalLowerBound = lowerBound;

    // Use a while loop to repeatedly add lowerbound, lowerbound + 1,... to upperbound
    while (lowerBound <= upperbound) {
        if (lowerBound %  2 == 0) { // even number
            sumEven = sumEven + lowerBound;
        } else {
            sumOdd = sumOdd + lowerBound;
        }
        ++lowerBound; // increment lowerbound by 1
    }

    // Print the results
    printf("The sum of odd numbers is %d.\n", sumOdd);
    printf("The sum of even numbers is %d.\n", sumEven);
    printf("The difference is %d.\n", (sumOdd - sumEven)); // So you can calculate using preexisting variables inside a printf function? Cool!

    return 0;
}

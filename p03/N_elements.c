#include <stdio.h>

int main(void)
{
    // Ask the user for the number of elements
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Ask user to input the elements
    int a[n], i; 
    printf("Enter the %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Initialize the sum of all elements and the sum of all positive elements to 0
    // Initialize the maximum and minimum elements of the array to 0
    int sum = 0, sumPositive = 0, max = a[0], min = a[0];

    // Compute sum and sumPositive
    for (i = 0; i < n; i++) {
        if (a[i] > 0) {
            sumPositive += a[i];
            sum += a[i];
        }
        sum += a[i];
    }

    // Find the max and min elements
    for (i = 0; i < n; i++) {
        if (a[i] > max)
            max = a[i];
        else if (a[i] < max)
            min = a[i];
    }

    // Print the results
    printf("The sum of the elements is %d\n", sum);
    printf("The sum of the positive elements is %d\n", sumPositive);
    printf("Max is %d and min is %d", max, min);

    return 0;
}

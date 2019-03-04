#include <stdio.h>

int main() 
{
    int amount;
    int twenty, ten, five, one;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    twenty = amount / 20;
    ten = (amount - twenty * 20) / 10;
    five = (amount - twenty * 20 - ten * 10) / 5;
    one = (amount - twenty * 20 - ten * 10 - five * 5) / 1;

    printf("$20 bills: %d\n$10 bills: %d\n $5 bills: %d\n $1 bills: %d", twenty, ten, five, one);

    return 0;
}

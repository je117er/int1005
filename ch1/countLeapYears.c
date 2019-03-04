/*
 * This program prints all the leap years between AD1 and AD2010, and also prints the number of leap years
 */

#include <stdio.h>

int main() {
    int count = 0;
    for (int i = 1; i<=2010; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) {
            count += 1;
            printf("%d\t", i);
        }
    }

    return 0;
}

#include <stdio.h>

/* count characters in input; 2nd version */

int main() {
    double count;
    for (count = 0; getchar() != EOF; ++count) {
        ;   // The body of the loop is empty but C grammar requires that a for statement have a body so the isolated semicolon, called a null statement, is there to satisfy that requirement, so we have put it on a separate line to make it visible
    printf("%.0f\n", count);
    }
} 
// Can get the count, apparently????
// It finally works, i put some parentheses around the body of the loop statement
// Keep in mind that if you don't inlucde the printf statement in the body of the loop, the counting would not work.

#include <stdio.h>

int main() {
    int c, newline = 0, blank = 0, tab = 0;

    while ((c = getchar()) != EOF) { // c = getchar() was put inside parentheses because != gets a priority over =
        if (c == '\n')
            ++newline;
        if (c == ' ')
            ++blank;
        if (c == '\t')
            ++tab;
        printf("New lines are %d.\n New tabs are %d.\n Blanks are %d.\n", newline, tab, blank);
    }
}

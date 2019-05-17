#include <stdio.h>

#define ROW 8
#define COLUMN 8 

int main(void) {
    int checker [ROW] [COLUMN];

    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COLUMN; j++) {
            if ((i + j) % 2 == 0)
                checker [i] [j] = 'B';
            else
                checker [i] [j] = 'R';
            printf("%c ", checker [i] [j]);
        }
        printf("\n");
    }

    return 0;
}



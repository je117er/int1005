#include <stdio.h>

int main(void)
{
    char a[40];
    int i, k, size_number;

    printf("Enter the message: ");
    scanf("%c", &a[i]);

    const char number[] = { [4] = 'A', [8] = 'B', [3] = 'E', [1] = 'I', [0] = 'O', [5] = 'S' };
    size_number = (int) sizeof(number)/sizeof(number[0]);

    for (i = 0; i < 40; i++) {
        if (a[i] < 122 && a[i] > 97) 
            a[i] -= 32;
        for (k = 0; k < size_number; k++) {
            if (a[i] == number[k])
                a[i] = k;
        }
        printf("%c", a[i]);
    }
    for (int j = 0; j < 10; j++)
        printf("!");

    return 0;

}

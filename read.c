#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    FILE *fp;

    if ((fp = fopen("/home/jodi/int1005/program.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fscanf(fp, "%d", &num);

    printf("Value of n=%d", num);
    fclose(fp);

    return 0;
}

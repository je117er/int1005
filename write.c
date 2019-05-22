#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    FILE *fp;
    fp = fopen("/home/jodi/int1005/program.txt", "w");

    if (fp == NULL)
    {
        printf("Error!");
        exit(1);
    }

    printf("Enter num: ");
    scanf("%d", &num);

    fprintf(fp, "%d", num);
    fclose(fp);

    return 0;
}


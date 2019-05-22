#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    if (argc != 2)
    {
        printf("usage; canopen filename\n");
        exit(0);
    }

    if ((fp = fopen(argv[1], "r")) == NULL) 
    {
        printf("%s cannot be opened\n", argv[1]);
        exit(0);
    }

    printf("%s can be opened", argv[1]);
    fclose(fp);
    return 0;
}


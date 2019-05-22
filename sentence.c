#include <stdio.h>
#include <stdlib.h> /* FOR EXIT() function */

int main()
{
    char sentence[1000];
    FILE *fp;

    if ((fp = fopen("/home/jodi/int1005/program.txt", "w")) == NULL) {
        printf("Error!");
        exit(1);
    }

    printf("Enter a sentence:\n");
    gets(sentence);

    fprintf(fp, "%s", sentence);
    fclose(fp);

    return 0;
}


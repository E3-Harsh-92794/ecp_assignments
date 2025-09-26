#include <stdio.h>

int main(int argc, char *argv[]) 
{
    FILE *src, *dest;
    char ch;

    if (argc != 3) 
{
        printf("Usage: %s source.txt target.txt\n", argv[0]);
        return 1;
    }

    src = fopen(argv[1], "r");
    if (src == NULL) {
        printf("Source file not found!\n");
        return 1;
    }

    dest = fopen(argv[2], "w");
    if (dest == NULL) {
        printf("Cannot open target file!\n");
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) {

        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied using command line arguments.\n");
    return 0;
}


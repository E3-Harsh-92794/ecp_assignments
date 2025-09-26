#include <stdio.h>

void copyFile(FILE *src, FILE *dest) 
{
    char ch;
    while ((ch = fgetc(src)) != EOF) 
{
        fputc(ch, dest);
    }
}

int main() 
{
    FILE *src, *dest;
    char filename[50];

    src = fopen("source.txt", "r");
    if (src == NULL) {
        printf("Source file not found!\n");
        return 1;
    }

    dest = fopen("destination.txt", "w");
    if (dest == NULL) {
        printf("Cannot open destination file!\n");
        return 1;
    }

    copyFile(src, dest);

    fclose(src);
    fclose(dest);

    printf("File copied successfully.\n");
    return 0;
}


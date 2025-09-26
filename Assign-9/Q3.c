#include <stdio.h>

int main() 
{
    FILE *src, *dest;
    char buffer[256];

    src = fopen("source.txt", "r");
    dest = fopen("destination.txt", "w");

    if (src == NULL || dest == NULL) 
{
        printf("Error opening file!\n");
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), src) != NULL) 
{
        fputs(buffer, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied line by line successfully.\n");
    return 0;
}


#include <stdio.h>
#include <ctype.h>

int main() 
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (isalpha(ch)) 
{
        char result = ch ^ 32;  // Toggle case
        printf("Original: %c, After XOR with 32: %c\n", ch, result);
    } else {
        printf("Not an alphabet.\n");
    }

    return 0;
}


#include <stdio.h>

void printBinary(unsigned int n) 
{
    for (int i = 31; i >= 0; i--) 
{
        printf("%d", (n >> i) & 1);
    }
    printf("\n");
}

int main() 
{
    unsigned int num;
    printf("Enter a number: ");
    scanf("%u", &num);
    printf("Binary Representation: ");
    printBinary(num);
    return 0;
}


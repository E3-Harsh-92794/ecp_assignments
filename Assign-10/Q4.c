#include <stdio.h>

unsigned char setEvenParity(unsigned char byte) 
{
    int count = 0;
    unsigned char temp = byte;

    while (temp) 
{
        count += temp & 1;
        temp >>= 1;
    }

    if (count % 2 != 0) 
{ 
        byte |= 0x80;  
    }
    return byte;
}

int main() 
{
    unsigned char byte;
    printf("Enter a byte value (0-255): ");
    scanf("%hhu", &byte);

    unsigned char result = setEvenParity(byte);
    printf("Result byte: %u\n", result);
    return 0;
}


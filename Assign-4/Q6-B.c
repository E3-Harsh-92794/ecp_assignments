//Queb6
#include <stdio.h>
void printHex(int n) 
{
    if(n == 0) 
    return;
    printHex(n / 16);
    int rem = n % 16;
    if(rem < 10)
     printf("%d", rem);
    else
     printf("%c", 'A' + (rem - 10));
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num == 0)
    printf("Hexadecimal: 0\n");
    else
{
    printf("Hexadecimal: ");
    printHex(num);
    printf("\n");
    }
    return 0;
}


//Queb4
#include <stdio.h>

int fibonacci(int n)
{
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

void printFibonacci(int terms)
{
    for(int i = 0; i < terms; i++)
{
        printf("%d ", fibonacci(i));
}
    printf("\n");
}

int main()
{
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printFibonacci(n);
    return 0;
}


//Que8
#include <stdio.h>

int a = 0, b = 1;

int nextFibonacci()
{
    int next = a;
    int temp = a + b;
    a = b;
    b = temp;
    return next;
}

int main()
{
  int n;
  printf("Enter number of terms: ");
  scanf("%d", &n);

for(int i = 0; i < n; i++)
{
 printf("%d ", nextFibonacci());
}
    printf("\n");
    return 0;
}


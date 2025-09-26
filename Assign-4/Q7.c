//Que7
#include <stdio.h>

void fibonacci(int);

int main()
{
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}


void fibonacci(int n) 
 {
       int a = 0, b = 1, next;
       printf("Fibonacci Series: ");
       for(int i = 1; i <= n; i++) 
    {      
           printf("%d ", a);
          next = a + b;
          a = b;
          b = next;
      }
      printf("\n");
  }


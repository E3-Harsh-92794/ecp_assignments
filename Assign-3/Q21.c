//Que21
#include <stdio.h>

int main()
{
    int num, count = 0, i, j,prime;

    printf("Enter a number: ");
    scanf("%d", &num);

    i = num + 1;
    while (count < 5)
 {
        prime = 1;
        for (j = 2; j <= i / 2; j++)
 {
           if (i % j == 0)
 {
                prime = 0;
                break;
  }
  }
        if (prime)
 {
            printf("%d ", i);
            count++;
  }
        i++;
  }
    printf("\n");
    return 0;
}


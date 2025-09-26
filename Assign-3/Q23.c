//Que23
#include <stdio.h>

int main()
 {
    int rows, i, j, coef;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++)
 {
        for (j = 0; j <= i; j++)
 {
            // binomial coefficient nCr
            if (j == 0 || j == i)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;
            printf("%d ", coef);
   }
        printf("\n");
  }
    return 0;
}


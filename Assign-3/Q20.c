//Que20
//a
/*
#include <stdio.h>

int main()
 {
    int i, j, prime;
    printf("Prime numbers between 1 and 100:\n");

    for (i = 2; i <= 100; i++)
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
        if (prime) printf("%d ", i);
    }
    printf("\n");
    return 0;
}
*/

//b
/*
#include <stdio.h>

int main()
 {
    int num, temp, digit, sum;
    printf("Armstrong numbers between 1 and 500:\n");

    for (num = 1; num <= 500; num++)
 {
        temp = num;
        sum = 0;
        while (temp > 0)
 {
            digit = temp % 10;
            sum += digit * digit * digit;
            temp /= 10;
  }
        if (sum == num)
            printf("%d ", num);
  }
    printf("\n");
    return 0;
}
*/























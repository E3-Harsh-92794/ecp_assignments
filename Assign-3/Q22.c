//Que22
//a
/*
#include <stdio.h>

int main()
{
   int i, j;
   for (i = 1; i <= 5; i++)
 {
        for (j = 1; j <= i; j++)
 {
            printf("* ");
  }
        printf("\n");
  }
    return 0;
}*/

//b
/*
#include <stdio.h>

int main()
{
 int i, j;
 for (i = 5; i >= 1; i--)
{
 for (j = 1; j <= i; j++)
{
            printf("* ");
 }
        printf("\n");
 }
    return 0;
}
*/
//c
/*
#include <stdio.h>

int main()
{
 int i, j;
 for (i = 1; i <= 5; i++)
{
 for (j = 1; j <= i; j++)
{
  printf("%d ", j);
}
        printf("\n");
}
    return 0;
}
*/


//d
/*
#include <stdio.h>
int main()
{
 int i, j;
 for (i = 1; i <= 5; i++)
{
  for (j = 5; j >= i; j--)
{
  printf("%d ", j);
}
  printf("\n");
 }
    return 0;
}
*/

//e
/*
#include <stdio.h>

int main() 
{
  int i, j;
  for (i = 1; i <= 5; i++)
 {
   for (j = 5; j >= 6 - i; j--)
 {
            printf("%d ", j);
 }
        printf("\n");
  }
    return 0;
}
*/

//f
/*
#include <stdio.h>

int main()
 {
    int i, j;
    char ch;

    for (i = 0; i < 4; i++)
 {
        for (j = 0; j < i; j++) printf("  ");  // spaces

        ch = 'A' + (2 * (3 - i)); // starting letter
        for (j = 0; j <= 2 * i; j++)
 {
            printf("%c ", ch++);
  }
        ch -= 2; // back to previous
        for (j = 0; j < 2 * i; j++)
 {
            printf("%c ", ch--);
        }
        printf("\n");
    }
    return 0;
}
*/

//g
/*
#include <stdio.h>

int main()
 {
    int i, j, k;
    char ch;

    // First row
    for (i = 0; i < 3; i++)
 {
        for (j = 0; j < i * 2; j++) printf("  ");

        ch = 'C' + i * 2;
        for (k = 0; k <= 4 - i * 2; k++)
 {
            printf("%c ", ch++);
  }
        ch -= 2;
        for (k = 0; k < 4 - i * 2; k++)
 {
            printf("%c ", ch--);
  }
        printf("\n");
    }
    return 0;
}*/

//h
/*
#include <stdio.h>

int main()
 {
    int i, j;
    char ch = 'A';

    for (i = 1; i <= 4; i++)
 {
        for (j = 1; j <= i; j++)
 {
            printf("%c ", ch++);
   }
        printf("\n");
    }
    return 0;
}*/

//i
/*
#include <stdio.h>

int main()
{
    int i, j;
    char ch;

    for (i = 0; i < 4; i++)
{
        ch = 'A' + i;
        for (j = 4; j > i; j--)
 {
            printf("%c ", ch++);
   }
        printf("\n");
    }
    return 0;
}
*/















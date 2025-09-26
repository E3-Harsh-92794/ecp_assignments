//Que6
#include <stdio.h>
void pascal(int); 

int main()
 {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    pascal(n);
    return 0;
}

void pascal(int rows)
 {
       for(int i = 0; i < rows; i++)
 {
       int num = 1;
     for(int j = 0; j <= i; j++)
 {
        printf("%d ", num); 
          num = num * (i - j) / (j + 1);
   }
   printf("\n");
 }
 }


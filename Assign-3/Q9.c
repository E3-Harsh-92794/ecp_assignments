//9
#include <stdio.h>

int main()
{
int a, b, temp;
printf("Enter two numbers: ");
scanf("%d %d", &a, &b);
printf("Steps:\n");
while (b != 0)
{
printf("%d %% %d = %d\n", a, b, a % b);
temp = b;
b = a % b;
a = temp;

}

printf("GCD = %d\n", a);
return 0;

}


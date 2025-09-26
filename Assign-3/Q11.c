//Que11

#include<stdio.h>
int main()
{
int num,i=1,fact=1;
printf("Enter a number for factorial:\n");
scanf("%d",&num);
for(i=1;i<=num;i++)
{

printf("%d*",i);
fact=fact*i;

}

printf("\b=%d",fact);
return 0;


}

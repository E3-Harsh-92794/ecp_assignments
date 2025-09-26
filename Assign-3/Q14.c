//Que14
#include<stdio.h>
int main()
{
int num,i=2,flag=0;
printf("Enter number:\n");
scanf("%d",&num);
for(i=2;i<=num/2;i++)
{
if(num%i==0)
{
flag=1;
}
}
if(flag==0)
{
printf("No. is prime no\n ");
}
else
{
printf("No. is not  a prime no. \n");

}


return 0;
}
